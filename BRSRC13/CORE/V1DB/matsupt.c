#include "matsupt.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include <stdio.h>

static br_material *(*original_BrMaterialAllocate)(char *, ...) = (br_material *(*)(char *, ...))0x004d90e0;
CARM95_HOOK_FUNCTION(original_BrMaterialAllocate, BrMaterialAllocate)
br_material* BrMaterialAllocate(char *name) {
    br_material *m;
    LOG_TRACE("(\"%s\")", name);

    (void)name;
    (void)m;

    return original_BrMaterialAllocate(name);
}

static void(*original_BrMaterialFree)(br_material *, ...) = (void(*)(br_material *, ...))0x004d9140;
CARM95_HOOK_FUNCTION(original_BrMaterialFree, BrMaterialFree)
void BrMaterialFree(br_material *m) {
    LOG_TRACE("(%p)", m);

    (void)m;

    original_BrMaterialFree(m);
}

