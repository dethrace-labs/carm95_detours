#include "pixelmap.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include <stdio.h>

static br_pixelmap *(*original_BrPixelmapAllocate)(br_uint_8, br_int_32, br_int_32, void *, int, ...) = (br_pixelmap *(*)(br_uint_8, br_int_32, br_int_32, void *, int, ...))0x004caef0;
CARM95_HOOK_FUNCTION(original_BrPixelmapAllocate, BrPixelmapAllocate)
br_pixelmap* BrPixelmapAllocate(br_uint_8 type, br_int_32 w, br_int_32 h, void *pixels, int flags) {
    LOG_TRACE("(%u, %d, %d, %p, %d)", type, w, h, pixels, flags);

    (void)type;
    (void)w;
    (void)h;
    (void)pixels;
    (void)flags;

    return original_BrPixelmapAllocate(type, w, h, pixels, flags);
}

