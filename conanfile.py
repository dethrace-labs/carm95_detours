from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain


class CarmaBypass(ConanFile):
    settings = "os", "arch", "compiler", "build_type"
    generators = "CMakeDeps"
    default_options = {
        "ulfius/*:enable_websockets": False,
        "ulfius/*:with_gnutls": False,
        "ulfius/*:with_jansson": True,
        "ulfius/*:with_libcurl": False,
        "ulfius/*:with_yder": True,
    }

    def requirements(self):
        self.requires("detours/cci.20220630")
        self.requires("ulfius/2.7.11")
        self.requires("orcania/2.3.3", override=True)

    def validate(self):
        assert self.settings.os == "Windows"
        assert self.settings.arch == "x86"
        assert self.settings.build_type == "Release"

    def generate(self):
        tc = CMakeToolchain(self)
        tc.variables["HOOK_WEBSERVER"] = True
        tc.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
