#include "sys_conf.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include "carm95_webserver.h"

#include <assert.h>
br_token(* hookvar_valid_system_config_tokens )[5] = (void*)0x0052ce20;

function_hook_state_t function_hook_state_Is_Valid_Sys_Config_Token = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(Is_Valid_Sys_Config_Token, function_hook_state_Is_Valid_Sys_Config_Token)
br_boolean Is_Valid_Sys_Config_Token(br_token t) {
    br_boolean bOK;
    int i;
    LOG_TRACE("(%d)", t);

    (void)t;
    (void)bOK;
    (void)i;

    if (function_hook_state_Is_Valid_Sys_Config_Token == HOOK_ENABLED) {
        assert(0 && "Is_Valid_Sys_Config_Token not implemented.");
        abort();
    } else {
        NOT_IMPLEMENTED();
    }
}

function_hook_state_t function_hook_state_LoadIniEntry = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LoadIniEntry, function_hook_state_LoadIniEntry)
static br_boolean(__stdcall*original_LoadIniEntry)(char *, char *, br_token, char *) = (br_boolean(__stdcall*)(char *, char *, br_token, char *))0x004e85d0;
CARM95_HOOK_FUNCTION(original_LoadIniEntry, LoadIniEntry)
br_boolean __stdcall LoadIniEntry(char *ini_file, char *section_name, br_token t, char *Entry) {
    char Temp[255];
    br_uint_16 size;
    br_value v;
    br_error r;
    LOG_TRACE("(\"%s\", \"%s\", %d, \"%s\")", ini_file, section_name, t, Entry);

    (void)ini_file;
    (void)section_name;
    (void)t;
    (void)Entry;
    (void)Temp;
    (void)size;
    (void)v;
    (void)r;

    if (function_hook_state_LoadIniEntry == HOOK_ENABLED) {
        assert(0 && "LoadIniEntry not implemented.");
        abort();
    } else {
        return original_LoadIniEntry(ini_file, section_name, t, Entry);
    }
}

function_hook_state_t function_hook_state_LoadIniConfig = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LoadIniConfig, function_hook_state_LoadIniConfig)
br_error LoadIniConfig(char *ini_file, char *section_name) {
    LOG_TRACE("(\"%s\", \"%s\")", ini_file, section_name);

    (void)ini_file;
    (void)section_name;

    if (function_hook_state_LoadIniConfig == HOOK_ENABLED) {
        assert(0 && "LoadIniConfig not implemented.");
        abort();
    } else {
        NOT_IMPLEMENTED();
    }
}

function_hook_state_t function_hook_state_LoadRegistryEntry = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LoadRegistryEntry, function_hook_state_LoadRegistryEntry)
static br_boolean(__stdcall*original_LoadRegistryEntry)(char *, void *, br_token, char *) = (br_boolean(__stdcall*)(char *, void *, br_token, char *))0x004e8640;
CARM95_HOOK_FUNCTION(original_LoadRegistryEntry, LoadRegistryEntry)
br_boolean __stdcall LoadRegistryEntry(char *Reg_Path, void *hKey, br_token t, char *Entry) {
    char Temp[255];
    br_uint_16 size;
    br_value v;
    br_error r;
    LOG_TRACE("(\"%s\", %p, %d, \"%s\")", Reg_Path, hKey, t, Entry);

    (void)Reg_Path;
    (void)hKey;
    (void)t;
    (void)Entry;
    (void)Temp;
    (void)size;
    (void)v;
    (void)r;

    if (function_hook_state_LoadRegistryEntry == HOOK_ENABLED) {
        assert(0 && "LoadRegistryEntry not implemented.");
        abort();
    } else {
        return original_LoadRegistryEntry(Reg_Path, hKey, t, Entry);
    }
}

function_hook_state_t function_hook_state_LoadRegistryConfig = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LoadRegistryConfig, function_hook_state_LoadRegistryConfig)
br_error LoadRegistryConfig(char *Reg_Path, void *hKey) {
    LOG_TRACE("(\"%s\", %p)", Reg_Path, hKey);

    (void)Reg_Path;
    (void)hKey;

    if (function_hook_state_LoadRegistryConfig == HOOK_ENABLED) {
        assert(0 && "LoadRegistryConfig not implemented.");
        abort();
    } else {
        NOT_IMPLEMENTED();
    }
}

function_hook_state_t function_hook_state_BrSetDefaultConfig = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(BrSetDefaultConfig, function_hook_state_BrSetDefaultConfig)
static br_error(__stdcall*original_BrSetDefaultConfig)(br_token, char *) = (br_error(__stdcall*)(br_token, char *))0x004e86b0;
CARM95_HOOK_FUNCTION(original_BrSetDefaultConfig, BrSetDefaultConfig)
br_error __stdcall BrSetDefaultConfig(br_token t, char *Entry) {
    char Reg_Path[255];
    int v0;
    int v1;
    int v2;
    br_value v;
    char __block0__Buffer[255];
    LOG_TRACE("(%d, \"%s\")", t, Entry);

    (void)t;
    (void)Entry;
    (void)Reg_Path;
    (void)v0;
    (void)v1;
    (void)v2;
    (void)v;
    (void)__block0__Buffer;

    if (function_hook_state_BrSetDefaultConfig == HOOK_ENABLED) {
        assert(0 && "BrSetDefaultConfig not implemented.");
        abort();
    } else {
        return original_BrSetDefaultConfig(t, Entry);
    }
}

function_hook_state_t function_hook_state_BrSystemConfigBegin = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(BrSystemConfigBegin, function_hook_state_BrSystemConfigBegin)
static br_error(__cdecl*original_BrSystemConfigBegin)() = (br_error(__cdecl*)())0x004e8180;
CARM95_HOOK_FUNCTION(original_BrSystemConfigBegin, BrSystemConfigBegin)
br_error __cdecl BrSystemConfigBegin() {
    char temp[255];
    br_value v;
    LOG_TRACE("()");

    (void)temp;
    (void)v;

    if (function_hook_state_BrSystemConfigBegin == HOOK_ENABLED) {
        assert(0 && "BrSystemConfigBegin not implemented.");
        abort();
    } else {
        return original_BrSystemConfigBegin();
    }
}

function_hook_state_t function_hook_state_BrSystemConfigLoad = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(BrSystemConfigLoad, function_hook_state_BrSystemConfigLoad)
static br_error(__cdecl*original_BrSystemConfigLoad)(br_token, char *, void *) = (br_error(__cdecl*)(br_token, char *, void *))0x004e8770;
CARM95_HOOK_FUNCTION(original_BrSystemConfigLoad, BrSystemConfigLoad)
br_error __cdecl BrSystemConfigLoad(br_token t, char *Param1, void *Param2) {
    br_error r;
    LOG_TRACE("(%d, \"%s\", %p)", t, Param1, Param2);

    (void)t;
    (void)Param1;
    (void)Param2;
    (void)r;

    if (function_hook_state_BrSystemConfigLoad == HOOK_ENABLED) {
        assert(0 && "BrSystemConfigLoad not implemented.");
        abort();
    } else {
        return original_BrSystemConfigLoad(t, Param1, Param2);
    }
}

function_hook_state_t function_hook_state_BrSystemConfigSetString = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(BrSystemConfigSetString, function_hook_state_BrSystemConfigSetString)
static br_error(__cdecl*original_BrSystemConfigSetString)(br_token, char *) = (br_error(__cdecl*)(br_token, char *))0x004e8a8c;
CARM95_HOOK_FUNCTION(original_BrSystemConfigSetString, BrSystemConfigSetString)
br_error __cdecl BrSystemConfigSetString(br_token t, char *string) {
    br_value v;
    LOG_TRACE("(%d, \"%s\")", t, string);

    (void)t;
    (void)string;
    (void)v;

    if (function_hook_state_BrSystemConfigSetString == HOOK_ENABLED) {
        assert(0 && "BrSystemConfigSetString not implemented.");
        abort();
    } else {
        return original_BrSystemConfigSetString(t, string);
    }
}

function_hook_state_t function_hook_state_BrSystemConfigQueryString = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(BrSystemConfigQueryString, function_hook_state_BrSystemConfigQueryString)
static br_error(__cdecl*original_BrSystemConfigQueryString)(br_token, char *, int) = (br_error(__cdecl*)(br_token, char *, int))0x004e8b00;
CARM95_HOOK_FUNCTION(original_BrSystemConfigQueryString, BrSystemConfigQueryString)
br_error __cdecl BrSystemConfigQueryString(br_token t, char *string, int max_size) {
    br_error r;
    br_value v;
    LOG_TRACE("(%d, \"%s\", %d)", t, string, max_size);

    (void)t;
    (void)string;
    (void)max_size;
    (void)r;
    (void)v;

    if (function_hook_state_BrSystemConfigQueryString == HOOK_ENABLED) {
        assert(0 && "BrSystemConfigQueryString not implemented.");
        abort();
    } else {
        return original_BrSystemConfigQueryString(t, string, max_size);
    }
}

