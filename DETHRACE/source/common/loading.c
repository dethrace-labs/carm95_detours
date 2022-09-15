#include "loading.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include <stdio.h>
tHeadup_info(* hookvar_gHeadup_image_info )[31] = (void*)0x0050a3f0;
#if 0
char *(* hookvar_gYour_car_names )[2][6];
#endif
#if 0
char *(* hookvar_gDrivable_car_names )[6];
#endif
char *(* hookvar_gDamage_names )[12] = (void*)0x0050a530;
char *(* hookvar_gWheel_actor_names )[6] = (void*)0x0050a560;
#if 0
char *(* hookvar_gRaces_file_names )[9];
#endif
char *(* hookvar_gNet_avail_names )[4] = (void*)0x0050a5a0;
char *(* hookvar_gFloorpan_names )[5] = (void*)0x0050a5b0;
int * hookvar_gAllow_open_to_fail  = (void*)0x0050a5c4;
int * hookvar_gDecode_thing  = (void*)0x0050a5c8;
char(* hookvar_gDecode_string )[14] = (void*)0x0050a5d0;
int(* hookvar_gFunk_groove_flags )[30] = (void*)0x00531f00;
char(* hookvar_gDef_def_water_screen_name )[32] = (void*)0x00531f80;
br_material ** hookvar_gDestn_screen_mat  = (void*)0x00531dfc;
br_material ** hookvar_gSource_screen_mat  = (void*)0x00531f78;
int * hookvar_gCurrent_race_file_index  = (void*)0x00531f7c;
int * hookvar_gGroove_funk_offset  = (void*)0x00531df8;
int * hookvar_gDemo_armour  = (void*)0x00551da8;
int * hookvar_gDemo_rank  = (void*)0x00551db0;
#if 0
int(* hookvar_gDemo_opponents )[5];
#endif
int * hookvar_gDemo_power  = (void*)0x00551da4;
int * hookvar_gDemo_offensive  = (void*)0x00551dac;

static tU32(*original_ReadU32)(FILE *, ...) = (tU32(*)(FILE *, ...))0x0041c2b0;
CARM95_HOOK_FUNCTION(original_ReadU32, ReadU32)
tU32 ReadU32(FILE *pF) {
    tU32 raw_long;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)raw_long;

    return original_ReadU32(pF);
}

static tU16(*original_ReadU16)(FILE *, ...) = (tU16(*)(FILE *, ...))0x0041c2da;
CARM95_HOOK_FUNCTION(original_ReadU16, ReadU16)
tU16 ReadU16(FILE *pF) {
    tU16 raw_short;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)raw_short;

    return original_ReadU16(pF);
}

static tU8(*original_ReadU8)(FILE *, ...) = (tU8(*)(FILE *, ...))0x0041c305;
CARM95_HOOK_FUNCTION(original_ReadU8, ReadU8)
tU8 ReadU8(FILE *pF) {
    tU8 raw_byte;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)raw_byte;

    return original_ReadU8(pF);
}

static tS32(*original_ReadS32)(FILE *, ...) = (tS32(*)(FILE *, ...))0x0041c32f;
CARM95_HOOK_FUNCTION(original_ReadS32, ReadS32)
tS32 ReadS32(FILE *pF) {
    tS32 raw_long;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)raw_long;

    return original_ReadS32(pF);
}

static tS16(*original_ReadS16)(FILE *, ...) = (tS16(*)(FILE *, ...))0x0041c359;
CARM95_HOOK_FUNCTION(original_ReadS16, ReadS16)
tS16 ReadS16(FILE *pF) {
    tS16 raw_short;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)raw_short;

    return original_ReadS16(pF);
}

static tS8(*original_ReadS8)(FILE *, ...) = (tS8(*)(FILE *, ...))0x0041c384;
CARM95_HOOK_FUNCTION(original_ReadS8, ReadS8)
tS8 ReadS8(FILE *pF) {
    tS8 raw_byte;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)raw_byte;

    return original_ReadS8(pF);
}

static void(*original_WriteU32L)(FILE *, tU32, ...) = (void(*)(FILE *, tU32, ...))0x0041c3ae;
CARM95_HOOK_FUNCTION(original_WriteU32L, WriteU32L)
void WriteU32L(FILE *pF, tU32 pNumber) {
    tU32 raw_long;
    LOG_TRACE("(%p, %u)", pF, pNumber);

    (void)pF;
    (void)pNumber;
    (void)raw_long;

    original_WriteU32L(pF, pNumber);
}

static void(*original_WriteU16L)(FILE *, tU16, ...) = (void(*)(FILE *, tU16, ...))0x0041c3d6;
CARM95_HOOK_FUNCTION(original_WriteU16L, WriteU16L)
void WriteU16L(FILE *pF, tU16 pNumber) {
    tU16 raw_short;
    LOG_TRACE("(%p, %u)", pF, pNumber);

    (void)pF;
    (void)pNumber;
    (void)raw_short;

    original_WriteU16L(pF, pNumber);
}

static void(*original_WriteU8L)(FILE *, tU8, ...) = (void(*)(FILE *, tU8, ...))0x0041c400;
CARM95_HOOK_FUNCTION(original_WriteU8L, WriteU8L)
void WriteU8L(FILE *pF, tU8 pNumber) {
    tU8 raw_byte;
    LOG_TRACE("(%p, %u)", pF, pNumber);

    (void)pF;
    (void)pNumber;
    (void)raw_byte;

    original_WriteU8L(pF, pNumber);
}

static void(*original_WriteS32L)(FILE *, tS32, ...) = (void(*)(FILE *, tS32, ...))0x0041c428;
CARM95_HOOK_FUNCTION(original_WriteS32L, WriteS32L)
void WriteS32L(FILE *pF, tS32 pNumber) {
    tS32 raw_long;
    LOG_TRACE("(%p, %d)", pF, pNumber);

    (void)pF;
    (void)pNumber;
    (void)raw_long;

    original_WriteS32L(pF, pNumber);
}

static void(*original_WriteS16L)(FILE *, tS16, ...) = (void(*)(FILE *, tS16, ...))0x0041c450;
CARM95_HOOK_FUNCTION(original_WriteS16L, WriteS16L)
void WriteS16L(FILE *pF, tS16 pNumber) {
    tS16 raw_short;
    LOG_TRACE("(%p, %d)", pF, pNumber);

    (void)pF;
    (void)pNumber;
    (void)raw_short;

    original_WriteS16L(pF, pNumber);
}

static void(*original_WriteS8L)(FILE *, tS8, ...) = (void(*)(FILE *, tS8, ...))0x0041c47a;
CARM95_HOOK_FUNCTION(original_WriteS8L, WriteS8L)
void WriteS8L(FILE *pF, tS8 pNumber) {
    tS8 raw_byte;
    LOG_TRACE("(%p, %d)", pF, pNumber);

    (void)pF;
    (void)pNumber;
    (void)raw_byte;

    original_WriteS8L(pF, pNumber);
}

static void(*original_SkipBytes)(FILE *, int, ...) = (void(*)(FILE *, int, ...))0x0041c4a2;
CARM95_HOOK_FUNCTION(original_SkipBytes, SkipBytes)
void SkipBytes(FILE *pF, int pBytes_to_skip) {
    LOG_TRACE("(%p, %d)", pF, pBytes_to_skip);

    (void)pF;
    (void)pBytes_to_skip;

    original_SkipBytes(pF, pBytes_to_skip);
}

static tU32(*original_MemReadU32)(char **, ...) = (tU32(*)(char **, ...))0x0041c4bf;
CARM95_HOOK_FUNCTION(original_MemReadU32, MemReadU32)
tU32 MemReadU32(char **pPtr) {
    tU32 raw_long;
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;
    (void)raw_long;

    return original_MemReadU32(pPtr);
}

static tU16(*original_MemReadU16)(char **, ...) = (tU16(*)(char **, ...))0x0041c4e5;
CARM95_HOOK_FUNCTION(original_MemReadU16, MemReadU16)
tU16 MemReadU16(char **pPtr) {
    tU16 raw_short;
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;
    (void)raw_short;

    return original_MemReadU16(pPtr);
}

static tU8(*original_MemReadU8)(char **, ...) = (tU8(*)(char **, ...))0x0041c50e;
CARM95_HOOK_FUNCTION(original_MemReadU8, MemReadU8)
tU8 MemReadU8(char **pPtr) {
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;

    return original_MemReadU8(pPtr);
}

static tS32(*original_MemReadS32)(char **, ...) = (tS32(*)(char **, ...))0x0041c533;
CARM95_HOOK_FUNCTION(original_MemReadS32, MemReadS32)
tS32 MemReadS32(char **pPtr) {
    tS32 raw_long;
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;
    (void)raw_long;

    return original_MemReadS32(pPtr);
}

static tS16(*original_MemReadS16)(char **, ...) = (tS16(*)(char **, ...))0x0041c559;
CARM95_HOOK_FUNCTION(original_MemReadS16, MemReadS16)
tS16 MemReadS16(char **pPtr) {
    tS16 raw_short;
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;
    (void)raw_short;

    return original_MemReadS16(pPtr);
}

static tS8(*original_MemReadS8)(char **, ...) = (tS8(*)(char **, ...))0x0041c582;
CARM95_HOOK_FUNCTION(original_MemReadS8, MemReadS8)
tS8 MemReadS8(char **pPtr) {
    tS8 raw_byte;
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;
    (void)raw_byte;

    return original_MemReadS8(pPtr);
}

static void(*original_MemSkipBytes)(char **, int, ...) = (void(*)(char **, int, ...))0x0041c5a7;
CARM95_HOOK_FUNCTION(original_MemSkipBytes, MemSkipBytes)
void MemSkipBytes(char **pPtr, int pBytes_to_skip) {
    LOG_TRACE("(%p, %d)", pPtr, pBytes_to_skip);

    (void)pPtr;
    (void)pBytes_to_skip;

    original_MemSkipBytes(pPtr, pBytes_to_skip);
}

static void(*original_LoadGeneralParameters)() = (void(*)())0x0041c5ba;
CARM95_HOOK_FUNCTION(original_LoadGeneralParameters, LoadGeneralParameters)
void LoadGeneralParameters() {
    FILE *f;
    tPath_name the_path;
    int i;
    int temp;
    char s[256];
    char *str;
    LOG_TRACE("()");

    (void)f;
    (void)the_path;
    (void)i;
    (void)temp;
    (void)s;
    (void)str;

    original_LoadGeneralParameters();
}

static void(*original_FinishLoadingGeneral)() = (void(*)())0x0041d210;
CARM95_HOOK_FUNCTION(original_FinishLoadingGeneral, FinishLoadingGeneral)
void FinishLoadingGeneral() {
    LOG_TRACE("()");


    original_FinishLoadingGeneral();
}

static br_pixelmap *(*original_LoadPixelmap)(char *, ...) = (br_pixelmap *(*)(char *, ...))0x0041d22d;
CARM95_HOOK_FUNCTION(original_LoadPixelmap, LoadPixelmap)
br_pixelmap* LoadPixelmap(char *pName) {
    tPath_name the_path;
    br_pixelmap *pm;
    char *end;
    LOG_TRACE("(\"%s\")", pName);

    (void)pName;
    (void)the_path;
    (void)pm;
    (void)end;

    return original_LoadPixelmap(pName);
}

static br_uint_32(*original_LoadPixelmaps)(char *, br_pixelmap **, br_uint_16, ...) = (br_uint_32(*)(char *, br_pixelmap **, br_uint_16, ...))0x0041d372;
CARM95_HOOK_FUNCTION(original_LoadPixelmaps, LoadPixelmaps)
br_uint_32 LoadPixelmaps(char *pFile_name, br_pixelmap **pPixelmaps, br_uint_16 pNum) {
    tPath_name path;
    int count;
    LOG_TRACE("(\"%s\", %p, %u)", pFile_name, pPixelmaps, pNum);

    (void)pFile_name;
    (void)pPixelmaps;
    (void)pNum;
    (void)path;
    (void)count;

    return original_LoadPixelmaps(pFile_name, pPixelmaps, pNum);
}

static br_pixelmap *(*original_LoadShadeTable)(char *, ...) = (br_pixelmap *(*)(char *, ...))0x0041d470;
CARM95_HOOK_FUNCTION(original_LoadShadeTable, LoadShadeTable)
br_pixelmap* LoadShadeTable(char *pName) {
    tPath_name the_path;
    LOG_TRACE("(\"%s\")", pName);

    (void)pName;
    (void)the_path;

    return original_LoadShadeTable(pName);
}

static br_material *(*original_LoadMaterial)(char *, ...) = (br_material *(*)(char *, ...))0x0041d4c8;
CARM95_HOOK_FUNCTION(original_LoadMaterial, LoadMaterial)
br_material* LoadMaterial(char *pName) {
    tPath_name the_path;
    br_material *result;
    LOG_TRACE("(\"%s\")", pName);

    (void)pName;
    (void)the_path;
    (void)result;

    return original_LoadMaterial(pName);
}

static br_model *(*original_LoadModel)(char *, ...) = (br_model *(*)(char *, ...))0x0041d525;
CARM95_HOOK_FUNCTION(original_LoadModel, LoadModel)
br_model* LoadModel(char *pName) {
    tPath_name the_path;
    br_model *model;
    LOG_TRACE("(\"%s\")", pName);

    (void)pName;
    (void)the_path;
    (void)model;

    return original_LoadModel(pName);
}

static br_actor *(*original_LoadActor)(char *, ...) = (br_actor *(*)(char *, ...))0x0041d582;
CARM95_HOOK_FUNCTION(original_LoadActor, LoadActor)
br_actor* LoadActor(char *pName) {
    tPath_name the_path;
    LOG_TRACE("(\"%s\")", pName);

    (void)pName;
    (void)the_path;

    return original_LoadActor(pName);
}

static void(*original_DRLoadPalette)(char *, ...) = (void(*)(char *, ...))0x0041d6d5;
CARM95_HOOK_FUNCTION(original_DRLoadPalette, DRLoadPalette)
void DRLoadPalette(char *pPath_name) {
    br_pixelmap *palette_array[100];
    int number_of_palettes;
    LOG_TRACE("(\"%s\")", pPath_name);

    (void)pPath_name;
    (void)palette_array;
    (void)number_of_palettes;

    original_DRLoadPalette(pPath_name);
}

static void(*original_DRLoadShadeTable)(char *, ...) = (void(*)(char *, ...))0x0041d717;
CARM95_HOOK_FUNCTION(original_DRLoadShadeTable, DRLoadShadeTable)
void DRLoadShadeTable(char *pPath_name) {
    br_pixelmap *table_array[100];
    int number_of_tables;
    LOG_TRACE("(\"%s\")", pPath_name);

    (void)pPath_name;
    (void)table_array;
    (void)number_of_tables;

    original_DRLoadShadeTable(pPath_name);
}

static void(*original_RezeroPixelmaps)(br_pixelmap **, int, ...) = (void(*)(br_pixelmap **, int, ...))0x0041d7b6;
CARM95_HOOK_FUNCTION(original_RezeroPixelmaps, RezeroPixelmaps)
void RezeroPixelmaps(br_pixelmap **pPixelmap_array, int pCount) {
    LOG_TRACE("(%p, %d)", pPixelmap_array, pCount);

    (void)pPixelmap_array;
    (void)pCount;

    original_RezeroPixelmaps(pPixelmap_array, pCount);
}

static void(*original_DRLoadPixelmaps)(char *, ...) = (void(*)(char *, ...))0x0041d759;
CARM95_HOOK_FUNCTION(original_DRLoadPixelmaps, DRLoadPixelmaps)
void DRLoadPixelmaps(char *pPath_name) {
    br_pixelmap *pixelmap_array[100];
    int number_of_pixelmaps;
    LOG_TRACE("(\"%s\")", pPath_name);

    (void)pPath_name;
    (void)pixelmap_array;
    (void)number_of_pixelmaps;

    original_DRLoadPixelmaps(pPath_name);
}

static void(*original_DRLoadMaterials)(char *, ...) = (void(*)(char *, ...))0x0041d7ed;
CARM95_HOOK_FUNCTION(original_DRLoadMaterials, DRLoadMaterials)
void DRLoadMaterials(char *pPath_name) {
    br_material *material_array[100];
    int number_of_materials;
    LOG_TRACE("(\"%s\")", pPath_name);

    (void)pPath_name;
    (void)material_array;
    (void)number_of_materials;

    original_DRLoadMaterials(pPath_name);
}

static void(*original_DRLoadModels)(char *, ...) = (void(*)(char *, ...))0x0041d82e;
CARM95_HOOK_FUNCTION(original_DRLoadModels, DRLoadModels)
void DRLoadModels(char *pPath_name) {
    br_model *model_array[100];
    int number_of_models;
    LOG_TRACE("(\"%s\")", pPath_name);

    (void)pPath_name;
    (void)model_array;
    (void)number_of_models;

    original_DRLoadModels(pPath_name);
}

static void(*original_DRLoadActors)(char *, ...) = (void(*)(char *, ...))0x0041d86f;
CARM95_HOOK_FUNCTION(original_DRLoadActors, DRLoadActors)
void DRLoadActors(char *pPath_name) {
    br_actor *actor_array[100];
    int number_of_actors;
    int i;
    LOG_TRACE("(\"%s\")", pPath_name);

    (void)pPath_name;
    (void)actor_array;
    (void)number_of_actors;
    (void)i;

    original_DRLoadActors(pPath_name);
}

static void(*original_DRLoadLights)(char *, ...) = (void(*)(char *, ...))0x0041d8e0;
CARM95_HOOK_FUNCTION(original_DRLoadLights, DRLoadLights)
void DRLoadLights(char *pPath_name) {
    br_actor *light_array[100];
    int number_of_lights;
    int i;
    LOG_TRACE("(\"%s\")", pPath_name);

    (void)pPath_name;
    (void)light_array;
    (void)number_of_lights;
    (void)i;

    original_DRLoadLights(pPath_name);
}

static void(*original_LoadInFiles)(char *, char *, void(**)(char *, ...), ...) = (void(*)(char *, char *, void(**)(char *, ...), ...))0x0041d957;
CARM95_HOOK_FUNCTION(original_LoadInFiles, LoadInFiles)
void LoadInFiles(char *pThe_base_path, char *pThe_dir_name, void(**pLoad_routine)(char *, ...)) {
    tPath_name the_path;
    LOG_TRACE("(\"%s\", \"%s\", %p)", pThe_base_path, pThe_dir_name, pLoad_routine);

    (void)pThe_base_path;
    (void)pThe_dir_name;
    (void)pLoad_routine;
    (void)the_path;

    original_LoadInFiles(pThe_base_path, pThe_dir_name, pLoad_routine);
}

static void(*original_LoadInRegisteeDir)(char *, ...) = (void(*)(char *, ...))0x0041d5fd;
CARM95_HOOK_FUNCTION(original_LoadInRegisteeDir, LoadInRegisteeDir)
void LoadInRegisteeDir(char *pThe_dir_path) {
    tPath_name the_path;
    LOG_TRACE("(\"%s\")", pThe_dir_path);

    (void)pThe_dir_path;
    (void)the_path;

    original_LoadInRegisteeDir(pThe_dir_path);
}

static void(*original_LoadInRegistees)() = (void(*)())0x0041d5df;
CARM95_HOOK_FUNCTION(original_LoadInRegistees, LoadInRegistees)
void LoadInRegistees() {
    tPath_name the_path;
    LOG_TRACE("()");

    (void)the_path;

    original_LoadInRegistees();
}

static void(*original_LoadKeyMapping)() = (void(*)())0x0041d992;
CARM95_HOOK_FUNCTION(original_LoadKeyMapping, LoadKeyMapping)
void LoadKeyMapping() {
    FILE *f;
    tPath_name the_path;
    int i;
    LOG_TRACE("()");

    (void)f;
    (void)the_path;
    (void)i;

    original_LoadKeyMapping();
}

static void(*original_LoadInterfaceStuff)(int, ...) = (void(*)(int, ...))0x0041da5c;
CARM95_HOOK_FUNCTION(original_LoadInterfaceStuff, LoadInterfaceStuff)
void LoadInterfaceStuff(int pWithin_race) {
    tPath_name path;
    int i;
    LOG_TRACE("(%d)", pWithin_race);

    (void)pWithin_race;
    (void)path;
    (void)i;

    original_LoadInterfaceStuff(pWithin_race);
}

static void(*original_UnlockInterfaceStuff)() = (void(*)())0x0041dbbf;
CARM95_HOOK_FUNCTION(original_UnlockInterfaceStuff, UnlockInterfaceStuff)
void UnlockInterfaceStuff() {
    int i;
    LOG_TRACE("()");

    (void)i;

    original_UnlockInterfaceStuff();
}

static void(*original_InitInterfaceLoadState)() = (void(*)())0x0041dcc7;
CARM95_HOOK_FUNCTION(original_InitInterfaceLoadState, InitInterfaceLoadState)
void InitInterfaceLoadState() {
    int i;
    LOG_TRACE("()");

    (void)i;

    original_InitInterfaceLoadState();
}

tS8* ConvertPixTo16BitStripMap(br_pixelmap *pBr_map) {
    int i;
    int j;
    int new_line_length;
    int current_size;
    int counting_blanks;
    int counter;
    int chunk_counter;
    int max_line_bytes;
    tU8 *next_byte;
    tU8 *strip_image;
    tU8 *current_strip_pointer;
    tU8 *temp_strip_image;
    tU8 *new_line;
    tU8 byte;
    tU16 *palette_entry;
    LOG_TRACE("(%p)", pBr_map);

    (void)pBr_map;
    (void)i;
    (void)j;
    (void)new_line_length;
    (void)current_size;
    (void)counting_blanks;
    (void)counter;
    (void)chunk_counter;
    (void)max_line_bytes;
    (void)next_byte;
    (void)strip_image;
    (void)current_strip_pointer;
    (void)temp_strip_image;
    (void)new_line;
    (void)byte;
    (void)palette_entry;

    NOT_IMPLEMENTED();
}

static tS8 *(*original_ConvertPixToStripMap)(br_pixelmap *, ...) = (tS8 *(*)(br_pixelmap *, ...))0x0041dd01;
CARM95_HOOK_FUNCTION(original_ConvertPixToStripMap, ConvertPixToStripMap)
tS8* ConvertPixToStripMap(br_pixelmap *pThe_br_map) {
    int i;
    int j;
    int new_line_length;
    int current_size;
    int counting_blanks;
    int counter;
    int chunk_counter;
    tU8 *next_byte;
    tU8 *the_strip_image;
    tU8 *current_strip_pointer;
    tU8 *temp_strip_image;
    tU8 new_line[800];
    tU8 the_byte;
    LOG_TRACE("(%p)", pThe_br_map);

    (void)pThe_br_map;
    (void)i;
    (void)j;
    (void)new_line_length;
    (void)current_size;
    (void)counting_blanks;
    (void)counter;
    (void)chunk_counter;
    (void)next_byte;
    (void)the_strip_image;
    (void)current_strip_pointer;
    (void)temp_strip_image;
    (void)new_line;
    (void)the_byte;

    return original_ConvertPixToStripMap(pThe_br_map);
}

static void(*original_KillWindscreen)(br_model *, br_material *, ...) = (void(*)(br_model *, br_material *, ...))0x0041e4de;
CARM95_HOOK_FUNCTION(original_KillWindscreen, KillWindscreen)
void KillWindscreen(br_model *pModel, br_material *pMaterial) {
    br_face *face;
    int i;
    LOG_TRACE("(%p, %p)", pModel, pMaterial);

    (void)pModel;
    (void)pMaterial;
    (void)face;
    (void)i;

    original_KillWindscreen(pModel, pMaterial);
}

static void(*original_DropOffDyingPeds)(tCar_spec *, ...) = (void(*)(tCar_spec *, ...))0x0041e564;
CARM95_HOOK_FUNCTION(original_DropOffDyingPeds, DropOffDyingPeds)
void DropOffDyingPeds(tCar_spec *pCar) {
    br_actor *child;
    br_actor *next;
    LOG_TRACE("(%p)", pCar);

    (void)pCar;
    (void)child;
    (void)next;

    original_DropOffDyingPeds(pCar);
}

static void(*original_DisposeCar)(tCar_spec *, int, ...) = (void(*)(tCar_spec *, int, ...))0x0041dfbd;
CARM95_HOOK_FUNCTION(original_DisposeCar, DisposeCar)
void DisposeCar(tCar_spec *pCar_spec, int pOwner) {
    int i;
    int j;
    LOG_TRACE("(%p, %d)", pCar_spec, pOwner);

    (void)pCar_spec;
    (void)pOwner;
    (void)i;
    (void)j;

    original_DisposeCar(pCar_spec, pOwner);
}

static void(*original_AdjustCarCoordinates)(tCar_spec *, ...) = (void(*)(tCar_spec *, ...))0x00422a79;
CARM95_HOOK_FUNCTION(original_AdjustCarCoordinates, AdjustCarCoordinates)
void AdjustCarCoordinates(tCar_spec *pCar) {
    int i;
    LOG_TRACE("(%p)", pCar);

    (void)pCar;
    (void)i;

    original_AdjustCarCoordinates(pCar);
}

static void(*original_LoadSpeedo)(FILE *, int, tCar_spec *, ...) = (void(*)(FILE *, int, tCar_spec *, ...))0x00422d43;
CARM95_HOOK_FUNCTION(original_LoadSpeedo, LoadSpeedo)
void LoadSpeedo(FILE *pF, int pIndex, tCar_spec *pCar_spec) {
    tPath_name the_path;
    char s[256];
    char *str;
    char the_char1;
    char the_char2;
    LOG_TRACE("(%p, %d, %p)", pF, pIndex, pCar_spec);

    (void)pF;
    (void)pIndex;
    (void)pCar_spec;
    (void)the_path;
    (void)s;
    (void)str;
    (void)the_char1;
    (void)the_char2;

    original_LoadSpeedo(pF, pIndex, pCar_spec);
}

static void(*original_LoadTacho)(FILE *, int, tCar_spec *, ...) = (void(*)(FILE *, int, tCar_spec *, ...))0x004230de;
CARM95_HOOK_FUNCTION(original_LoadTacho, LoadTacho)
void LoadTacho(FILE *pF, int pIndex, tCar_spec *pCar_spec) {
    tPath_name the_path;
    char s[256];
    char *str;
    char the_char1;
    char the_char2;
    LOG_TRACE("(%p, %d, %p)", pF, pIndex, pCar_spec);

    (void)pF;
    (void)pIndex;
    (void)pCar_spec;
    (void)the_path;
    (void)s;
    (void)str;
    (void)the_char1;
    (void)the_char2;

    original_LoadTacho(pF, pIndex, pCar_spec);
}

static void(*original_LoadHeadups)(FILE *, int, tCar_spec *, ...) = (void(*)(FILE *, int, tCar_spec *, ...))0x004233d3;
CARM95_HOOK_FUNCTION(original_LoadHeadups, LoadHeadups)
void LoadHeadups(FILE *pF, int pIndex, tCar_spec *pCar_spec) {
    char s[256];
    char *str;
    int j;
    int number_of_slots;
    LOG_TRACE("(%p, %d, %p)", pF, pIndex, pCar_spec);

    (void)pF;
    (void)pIndex;
    (void)pCar_spec;
    (void)s;
    (void)str;
    (void)j;
    (void)number_of_slots;

    original_LoadHeadups(pF, pIndex, pCar_spec);
}

static void(*original_ReadNonCarMechanicsData)(FILE *, tNon_car_spec *, ...) = (void(*)(FILE *, tNon_car_spec *, ...))0x0041e5d0;
CARM95_HOOK_FUNCTION(original_ReadNonCarMechanicsData, ReadNonCarMechanicsData)
void ReadNonCarMechanicsData(FILE *pF, tNon_car_spec *non_car) {
    int number;
    int i;
    int j;
    char s[256];
    tCollision_info *c;
    br_scalar wid;
    br_scalar het;
    br_scalar len;
    br_scalar ts;
    br_scalar ts1;
    br_scalar snap_angle;
    float __block0__x_0;
    float __block0__x_1;
    float __block0__x_2;
    float __block1__x_0;
    float __block1__x_1;
    float __block1__x_2;
    float __block2__x_0;
    float __block2__x_1;
    float __block2__x_2;
    float __block3__x_0;
    float __block3__x_1;
    float __block3__x_2;
    float __block4__x_0;
    float __block4__x_1;
    float __block4__x_2;
    float __block5__x_0;
    float __block5__x_1;
    float __block6__x_0;
    float __block6__x_1;
    float __block6__x_2;
    LOG_TRACE("(%p, %p)", pF, non_car);

    (void)pF;
    (void)non_car;
    (void)number;
    (void)i;
    (void)j;
    (void)s;
    (void)c;
    (void)wid;
    (void)het;
    (void)len;
    (void)ts;
    (void)ts1;
    (void)snap_angle;

    original_ReadNonCarMechanicsData(pF, non_car);
}

static void(*original_ReadMechanicsData)(FILE *, tCar_spec *, ...) = (void(*)(FILE *, tCar_spec *, ...))0x0041edfb;
CARM95_HOOK_FUNCTION(original_ReadMechanicsData, ReadMechanicsData)
void ReadMechanicsData(FILE *pF, tCar_spec *c) {
    char s[256];
    char version;
    int i;
    int j;
    br_scalar ratio;
    br_scalar ts1;
    br_scalar theta_front;
    br_scalar theta_back;
    br_scalar theta_comp;
    br_scalar wid;
    br_scalar het;
    br_scalar len;
    br_vector3 *actor_offset;
    br_scalar speed;
    br_scalar force;
    float __block0__x_0;
    float __block0__x_1;
    float __block0__x_2;
    float __block1__x_0;
    float __block1__x_1;
    float __block1__x_2;
    float __block2__x_0;
    float __block2__x_1;
    float __block2__x_2;
    float __block3__x_0;
    float __block3__x_1;
    float __block3__x_2;
    float __block4__x_0;
    float __block4__x_1;
    float __block4__x_2;
    float __block5__x_0;
    float __block5__x_1;
    float __block6__x_0;
    float __block6__x_1;
    float __block7__x_0;
    float __block7__x_1;
    float __block7__x_2;
    float __block8__x_0;
    float __block8__x_1;
    float __block8__x_2;
    float __block9__x_0;
    float __block9__x_1;
    LOG_TRACE("(%p, %p)", pF, c);

    (void)pF;
    (void)c;
    (void)s;
    (void)version;
    (void)i;
    (void)j;
    (void)ratio;
    (void)ts1;
    (void)theta_front;
    (void)theta_back;
    (void)theta_comp;
    (void)wid;
    (void)het;
    (void)len;
    (void)actor_offset;
    (void)speed;
    (void)force;

    original_ReadMechanicsData(pF, c);
}

static void(*original_LoadGear)(FILE *, int, tCar_spec *, ...) = (void(*)(FILE *, int, tCar_spec *, ...))0x004237be;
CARM95_HOOK_FUNCTION(original_LoadGear, LoadGear)
void LoadGear(FILE *pF, int pIndex, tCar_spec *pCar_spec) {
    tPath_name the_path;
    char s[256];
    char *str;
    LOG_TRACE("(%p, %d, %p)", pF, pIndex, pCar_spec);

    (void)pF;
    (void)pIndex;
    (void)pCar_spec;
    (void)the_path;
    (void)s;
    (void)str;

    original_LoadGear(pF, pIndex, pCar_spec);
}

static void(*original_AddRefOffset)(int *, ...) = (void(*)(int *, ...))0x0042387c;
CARM95_HOOK_FUNCTION(original_AddRefOffset, AddRefOffset)
void AddRefOffset(int *pRef_holder) {
    LOG_TRACE("(%p)", pRef_holder);

    (void)pRef_holder;

    original_AddRefOffset(pRef_holder);
}

static void(*original_GetDamageProgram)(FILE *, tCar_spec *, tImpact_location, ...) = (void(*)(FILE *, tCar_spec *, tImpact_location, ...))0x0042389d;
CARM95_HOOK_FUNCTION(original_GetDamageProgram, GetDamageProgram)
void GetDamageProgram(FILE *pF, tCar_spec *pCar_spec, tImpact_location pImpact_location) {
    tDamage_clause *the_clause;
    int i;
    int j;
    int k;
    int count;
    char s[256];
    char delim[64];
    char *str;
    LOG_TRACE("(%p, %p, %d)", pF, pCar_spec, pImpact_location);

    (void)pF;
    (void)pCar_spec;
    (void)pImpact_location;
    (void)the_clause;
    (void)i;
    (void)j;
    (void)k;
    (void)count;
    (void)s;
    (void)delim;
    (void)str;

    original_GetDamageProgram(pF, pCar_spec, pImpact_location);
}

static br_uint_32(*original_LinkModel)(br_actor *, tModel_pool *, ...) = (br_uint_32(*)(br_actor *, tModel_pool *, ...))0x00423d40;
CARM95_HOOK_FUNCTION(original_LinkModel, LinkModel)
br_uint_32 LinkModel(br_actor *pActor, tModel_pool *pModel_pool) {
    int i;
    LOG_TRACE("(%p, %p)", pActor, pModel_pool);

    (void)pActor;
    (void)pModel_pool;
    (void)i;

    return original_LinkModel(pActor, pModel_pool);
}

void FreeUpBonnetModels(br_model **pModel_array, int pModel_count) {
    int i;
    LOG_TRACE("(%p, %d)", pModel_array, pModel_count);

    (void)pModel_array;
    (void)pModel_count;
    (void)i;

    NOT_IMPLEMENTED();
}

static void(*original_LinkModelsToActor)(br_actor *, br_model **, int, ...) = (void(*)(br_actor *, br_model **, int, ...))0x00423d11;
CARM95_HOOK_FUNCTION(original_LinkModelsToActor, LinkModelsToActor)
void LinkModelsToActor(br_actor *pActor, br_model **pModel_array, int pModel_count) {
    tModel_pool model_pool;
    LOG_TRACE("(%p, %p, %d)", pActor, pModel_array, pModel_count);

    (void)pActor;
    (void)pModel_array;
    (void)pModel_count;
    (void)model_pool;

    original_LinkModelsToActor(pActor, pModel_array, pModel_count);
}

static void(*original_ReadShrapnelMaterials)(FILE *, tCollision_info *, ...) = (void(*)(FILE *, tCollision_info *, ...))0x0041fde3;
CARM95_HOOK_FUNCTION(original_ReadShrapnelMaterials, ReadShrapnelMaterials)
void ReadShrapnelMaterials(FILE *pF, tCollision_info *pCar_spec) {
    char s[256];
    char version;
    int i;
    LOG_TRACE("(%p, %p)", pF, pCar_spec);

    (void)pF;
    (void)pCar_spec;
    (void)s;
    (void)version;
    (void)i;

    original_ReadShrapnelMaterials(pF, pCar_spec);
}

static void(*original_CloneCar)(tCar_spec **, tCar_spec *, ...) = (void(*)(tCar_spec **, tCar_spec *, ...))0x0041fe6a;
CARM95_HOOK_FUNCTION(original_CloneCar, CloneCar)
void CloneCar(tCar_spec **pOutput_car, tCar_spec *pInput_car) {
    int i;
    LOG_TRACE("(%p, %p)", pOutput_car, pInput_car);

    (void)pOutput_car;
    (void)pInput_car;
    (void)i;

    original_CloneCar(pOutput_car, pInput_car);
}

static void(*original_DisposeClonedCar)(tCar_spec *, ...) = (void(*)(tCar_spec *, ...))0x0041ff2f;
CARM95_HOOK_FUNCTION(original_DisposeClonedCar, DisposeClonedCar)
void DisposeClonedCar(tCar_spec *pCar) {
    LOG_TRACE("(%p)", pCar);

    (void)pCar;

    original_DisposeClonedCar(pCar);
}

static int(*original_RemoveDoubleSided)(br_model *, ...) = (int(*)(br_model *, ...))0x0041ff58;
CARM95_HOOK_FUNCTION(original_RemoveDoubleSided, RemoveDoubleSided)
int RemoveDoubleSided(br_model *pModel) {
    br_face *faces;
    br_face *face;
    int temp;
    int num_double_sided_faces;
    int i;
    int orig_nfaces;
    int result;
    LOG_TRACE("(%p)", pModel);

    (void)pModel;
    (void)faces;
    (void)face;
    (void)temp;
    (void)num_double_sided_faces;
    (void)i;
    (void)orig_nfaces;
    (void)result;

    return original_RemoveDoubleSided(pModel);
}

static void(*original_MungeWindscreen)(br_model *, ...) = (void(*)(br_model *, ...))0x00423e17;
CARM95_HOOK_FUNCTION(original_MungeWindscreen, MungeWindscreen)
void MungeWindscreen(br_model *pModel) {
    br_face *face;
    int i;
    LOG_TRACE("(%p)", pModel);

    (void)pModel;
    (void)face;
    (void)i;

    original_MungeWindscreen(pModel);
}

static void(*original_SetModelFlags)(br_model *, int, ...) = (void(*)(br_model *, int, ...))0x00423f0b;
CARM95_HOOK_FUNCTION(original_SetModelFlags, SetModelFlags)
void SetModelFlags(br_model *pModel, int pOwner) {
    LOG_TRACE("(%p, %d)", pModel, pOwner);

    (void)pModel;
    (void)pOwner;

    original_SetModelFlags(pModel, pOwner);
}

static void(*original_LoadCar)(char *, tDriver, tCar_spec *, int, char *, tBrender_storage *, ...) = (void(*)(char *, tDriver, tCar_spec *, int, char *, tBrender_storage *, ...))0x00420144;
CARM95_HOOK_FUNCTION(original_LoadCar, LoadCar)
void LoadCar(char *pCar_name, tDriver pDriver, tCar_spec *pCar_spec, int pOwner, char *pDriver_name, tBrender_storage *pStorage_space) {
    FILE *f;
    FILE *g;
    FILE *h;
    tPath_name the_path;
    int i;
    int j;
    int k;
    int its_a_floorpan;
    int number_of_floorpans;
    int point_num;
    int initial_vertex;
    int old_model_count;
    int old_material_count;
    int temp_index;
    int vertex_array_size;
    char s[256];
    char *str;
    br_pixelmap *the_image;
    float rate;
    float temp_float;
    br_model *model;
    br_vector3 tv;
    int v;
    int v_num;
    int group;
    int vertex_total;
    LOG_TRACE("(\"%s\", %d, %p, %d, \"%s\", %p)", pCar_name, pDriver, pCar_spec, pOwner, pDriver_name, pStorage_space);

    (void)pCar_name;
    (void)pDriver;
    (void)pCar_spec;
    (void)pOwner;
    (void)pDriver_name;
    (void)pStorage_space;
    (void)f;
    (void)g;
    (void)h;
    (void)the_path;
    (void)i;
    (void)j;
    (void)k;
    (void)its_a_floorpan;
    (void)number_of_floorpans;
    (void)point_num;
    (void)initial_vertex;
    (void)old_model_count;
    (void)old_material_count;
    (void)temp_index;
    (void)vertex_array_size;
    (void)s;
    (void)str;
    (void)the_image;
    (void)rate;
    (void)temp_float;
    (void)model;
    (void)tv;
    (void)v;
    (void)v_num;
    (void)group;
    (void)vertex_total;

    original_LoadCar(pCar_name, pDriver, pCar_spec, pOwner, pDriver_name, pStorage_space);
}

static void(*original_LoadHeadupImages)() = (void(*)())0x00423fad;
CARM95_HOOK_FUNCTION(original_LoadHeadupImages, LoadHeadupImages)
void LoadHeadupImages() {
    int i;
    tPath_name the_path;
    LOG_TRACE("()");

    (void)i;
    (void)the_path;

    original_LoadHeadupImages();
}

static void(*original_DisposeHeadupImages)() = (void(*)())0x0042405e;
CARM95_HOOK_FUNCTION(original_DisposeHeadupImages, DisposeHeadupImages)
void DisposeHeadupImages() {
    int i;
    tPath_name the_path;
    LOG_TRACE("()");

    (void)i;
    (void)the_path;

    original_DisposeHeadupImages();
}

static FILE *(*original_OpenRaceFile)() = (FILE *(*)())0x004240b1;
CARM95_HOOK_FUNCTION(original_OpenRaceFile, OpenRaceFile)
FILE* OpenRaceFile() {
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("()");

    (void)f;
    (void)the_path;

    return original_OpenRaceFile();
}

static void(*original_SkipRestOfRace)(FILE *, ...) = (void(*)(FILE *, ...))0x0042434a;
CARM95_HOOK_FUNCTION(original_SkipRestOfRace, SkipRestOfRace)
void SkipRestOfRace(FILE *pF) {
    int j;
    int k;
    int text_chunk_count;
    int line_count;
    char s[256];
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)j;
    (void)k;
    (void)text_chunk_count;
    (void)line_count;
    (void)s;

    original_SkipRestOfRace(pF);
}

static void(*original_LoadRaces)(tRace_list_spec *, int *, int, ...) = (void(*)(tRace_list_spec *, int *, int, ...))0x00424116;
CARM95_HOOK_FUNCTION(original_LoadRaces, LoadRaces)
void LoadRaces(tRace_list_spec *pRace_list, int *pCount, int pRace_type_index) {
    FILE *f;
    int i;
    int j;
    int k;
    int number_of_racers;
    int last_race;
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %d)", pRace_list, pCount, pRace_type_index);

    (void)pRace_list;
    (void)pCount;
    (void)pRace_type_index;
    (void)f;
    (void)i;
    (void)j;
    (void)k;
    (void)number_of_racers;
    (void)last_race;
    (void)s;
    (void)str;

    original_LoadRaces(pRace_list, pCount, pRace_type_index);
}

static void(*original_UnlockOpponentMugshot)(int, ...) = (void(*)(int, ...))0x00424466;
CARM95_HOOK_FUNCTION(original_UnlockOpponentMugshot, UnlockOpponentMugshot)
void UnlockOpponentMugshot(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    original_UnlockOpponentMugshot(pIndex);
}

static void(*original_LoadOpponentMugShot)(int, ...) = (void(*)(int, ...))0x004244b0;
CARM95_HOOK_FUNCTION(original_LoadOpponentMugShot, LoadOpponentMugShot)
void LoadOpponentMugShot(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    original_LoadOpponentMugShot(pIndex);
}

static void(*original_DisposeOpponentGridIcon)(tRace_info *, int, ...) = (void(*)(tRace_info *, int, ...))0x00424557;
CARM95_HOOK_FUNCTION(original_DisposeOpponentGridIcon, DisposeOpponentGridIcon)
void DisposeOpponentGridIcon(tRace_info *pRace_info, int pIndex) {
    LOG_TRACE("(%p, %d)", pRace_info, pIndex);

    (void)pRace_info;
    (void)pIndex;

    original_DisposeOpponentGridIcon(pRace_info, pIndex);
}

static void(*original_LoadOpponentGridIcon)(tRace_info *, int, ...) = (void(*)(tRace_info *, int, ...))0x004245cf;
CARM95_HOOK_FUNCTION(original_LoadOpponentGridIcon, LoadOpponentGridIcon)
void LoadOpponentGridIcon(tRace_info *pRace_info, int pIndex) {
    LOG_TRACE("(%p, %d)", pRace_info, pIndex);

    (void)pRace_info;
    (void)pIndex;

    original_LoadOpponentGridIcon(pRace_info, pIndex);
}

static void(*original_LoadRaceInfo)(int, tRace_info *, ...) = (void(*)(int, tRace_info *, ...))0x0042466e;
CARM95_HOOK_FUNCTION(original_LoadRaceInfo, LoadRaceInfo)
void LoadRaceInfo(int pRace_index, tRace_info *pRace_info) {
    FILE *f;
    int i;
    int j;
    int k;
    int duplicate;
    int substitute;
    int auto_scum_count;
    int old_index;
    int temp_index;
    char s[256];
    char *str;
    float temp_float;
    tText_chunk *the_chunk;
    LOG_TRACE("(%d, %p)", pRace_index, pRace_info);

    (void)pRace_index;
    (void)pRace_info;
    (void)f;
    (void)i;
    (void)j;
    (void)k;
    (void)duplicate;
    (void)substitute;
    (void)auto_scum_count;
    (void)old_index;
    (void)temp_index;
    (void)s;
    (void)str;
    (void)temp_float;
    (void)the_chunk;

    original_LoadRaceInfo(pRace_index, pRace_info);
}

static void(*original_DisposeRaceInfo)(tRace_info *, ...) = (void(*)(tRace_info *, ...))0x00424ac0;
CARM95_HOOK_FUNCTION(original_DisposeRaceInfo, DisposeRaceInfo)
void DisposeRaceInfo(tRace_info *pRace_info) {
    int i;
    int j;
    int k;
    tText_chunk *the_chunk;
    LOG_TRACE("(%p)", pRace_info);

    (void)pRace_info;
    (void)i;
    (void)j;
    (void)k;
    (void)the_chunk;

    original_DisposeRaceInfo(pRace_info);
}

static void(*original_LoadGridIcons)(tRace_info *, ...) = (void(*)(tRace_info *, ...))0x00424c2e;
CARM95_HOOK_FUNCTION(original_LoadGridIcons, LoadGridIcons)
void LoadGridIcons(tRace_info *pRace_info) {
    int i;
    LOG_TRACE("(%p)", pRace_info);

    (void)pRace_info;
    (void)i;

    original_LoadGridIcons(pRace_info);
}

static void(*original_DisposeGridIcons)(tRace_info *, ...) = (void(*)(tRace_info *, ...))0x00424cab;
CARM95_HOOK_FUNCTION(original_DisposeGridIcons, DisposeGridIcons)
void DisposeGridIcons(tRace_info *pRace_info) {
    int i;
    LOG_TRACE("(%p)", pRace_info);

    (void)pRace_info;
    (void)i;

    original_DisposeGridIcons(pRace_info);
}

static void(*original_LoadOpponents)() = (void(*)())0x00424d15;
CARM95_HOOK_FUNCTION(original_LoadOpponents, LoadOpponents)
void LoadOpponents() {
    FILE *f;
    tPath_name the_path;
    int i;
    int j;
    int k;
    char s[256];
    char *str;
    tText_chunk *the_chunk;
    LOG_TRACE("()");

    (void)f;
    (void)the_path;
    (void)i;
    (void)j;
    (void)k;
    (void)s;
    (void)str;
    (void)the_chunk;

    original_LoadOpponents();
}

static br_font *(*original_LoadBRFont)(char *, ...) = (br_font *(*)(char *, ...))0x004252ee;
CARM95_HOOK_FUNCTION(original_LoadBRFont, LoadBRFont)
br_font* LoadBRFont(char *pName) {
    FILE *f;
    tPath_name the_path;
    br_font *the_font;
    tU32 data_size;
    int i;
    LOG_TRACE("(\"%s\")", pName);

    (void)pName;
    (void)f;
    (void)the_path;
    (void)the_font;
    (void)data_size;
    (void)i;

    return original_LoadBRFont(pName);
}

static void(*original_LoadParts)() = (void(*)())0x00425573;
CARM95_HOOK_FUNCTION(original_LoadParts, LoadParts)
void LoadParts() {
    int i;
    int j;
    LOG_TRACE("()");

    (void)i;
    (void)j;

    original_LoadParts();
}

static void(*original_UnlockParts)() = (void(*)())0x004256b1;
CARM95_HOOK_FUNCTION(original_UnlockParts, UnlockParts)
void UnlockParts() {
    int i;
    int j;
    LOG_TRACE("()");

    (void)i;
    (void)j;

    original_UnlockParts();
}

static br_pixelmap *(*original_LoadChromeFont)() = (br_pixelmap *(*)())0x0042575f;
CARM95_HOOK_FUNCTION(original_LoadChromeFont, LoadChromeFont)
br_pixelmap* LoadChromeFont() {
    br_pixelmap *result;
    LOG_TRACE("()");

    (void)result;

    return original_LoadChromeFont();
}

static void(*original_DisposeChromeFont)(br_pixelmap *, ...) = (void(*)(br_pixelmap *, ...))0x00425799;
CARM95_HOOK_FUNCTION(original_DisposeChromeFont, DisposeChromeFont)
void DisposeChromeFont(br_pixelmap *pThe_font) {
    LOG_TRACE("(%p)", pThe_font);

    (void)pThe_font;

    original_DisposeChromeFont(pThe_font);
}

static int(*original_GetALineAndInterpretCommand)(FILE *, char **, int, ...) = (int(*)(FILE *, char **, int, ...))0x004257b0;
CARM95_HOOK_FUNCTION(original_GetALineAndInterpretCommand, GetALineAndInterpretCommand)
int GetALineAndInterpretCommand(FILE *pF, char **pString_list, int pCount) {
    int i;
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %d)", pF, pString_list, pCount);

    (void)pF;
    (void)pString_list;
    (void)pCount;
    (void)i;
    (void)s;
    (void)str;

    return original_GetALineAndInterpretCommand(pF, pString_list, pCount);
}

static int(*original_GetAnInt)(FILE *, ...) = (int(*)(FILE *, ...))0x00425878;
CARM95_HOOK_FUNCTION(original_GetAnInt, GetAnInt)
int GetAnInt(FILE *pF) {
    char s[256];
    char *str;
    int result;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)s;
    (void)str;
    (void)result;

    return original_GetAnInt(pF);
}

static float(*original_GetAFloat)(FILE *, ...) = (float(*)(FILE *, ...))0x004258d0;
CARM95_HOOK_FUNCTION(original_GetAFloat, GetAFloat)
float GetAFloat(FILE *pF) {
    char s[256];
    char *str;
    float result;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)s;
    (void)str;
    (void)result;

    return original_GetAFloat(pF);
}

static float(*original_GetAFloatPercent)(FILE *, ...) = (float(*)(FILE *, ...))0x00425928;
CARM95_HOOK_FUNCTION(original_GetAFloatPercent, GetAFloatPercent)
float GetAFloatPercent(FILE *pF) {
    char s[256];
    char *str;
    float result;
    LOG_TRACE("(%p)", pF);

    (void)pF;
    (void)s;
    (void)str;
    (void)result;

    return original_GetAFloatPercent(pF);
}

static void(*original_GetPairOfFloats)(FILE *, float *, float *, ...) = (void(*)(FILE *, float *, float *, ...))0x00425986;
CARM95_HOOK_FUNCTION(original_GetPairOfFloats, GetPairOfFloats)
void GetPairOfFloats(FILE *pF, float *pF1, float *pF2) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p)", pF, pF1, pF2);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)s;
    (void)str;

    original_GetPairOfFloats(pF, pF1, pF2);
}

static void(*original_GetThreeFloats)(FILE *, float *, float *, float *, ...) = (void(*)(FILE *, float *, float *, float *, ...))0x004259fd;
CARM95_HOOK_FUNCTION(original_GetThreeFloats, GetThreeFloats)
void GetThreeFloats(FILE *pF, float *pF1, float *pF2, float *pF3) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p)", pF, pF1, pF2, pF3);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)pF3;
    (void)s;
    (void)str;

    original_GetThreeFloats(pF, pF1, pF2, pF3);
}

static void(*original_GetPairOfInts)(FILE *, int *, int *, ...) = (void(*)(FILE *, int *, int *, ...))0x00425a9b;
CARM95_HOOK_FUNCTION(original_GetPairOfInts, GetPairOfInts)
void GetPairOfInts(FILE *pF, int *pF1, int *pF2) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p)", pF, pF1, pF2);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)s;
    (void)str;

    original_GetPairOfInts(pF, pF1, pF2);
}

static void(*original_GetThreeInts)(FILE *, int *, int *, int *, ...) = (void(*)(FILE *, int *, int *, int *, ...))0x00425b12;
CARM95_HOOK_FUNCTION(original_GetThreeInts, GetThreeInts)
void GetThreeInts(FILE *pF, int *pF1, int *pF2, int *pF3) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p)", pF, pF1, pF2, pF3);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)pF3;
    (void)s;
    (void)str;

    original_GetThreeInts(pF, pF1, pF2, pF3);
}

static void(*original_GetThreeIntsAndAString)(FILE *, int *, int *, int *, char *, ...) = (void(*)(FILE *, int *, int *, int *, char *, ...))0x00425bb0;
CARM95_HOOK_FUNCTION(original_GetThreeIntsAndAString, GetThreeIntsAndAString)
void GetThreeIntsAndAString(FILE *pF, int *pF1, int *pF2, int *pF3, char *pS) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p, \"%s\")", pF, pF1, pF2, pF3, pS);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)pF3;
    (void)pS;
    (void)s;
    (void)str;

    original_GetThreeIntsAndAString(pF, pF1, pF2, pF3, pS);
}

static void(*original_GetFourInts)(FILE *, int *, int *, int *, int *, ...) = (void(*)(FILE *, int *, int *, int *, int *, ...))0x00425c85;
CARM95_HOOK_FUNCTION(original_GetFourInts, GetFourInts)
void GetFourInts(FILE *pF, int *pF1, int *pF2, int *pF3, int *pF4) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p, %p)", pF, pF1, pF2, pF3, pF4);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)pF3;
    (void)pF4;
    (void)s;
    (void)str;

    original_GetFourInts(pF, pF1, pF2, pF3, pF4);
}

static br_scalar(*original_GetAScalar)(FILE *, ...) = (br_scalar(*)(FILE *, ...))0x00425d4a;
CARM95_HOOK_FUNCTION(original_GetAScalar, GetAScalar)
br_scalar GetAScalar(FILE *pF) {
    LOG_TRACE("(%p)", pF);

    (void)pF;

    return original_GetAScalar(pF);
}

static void(*original_GetPairOfScalars)(FILE *, br_scalar *, br_scalar *, ...) = (void(*)(FILE *, br_scalar *, br_scalar *, ...))0x00425d66;
CARM95_HOOK_FUNCTION(original_GetPairOfScalars, GetPairOfScalars)
void GetPairOfScalars(FILE *pF, br_scalar *pS1, br_scalar *pS2) {
    float __block0__x_0;
    float __block0__x_1;
    LOG_TRACE("(%p, %p, %p)", pF, pS1, pS2);

    (void)pF;
    (void)pS1;
    (void)pS2;

    original_GetPairOfScalars(pF, pS1, pS2);
}

static void(*original_GetThreeScalars)(FILE *, br_scalar *, br_scalar *, br_scalar *, ...) = (void(*)(FILE *, br_scalar *, br_scalar *, br_scalar *, ...))0x00425d98;
CARM95_HOOK_FUNCTION(original_GetThreeScalars, GetThreeScalars)
void GetThreeScalars(FILE *pF, br_scalar *pS1, br_scalar *pS2, br_scalar *pS3) {
    float __block0__x_0;
    float __block0__x_1;
    float __block0__x_2;
    LOG_TRACE("(%p, %p, %p, %p)", pF, pS1, pS2, pS3);

    (void)pF;
    (void)pS1;
    (void)pS2;
    (void)pS3;

    original_GetThreeScalars(pF, pS1, pS2, pS3);
}

static void(*original_GetFourScalars)(FILE *, br_scalar *, br_scalar *, br_scalar *, br_scalar *, ...) = (void(*)(FILE *, br_scalar *, br_scalar *, br_scalar *, br_scalar *, ...))0x00425dd6;
CARM95_HOOK_FUNCTION(original_GetFourScalars, GetFourScalars)
void GetFourScalars(FILE *pF, br_scalar *pF1, br_scalar *pF2, br_scalar *pF3, br_scalar *pF4) {
    char s[256];
    char *str;
    float f1;
    float f2;
    float f3;
    float f4;
    LOG_TRACE("(%p, %p, %p, %p, %p)", pF, pF1, pF2, pF3, pF4);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)pF3;
    (void)pF4;
    (void)s;
    (void)str;
    (void)f1;
    (void)f2;
    (void)f3;
    (void)f4;

    original_GetFourScalars(pF, pF1, pF2, pF3, pF4);
}

static void(*original_GetFiveScalars)(FILE *, br_scalar *, br_scalar *, br_scalar *, br_scalar *, br_scalar *, ...) = (void(*)(FILE *, br_scalar *, br_scalar *, br_scalar *, br_scalar *, br_scalar *, ...))0x00425ec1;
CARM95_HOOK_FUNCTION(original_GetFiveScalars, GetFiveScalars)
void GetFiveScalars(FILE *pF, br_scalar *pF1, br_scalar *pF2, br_scalar *pF3, br_scalar *pF4, br_scalar *pF5) {
    char s[256];
    char *str;
    float f1;
    float f2;
    float f3;
    float f4;
    float f5;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p)", pF, pF1, pF2, pF3, pF4, pF5);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)pF3;
    (void)pF4;
    (void)pF5;
    (void)s;
    (void)str;
    (void)f1;
    (void)f2;
    (void)f3;
    (void)f4;
    (void)f5;

    original_GetFiveScalars(pF, pF1, pF2, pF3, pF4, pF5);
}

static void(*original_GetNScalars)(FILE *, int, br_scalar *, ...) = (void(*)(FILE *, int, br_scalar *, ...))0x00425fdb;
CARM95_HOOK_FUNCTION(original_GetNScalars, GetNScalars)
void GetNScalars(FILE *pF, int pNumber, br_scalar *pScalars) {
    char s[256];
    char *str;
    float fleurting_point_numero;
    int i;
    LOG_TRACE("(%p, %d, %p)", pF, pNumber, pScalars);

    (void)pF;
    (void)pNumber;
    (void)pScalars;
    (void)s;
    (void)str;
    (void)fleurting_point_numero;
    (void)i;

    original_GetNScalars(pF, pNumber, pScalars);
}

static void(*original_GetPairOfFloatPercents)(FILE *, float *, float *, ...) = (void(*)(FILE *, float *, float *, ...))0x0042607b;
CARM95_HOOK_FUNCTION(original_GetPairOfFloatPercents, GetPairOfFloatPercents)
void GetPairOfFloatPercents(FILE *pF, float *pF1, float *pF2) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p)", pF, pF1, pF2);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)s;
    (void)str;

    original_GetPairOfFloatPercents(pF, pF1, pF2);
}

static void(*original_GetThreeFloatPercents)(FILE *, float *, float *, float *, ...) = (void(*)(FILE *, float *, float *, float *, ...))0x00426112;
CARM95_HOOK_FUNCTION(original_GetThreeFloatPercents, GetThreeFloatPercents)
void GetThreeFloatPercents(FILE *pF, float *pF1, float *pF2, float *pF3) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p)", pF, pF1, pF2, pF3);

    (void)pF;
    (void)pF1;
    (void)pF2;
    (void)pF3;
    (void)s;
    (void)str;

    original_GetThreeFloatPercents(pF, pF1, pF2, pF3);
}

static void(*original_GetAString)(FILE *, char *, ...) = (void(*)(FILE *, char *, ...))0x004261e0;
CARM95_HOOK_FUNCTION(original_GetAString, GetAString)
void GetAString(FILE *pF, char *pString) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, \"%s\")", pF, pString);

    (void)pF;
    (void)pString;
    (void)s;
    (void)str;

    original_GetAString(pF, pString);
}

static void(*original_AboutToLoadFirstCar)() = (void(*)())0x00426240;
CARM95_HOOK_FUNCTION(original_AboutToLoadFirstCar, AboutToLoadFirstCar)
void AboutToLoadFirstCar() {
    LOG_TRACE("()");


    original_AboutToLoadFirstCar();
}

static void(*original_LoadOpponentsCars)(tRace_info *, ...) = (void(*)(tRace_info *, ...))0x0042625a;
CARM95_HOOK_FUNCTION(original_LoadOpponentsCars, LoadOpponentsCars)
void LoadOpponentsCars(tRace_info *pRace_info) {
    int i;
    LOG_TRACE("(%p)", pRace_info);

    (void)pRace_info;
    (void)i;

    original_LoadOpponentsCars(pRace_info);
}

static void(*original_DisposeOpponentsCars)(tRace_info *, ...) = (void(*)(tRace_info *, ...))0x00426359;
CARM95_HOOK_FUNCTION(original_DisposeOpponentsCars, DisposeOpponentsCars)
void DisposeOpponentsCars(tRace_info *pRace_info) {
    int i;
    LOG_TRACE("(%p)", pRace_info);

    (void)pRace_info;
    (void)i;

    original_DisposeOpponentsCars(pRace_info);
}

static void(*original_LoadMiscStrings)() = (void(*)())0x00426410;
CARM95_HOOK_FUNCTION(original_LoadMiscStrings, LoadMiscStrings)
void LoadMiscStrings() {
    int i;
    FILE *f;
    char s[256];
    tPath_name the_path;
    LOG_TRACE("()");

    (void)i;
    (void)f;
    (void)s;
    (void)the_path;

    original_LoadMiscStrings();
}

static void(*original_FillInRaceInfo)(tRace_info *, ...) = (void(*)(tRace_info *, ...))0x0042652d;
CARM95_HOOK_FUNCTION(original_FillInRaceInfo, FillInRaceInfo)
void FillInRaceInfo(tRace_info *pThe_race) {
    LOG_TRACE("(%p)", pThe_race);

    (void)pThe_race;

    original_FillInRaceInfo(pThe_race);
}

static FILE *(*original_OldDRfopen)(char *, char *, ...) = (FILE *(*)(char *, char *, ...))0x00426654;
CARM95_HOOK_FUNCTION(original_OldDRfopen, OldDRfopen)
FILE* OldDRfopen(char *pFilename, char *pMode) {
    FILE *fp;
    FILE *file_ptr;
    FILE *test1;
    FILE *test2;
    char *data_dir;
    tPath_name CD_dir;
    tPath_name path_file;
    tPath_name source_check;
    static int source_exists;
    int len;
    char __block0__ch;
    LOG_TRACE("(\"%s\", \"%s\")", pFilename, pMode);

    (void)pFilename;
    (void)pMode;
    (void)fp;
    (void)file_ptr;
    (void)test1;
    (void)test2;
    (void)data_dir;
    (void)CD_dir;
    (void)path_file;
    (void)source_check;
    (void)source_exists;
    (void)len;

    return original_OldDRfopen(pFilename, pMode);
}

static void(*original_AllowOpenToFail)() = (void(*)())0x00426563;
CARM95_HOOK_FUNCTION(original_AllowOpenToFail, AllowOpenToFail)
void AllowOpenToFail() {
    LOG_TRACE("()");


    original_AllowOpenToFail();
}

void DoNotAllowOpenToFail() {
    LOG_TRACE("()");


    NOT_IMPLEMENTED();
}

static FILE *(*original_DRfopen)(char *, char *, ...) = (FILE *(*)(char *, char *, ...))0x00426583;
CARM95_HOOK_FUNCTION(original_DRfopen, DRfopen)
FILE* DRfopen(char *pFilename, char *pMode) {
    FILE *result;
    tPath_name CD_dir;
    char msg[336];
    LOG_TRACE("(\"%s\", \"%s\")", pFilename, pMode);

    (void)pFilename;
    (void)pMode;
    (void)result;
    (void)CD_dir;
    (void)msg;

    return original_DRfopen(pFilename, pMode);
}

static int(*original_GetCDPathFromPathsTxtFile)(char *, ...) = (int(*)(char *, ...))0x00426cc5;
CARM95_HOOK_FUNCTION(original_GetCDPathFromPathsTxtFile, GetCDPathFromPathsTxtFile)
int GetCDPathFromPathsTxtFile(char *pPath_name) {
    static int got_it_already;
    static tPath_name cd_pathname;
    FILE *paths_txt_fp;
    tPath_name paths_txt;
    LOG_TRACE("(\"%s\")", pPath_name);

    (void)pPath_name;
    (void)got_it_already;
    (void)cd_pathname;
    (void)paths_txt_fp;
    (void)paths_txt;

    return original_GetCDPathFromPathsTxtFile(pPath_name);
}

int TestForOriginalCarmaCDinDrive() {
    LOG_TRACE("()");


    NOT_IMPLEMENTED();
}

static int(*original_OriginalCarmaCDinDrive)() = (int(*)())0x00427158;
CARM95_HOOK_FUNCTION(original_OriginalCarmaCDinDrive, OriginalCarmaCDinDrive)
int OriginalCarmaCDinDrive() {
    LOG_TRACE("()");


    return original_OriginalCarmaCDinDrive();
}

static int(*original_CarmaCDinDriveOrFullGameInstalled)() = (int(*)())0x0042716d;
CARM95_HOOK_FUNCTION(original_CarmaCDinDriveOrFullGameInstalled, CarmaCDinDriveOrFullGameInstalled)
int CarmaCDinDriveOrFullGameInstalled() {
    LOG_TRACE("()");


    return original_CarmaCDinDriveOrFullGameInstalled();
}

static void(*original_ReadNetworkSettings)(FILE *, tNet_game_options *, ...) = (void(*)(FILE *, tNet_game_options *, ...))0x00427199;
CARM95_HOOK_FUNCTION(original_ReadNetworkSettings, ReadNetworkSettings)
void ReadNetworkSettings(FILE *pF, tNet_game_options *pOptions) {
    LOG_TRACE("(%p, %p)", pF, pOptions);

    (void)pF;
    (void)pOptions;

    original_ReadNetworkSettings(pF, pOptions);
}

static int(*original_PrintNetOptions)(FILE *, int, ...) = (int(*)(FILE *, int, ...))0x00427269;
CARM95_HOOK_FUNCTION(original_PrintNetOptions, PrintNetOptions)
int PrintNetOptions(FILE *pF, int pIndex) {
    LOG_TRACE("(%p, %d)", pF, pIndex);

    (void)pF;
    (void)pIndex;

    return original_PrintNetOptions(pF, pIndex);
}

static int(*original_SaveOptions)() = (int(*)())0x004273e5;
CARM95_HOOK_FUNCTION(original_SaveOptions, SaveOptions)
int SaveOptions() {
    tPath_name the_path;
    FILE *f;
    LOG_TRACE("()");

    (void)the_path;
    (void)f;

    return original_SaveOptions();
}

static int(*original_RestoreOptions)() = (int(*)())0x004278be;
CARM95_HOOK_FUNCTION(original_RestoreOptions, RestoreOptions)
int RestoreOptions() {
    tPath_name the_path;
    FILE *f;
    char line[80];
    char token[80];
    char *s;
    float arg;
    LOG_TRACE("()");

    (void)the_path;
    (void)f;
    (void)line;
    (void)token;
    (void)s;
    (void)arg;

    return original_RestoreOptions();
}

static void(*original_InitFunkGrooveFlags)() = (void(*)())0x00427e87;
CARM95_HOOK_FUNCTION(original_InitFunkGrooveFlags, InitFunkGrooveFlags)
void InitFunkGrooveFlags() {
    int i;
    LOG_TRACE("()");

    (void)i;

    original_InitFunkGrooveFlags();
}
