#include "flicplay.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include "carm95_webserver.h"

#include <assert.h>
int * hookvar_gPalette_allocate_count  = (void*)0x00514fa0;
int * hookvar_gPalette_fuck_prevention  = (void*)0x00514fa4;
int * hookvar_gDark_mode  = (void*)0x00514fa8;
int * hookvar_gTransparency_on  = (void*)0x00514fac;
int * hookvar_gPanel_flic_disable  = (void*)0x00514fb0;
int * hookvar_gPending_flic  = (void*)0x00514fb4;
int * hookvar_gPlay_from_disk  = (void*)0x00514fb8;
int * hookvar_gTrans_enabled  = (void*)0x00514fbc;
br_pixelmap *(* hookvar_gPanel_buffer )[2] = (void*)0x00514fc0;
tU32 * hookvar_gSound_time  = (void*)0x00514fc8;
tFlic_spec(* hookvar_gMain_flic_list )[372] = (void*)0x00514fd0;
int(* hookvar_gFlic_bunch0 )[29] = (void*)0x00518420;
int(* hookvar_gFlic_bunch1 )[31] = (void*)0x00518498;
int(* hookvar_gFlic_bunch2 )[8] = (void*)0x00518518;
int(* hookvar_gFlic_bunch3 )[13] = (void*)0x00518538;
int(* hookvar_gFlic_bunch4 )[22] = (void*)0x00518570;
int(* hookvar_gFlic_bunch5 )[5] = (void*)0x005185c8;
int(* hookvar_gFlic_bunch6 )[51] = (void*)0x005185e0;
int(* hookvar_gFlic_bunch7 )[7] = (void*)0x005186b0;
int(* hookvar_gFlic_bunch8 )[16] = (void*)0x005186d0;
tFlic_bunch(* hookvar_gFlic_bunch )[9] = (void*)0x00518710;
char(* hookvar_gLast_flic_name )[14] = (void*)0x00518758;
tU32(* hookvar_gPanel_flic_data_length )[2] = (void*)0x0053d0b8;
tU32(* hookvar_gLast_panel_frame_time )[2] = (void*)0x0053d1b8;
tU8 *(* hookvar_gPanel_flic_data )[2] = (void*)0x0053d060;
int(* hookvar_gPanel_flic_top )[2] = (void*)0x0053d0c0;
#if 0
tFlic_descriptor(* hookvar_gPanel_flic )[2];
#endif
int(* hookvar_gPanel_flic_left )[2] = (void*)0x0053d0b0;
int * hookvar_gPending_pending_flic  = (void*)0x0053d0cc;
int * hookvar_gSound_ID  = (void*)0x0053d1c0;
int * hookvar_gTranslation_count  = (void*)0x0053d06c;
tDR_font *(* hookvar_gTrans_fonts )[15] = (void*)0x0053d070;
tTranslation_record ** hookvar_gTranslations  = (void*)0x0053d0d0;
br_pixelmap ** hookvar_gPalette  = (void*)0x0053d0c8;
void ** hookvar_gPalette_pixels  = (void*)0x0053d068;
tFlic_descriptor ** hookvar_gFirst_flic  = (void*)0x0053d0ac;

function_hook_state_t function_hook_state_EnableTranslationText = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(EnableTranslationText, function_hook_state_EnableTranslationText)
static void(__cdecl*original_EnableTranslationText)() = (void(__cdecl*)())0x00495990;
CARM95_HOOK_FUNCTION(original_EnableTranslationText, EnableTranslationText)
void __cdecl EnableTranslationText() {
    LOG_TRACE("()");


    if (function_hook_state_EnableTranslationText == HOOK_ENABLED) {
        assert(0 && "EnableTranslationText not implemented.");
        abort();
    } else {
        original_EnableTranslationText();
    }
}

function_hook_state_t function_hook_state_DisableTranslationText = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DisableTranslationText, function_hook_state_DisableTranslationText)
static void(__cdecl*original_DisableTranslationText)() = (void(__cdecl*)())0x004959a5;
CARM95_HOOK_FUNCTION(original_DisableTranslationText, DisableTranslationText)
void __cdecl DisableTranslationText() {
    LOG_TRACE("()");


    if (function_hook_state_DisableTranslationText == HOOK_ENABLED) {
        assert(0 && "DisableTranslationText not implemented.");
        abort();
    } else {
        original_DisableTranslationText();
    }
}

function_hook_state_t function_hook_state_SetFlicSound = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(SetFlicSound, function_hook_state_SetFlicSound)
static void(__cdecl*original_SetFlicSound)(int, tU32) = (void(__cdecl*)(int, tU32))0x004959ba;
CARM95_HOOK_FUNCTION(original_SetFlicSound, SetFlicSound)
void __cdecl SetFlicSound(int pSound_ID, tU32 pSound_time) {
    LOG_TRACE("(%d, %u)", pSound_ID, pSound_time);

    (void)pSound_ID;
    (void)pSound_time;

    if (function_hook_state_SetFlicSound == HOOK_ENABLED) {
        assert(0 && "SetFlicSound not implemented.");
        abort();
    } else {
        original_SetFlicSound(pSound_ID, pSound_time);
    }
}

function_hook_state_t function_hook_state_TranslationMode = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(TranslationMode, function_hook_state_TranslationMode)
static int(__cdecl*original_TranslationMode)() = (int(__cdecl*)())0x004959d5;
CARM95_HOOK_FUNCTION(original_TranslationMode, TranslationMode)
int __cdecl TranslationMode() {
    LOG_TRACE("()");


    if (function_hook_state_TranslationMode == HOOK_ENABLED) {
        assert(0 && "TranslationMode not implemented.");
        abort();
    } else {
        return original_TranslationMode();
    }
}

function_hook_state_t function_hook_state_DontLetFlicFuckWithPalettes = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DontLetFlicFuckWithPalettes, function_hook_state_DontLetFlicFuckWithPalettes)
static void(__cdecl*original_DontLetFlicFuckWithPalettes)() = (void(__cdecl*)())0x004959ea;
CARM95_HOOK_FUNCTION(original_DontLetFlicFuckWithPalettes, DontLetFlicFuckWithPalettes)
void __cdecl DontLetFlicFuckWithPalettes() {
    LOG_TRACE("()");


    if (function_hook_state_DontLetFlicFuckWithPalettes == HOOK_ENABLED) {
        assert(0 && "DontLetFlicFuckWithPalettes not implemented.");
        abort();
    } else {
        original_DontLetFlicFuckWithPalettes();
    }
}

function_hook_state_t function_hook_state_LetFlicFuckWithPalettes = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LetFlicFuckWithPalettes, function_hook_state_LetFlicFuckWithPalettes)
static void(__cdecl*original_LetFlicFuckWithPalettes)() = (void(__cdecl*)())0x004959ff;
CARM95_HOOK_FUNCTION(original_LetFlicFuckWithPalettes, LetFlicFuckWithPalettes)
void __cdecl LetFlicFuckWithPalettes() {
    LOG_TRACE("()");


    if (function_hook_state_LetFlicFuckWithPalettes == HOOK_ENABLED) {
        assert(0 && "LetFlicFuckWithPalettes not implemented.");
        abort();
    } else {
        original_LetFlicFuckWithPalettes();
    }
}

function_hook_state_t function_hook_state_PlayFlicsInDarkness = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PlayFlicsInDarkness, function_hook_state_PlayFlicsInDarkness)
static void(__cdecl*original_PlayFlicsInDarkness)() = (void(__cdecl*)())0x00495a14;
CARM95_HOOK_FUNCTION(original_PlayFlicsInDarkness, PlayFlicsInDarkness)
void __cdecl PlayFlicsInDarkness() {
    LOG_TRACE("()");


    if (function_hook_state_PlayFlicsInDarkness == HOOK_ENABLED) {
        assert(0 && "PlayFlicsInDarkness not implemented.");
        abort();
    } else {
        original_PlayFlicsInDarkness();
    }
}

function_hook_state_t function_hook_state_ReilluminateFlics = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ReilluminateFlics, function_hook_state_ReilluminateFlics)
static void(__cdecl*original_ReilluminateFlics)() = (void(__cdecl*)())0x00495a29;
CARM95_HOOK_FUNCTION(original_ReilluminateFlics, ReilluminateFlics)
void __cdecl ReilluminateFlics() {
    LOG_TRACE("()");


    if (function_hook_state_ReilluminateFlics == HOOK_ENABLED) {
        assert(0 && "ReilluminateFlics not implemented.");
        abort();
    } else {
        original_ReilluminateFlics();
    }
}

function_hook_state_t function_hook_state_TurnFlicTransparencyOn = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(TurnFlicTransparencyOn, function_hook_state_TurnFlicTransparencyOn)
static void(__cdecl*original_TurnFlicTransparencyOn)() = (void(__cdecl*)())0x00495a43;
CARM95_HOOK_FUNCTION(original_TurnFlicTransparencyOn, TurnFlicTransparencyOn)
void __cdecl TurnFlicTransparencyOn() {
    LOG_TRACE("()");


    if (function_hook_state_TurnFlicTransparencyOn == HOOK_ENABLED) {
        assert(0 && "TurnFlicTransparencyOn not implemented.");
        abort();
    } else {
        original_TurnFlicTransparencyOn();
    }
}

function_hook_state_t function_hook_state_TurnFlicTransparencyOff = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(TurnFlicTransparencyOff, function_hook_state_TurnFlicTransparencyOff)
static void(__cdecl*original_TurnFlicTransparencyOff)() = (void(__cdecl*)())0x00495a58;
CARM95_HOOK_FUNCTION(original_TurnFlicTransparencyOff, TurnFlicTransparencyOff)
void __cdecl TurnFlicTransparencyOff() {
    LOG_TRACE("()");


    if (function_hook_state_TurnFlicTransparencyOff == HOOK_ENABLED) {
        assert(0 && "TurnFlicTransparencyOff not implemented.");
        abort();
    } else {
        original_TurnFlicTransparencyOff();
    }
}

function_hook_state_t function_hook_state_PlayFlicsFromDisk = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PlayFlicsFromDisk, function_hook_state_PlayFlicsFromDisk)
static void(__cdecl*original_PlayFlicsFromDisk)() = (void(__cdecl*)())0x00495a6d;
CARM95_HOOK_FUNCTION(original_PlayFlicsFromDisk, PlayFlicsFromDisk)
void __cdecl PlayFlicsFromDisk() {
    LOG_TRACE("()");


    if (function_hook_state_PlayFlicsFromDisk == HOOK_ENABLED) {
        assert(0 && "PlayFlicsFromDisk not implemented.");
        abort();
    } else {
        original_PlayFlicsFromDisk();
    }
}

function_hook_state_t function_hook_state_PlayFlicsFromMemory = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PlayFlicsFromMemory, function_hook_state_PlayFlicsFromMemory)
static void(__cdecl*original_PlayFlicsFromMemory)() = (void(__cdecl*)())0x00495a82;
CARM95_HOOK_FUNCTION(original_PlayFlicsFromMemory, PlayFlicsFromMemory)
void __cdecl PlayFlicsFromMemory() {
    LOG_TRACE("()");


    if (function_hook_state_PlayFlicsFromMemory == HOOK_ENABLED) {
        assert(0 && "PlayFlicsFromMemory not implemented.");
        abort();
    } else {
        original_PlayFlicsFromMemory();
    }
}

function_hook_state_t function_hook_state_FlicsPlayedFromDisk = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FlicsPlayedFromDisk, function_hook_state_FlicsPlayedFromDisk)
static int(__cdecl*original_FlicsPlayedFromDisk)() = (int(__cdecl*)())0x00495a97;
CARM95_HOOK_FUNCTION(original_FlicsPlayedFromDisk, FlicsPlayedFromDisk)
int __cdecl FlicsPlayedFromDisk() {
    LOG_TRACE("()");


    if (function_hook_state_FlicsPlayedFromDisk == HOOK_ENABLED) {
        assert(0 && "FlicsPlayedFromDisk not implemented.");
        abort();
    } else {
        return original_FlicsPlayedFromDisk();
    }
}

function_hook_state_t function_hook_state_TurnOffPanelFlics = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(TurnOffPanelFlics, function_hook_state_TurnOffPanelFlics)
static void(__cdecl*original_TurnOffPanelFlics)() = (void(__cdecl*)())0x00495aac;
CARM95_HOOK_FUNCTION(original_TurnOffPanelFlics, TurnOffPanelFlics)
void __cdecl TurnOffPanelFlics() {
    LOG_TRACE("()");


    if (function_hook_state_TurnOffPanelFlics == HOOK_ENABLED) {
        assert(0 && "TurnOffPanelFlics not implemented.");
        abort();
    } else {
        original_TurnOffPanelFlics();
    }
}

function_hook_state_t function_hook_state_TurnOnPanelFlics = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(TurnOnPanelFlics, function_hook_state_TurnOnPanelFlics)
static void(__cdecl*original_TurnOnPanelFlics)() = (void(__cdecl*)())0x00495ac1;
CARM95_HOOK_FUNCTION(original_TurnOnPanelFlics, TurnOnPanelFlics)
void __cdecl TurnOnPanelFlics() {
    LOG_TRACE("()");


    if (function_hook_state_TurnOnPanelFlics == HOOK_ENABLED) {
        assert(0 && "TurnOnPanelFlics not implemented.");
        abort();
    } else {
        original_TurnOnPanelFlics();
    }
}

function_hook_state_t function_hook_state_GetPanelFlicFrameIndex = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(GetPanelFlicFrameIndex, function_hook_state_GetPanelFlicFrameIndex)
static int(__cdecl*original_GetPanelFlicFrameIndex)(int) = (int(__cdecl*)(int))0x00495ad6;
CARM95_HOOK_FUNCTION(original_GetPanelFlicFrameIndex, GetPanelFlicFrameIndex)
int __cdecl GetPanelFlicFrameIndex(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    if (function_hook_state_GetPanelFlicFrameIndex == HOOK_ENABLED) {
        assert(0 && "GetPanelFlicFrameIndex not implemented.");
        abort();
    } else {
        return original_GetPanelFlicFrameIndex(pIndex);
    }
}

function_hook_state_t function_hook_state_FlicPaletteAllocate = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FlicPaletteAllocate, function_hook_state_FlicPaletteAllocate)
static void(__cdecl*original_FlicPaletteAllocate)() = (void(__cdecl*)())0x00495af9;
CARM95_HOOK_FUNCTION(original_FlicPaletteAllocate, FlicPaletteAllocate)
void __cdecl FlicPaletteAllocate() {
    LOG_TRACE("()");


    if (function_hook_state_FlicPaletteAllocate == HOOK_ENABLED) {
        assert(0 && "FlicPaletteAllocate not implemented.");
        abort();
    } else {
        original_FlicPaletteAllocate();
    }
}

function_hook_state_t function_hook_state_AssertFlicPixelmap = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AssertFlicPixelmap, function_hook_state_AssertFlicPixelmap)
static void(__cdecl*original_AssertFlicPixelmap)(tFlic_descriptor_ptr, br_pixelmap *) = (void(__cdecl*)(tFlic_descriptor_ptr, br_pixelmap *))0x00495b39;
CARM95_HOOK_FUNCTION(original_AssertFlicPixelmap, AssertFlicPixelmap)
void __cdecl AssertFlicPixelmap(tFlic_descriptor_ptr pFlic_info, br_pixelmap *pDest_pixelmap) {
    LOG_TRACE("(%p, %p)", pFlic_info, pDest_pixelmap);

    (void)pFlic_info;
    (void)pDest_pixelmap;

    if (function_hook_state_AssertFlicPixelmap == HOOK_ENABLED) {
        assert(0 && "AssertFlicPixelmap not implemented.");
        abort();
    } else {
        original_AssertFlicPixelmap(pFlic_info, pDest_pixelmap);
    }
}

function_hook_state_t function_hook_state_StartFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(StartFlic, function_hook_state_StartFlic)
static int(__cdecl*original_StartFlic)(char *, int, tFlic_descriptor_ptr, tU32, tS8 *, br_pixelmap *, int, int, int) = (int(__cdecl*)(char *, int, tFlic_descriptor_ptr, tU32, tS8 *, br_pixelmap *, int, int, int))0x00495b77;
CARM95_HOOK_FUNCTION(original_StartFlic, StartFlic)
int __cdecl StartFlic(char *pFile_name, int pIndex, tFlic_descriptor_ptr pFlic_info, tU32 pSize, tS8 *pData_ptr, br_pixelmap *pDest_pixelmap, int pX_offset, int pY_offset, int pFrame_rate) {
    tU16 claimed_speed;
    tU16 magic_number;
    tPath_name the_path;
    int total_size;
    LOG_TRACE("(\"%s\", %d, %p, %u, %p, %p, %d, %d, %d)", pFile_name, pIndex, pFlic_info, pSize, pData_ptr, pDest_pixelmap, pX_offset, pY_offset, pFrame_rate);

    (void)pFile_name;
    (void)pIndex;
    (void)pFlic_info;
    (void)pSize;
    (void)pData_ptr;
    (void)pDest_pixelmap;
    (void)pX_offset;
    (void)pY_offset;
    (void)pFrame_rate;
    (void)claimed_speed;
    (void)magic_number;
    (void)the_path;
    (void)total_size;

    if (function_hook_state_StartFlic == HOOK_ENABLED) {
        assert(0 && "StartFlic not implemented.");
        abort();
    } else {
        return original_StartFlic(pFile_name, pIndex, pFlic_info, pSize, pData_ptr, pDest_pixelmap, pX_offset, pY_offset, pFrame_rate);
    }
}

function_hook_state_t function_hook_state_FreeFlicPaletteAllocate = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FreeFlicPaletteAllocate, function_hook_state_FreeFlicPaletteAllocate)
static void(__cdecl*original_FreeFlicPaletteAllocate)() = (void(__cdecl*)())0x00495f27;
CARM95_HOOK_FUNCTION(original_FreeFlicPaletteAllocate, FreeFlicPaletteAllocate)
void __cdecl FreeFlicPaletteAllocate() {
    LOG_TRACE("()");


    if (function_hook_state_FreeFlicPaletteAllocate == HOOK_ENABLED) {
        assert(0 && "FreeFlicPaletteAllocate not implemented.");
        abort();
    } else {
        original_FreeFlicPaletteAllocate();
    }
}

function_hook_state_t function_hook_state_EndFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(EndFlic, function_hook_state_EndFlic)
static int(__cdecl*original_EndFlic)(tFlic_descriptor_ptr) = (int(__cdecl*)(tFlic_descriptor_ptr))0x00495f71;
CARM95_HOOK_FUNCTION(original_EndFlic, EndFlic)
int __cdecl EndFlic(tFlic_descriptor_ptr pFlic_info) {
    LOG_TRACE("(%p)", pFlic_info);

    (void)pFlic_info;

    if (function_hook_state_EndFlic == HOOK_ENABLED) {
        assert(0 && "EndFlic not implemented.");
        abort();
    } else {
        return original_EndFlic(pFlic_info);
    }
}

function_hook_state_t function_hook_state_DoColourMap = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoColourMap, function_hook_state_DoColourMap)
static void(__cdecl*original_DoColourMap)(tFlic_descriptor_ptr, tU32) = (void(__cdecl*)(tFlic_descriptor_ptr, tU32))0x0049639a;
CARM95_HOOK_FUNCTION(original_DoColourMap, DoColourMap)
void __cdecl DoColourMap(tFlic_descriptor_ptr pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int packet_count;
    int skip_count;
    int change_count;
    int current_colour;
    tU8 *palette_pixels;
    tU8 red;
    tU8 green;
    tU8 blue;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)packet_count;
    (void)skip_count;
    (void)change_count;
    (void)current_colour;
    (void)palette_pixels;
    (void)red;
    (void)green;
    (void)blue;

    if (function_hook_state_DoColourMap == HOOK_ENABLED) {
        assert(0 && "DoColourMap not implemented.");
        abort();
    } else {
        original_DoColourMap(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoDifferenceX = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoDifferenceX, function_hook_state_DoDifferenceX)
static void(__cdecl*original_DoDifferenceX)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x004964e3;
CARM95_HOOK_FUNCTION(original_DoDifferenceX, DoDifferenceX)
void __cdecl DoDifferenceX(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int first_line;
    int line_count;
    int number_of_packets;
    int skip_count;
    int size_count;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)k;
    (void)first_line;
    (void)line_count;
    (void)number_of_packets;
    (void)skip_count;
    (void)size_count;
    (void)pixel_ptr;
    (void)line_pixel_ptr;
    (void)the_byte;
    (void)the_row_bytes;

    if (function_hook_state_DoDifferenceX == HOOK_ENABLED) {
        assert(0 && "DoDifferenceX not implemented.");
        abort();
    } else {
        original_DoDifferenceX(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoDifferenceTrans = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoDifferenceTrans, function_hook_state_DoDifferenceTrans)
static void(__cdecl*original_DoDifferenceTrans)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x0049663f;
CARM95_HOOK_FUNCTION(original_DoDifferenceTrans, DoDifferenceTrans)
void __cdecl DoDifferenceTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int first_line;
    int line_count;
    int number_of_packets;
    int skip_count;
    int size_count;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)k;
    (void)first_line;
    (void)line_count;
    (void)number_of_packets;
    (void)skip_count;
    (void)size_count;
    (void)pixel_ptr;
    (void)line_pixel_ptr;
    (void)the_byte;
    (void)the_row_bytes;

    if (function_hook_state_DoDifferenceTrans == HOOK_ENABLED) {
        assert(0 && "DoDifferenceTrans not implemented.");
        abort();
    } else {
        original_DoDifferenceTrans(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoColour256 = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoColour256, function_hook_state_DoColour256)
static void(__cdecl*original_DoColour256)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x004967ce;
CARM95_HOOK_FUNCTION(original_DoColour256, DoColour256)
void __cdecl DoColour256(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int packet_count;
    int skip_count;
    int change_count;
    int current_colour;
    tU8 *palette_pixels;
    tU8 red;
    tU8 green;
    tU8 blue;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)packet_count;
    (void)skip_count;
    (void)change_count;
    (void)current_colour;
    (void)palette_pixels;
    (void)red;
    (void)green;
    (void)blue;

    if (function_hook_state_DoColour256 == HOOK_ENABLED) {
        assert(0 && "DoColour256 not implemented.");
        abort();
    } else {
        original_DoColour256(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoDeltaTrans = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoDeltaTrans, function_hook_state_DoDeltaTrans)
static void(__cdecl*original_DoDeltaTrans)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x00496902;
CARM95_HOOK_FUNCTION(original_DoDeltaTrans, DoDeltaTrans)
void __cdecl DoDeltaTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int line_count;
    int number_of_packets;
    int skip_count;
    int size_count;
    tU8 *pixel_ptr;
    tU8 the_byte;
    tU8 the_byte2;
    tU32 the_row_bytes;
    tU16 *line_pixel_ptr;
    tU16 the_word;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)k;
    (void)line_count;
    (void)number_of_packets;
    (void)skip_count;
    (void)size_count;
    (void)pixel_ptr;
    (void)the_byte;
    (void)the_byte2;
    (void)the_row_bytes;
    (void)line_pixel_ptr;
    (void)the_word;

    if (function_hook_state_DoDeltaTrans == HOOK_ENABLED) {
        assert(0 && "DoDeltaTrans not implemented.");
        abort();
    } else {
        original_DoDeltaTrans(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoDeltaX = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoDeltaX, function_hook_state_DoDeltaX)
static void(__cdecl*original_DoDeltaX)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x00496b49;
CARM95_HOOK_FUNCTION(original_DoDeltaX, DoDeltaX)
void __cdecl DoDeltaX(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int line_count;
    int number_of_packets;
    int skip_count;
    int size_count;
    tU8 *pixel_ptr;
    tU32 the_row_bytes;
    tU16 *line_pixel_ptr;
    tU16 the_word;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)k;
    (void)line_count;
    (void)number_of_packets;
    (void)skip_count;
    (void)size_count;
    (void)pixel_ptr;
    (void)the_row_bytes;
    (void)line_pixel_ptr;
    (void)the_word;

    if (function_hook_state_DoDeltaX == HOOK_ENABLED) {
        assert(0 && "DoDeltaX not implemented.");
        abort();
    } else {
        original_DoDeltaX(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoBlack = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoBlack, function_hook_state_DoBlack)
static void(__cdecl*original_DoBlack)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x00496cb0;
CARM95_HOOK_FUNCTION(original_DoBlack, DoBlack)
void __cdecl DoBlack(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int the_width;
    tU8 *pixel_ptr;
    tU32 the_row_bytes;
    tU32 *line_pixel_ptr;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)the_width;
    (void)pixel_ptr;
    (void)the_row_bytes;
    (void)line_pixel_ptr;

    if (function_hook_state_DoBlack == HOOK_ENABLED) {
        assert(0 && "DoBlack not implemented.");
        abort();
    } else {
        original_DoBlack(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoRunLengthX = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoRunLengthX, function_hook_state_DoRunLengthX)
static void(__cdecl*original_DoRunLengthX)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x00496d3c;
CARM95_HOOK_FUNCTION(original_DoRunLengthX, DoRunLengthX)
void __cdecl DoRunLengthX(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int number_of_packets;
    int size_count;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)k;
    (void)number_of_packets;
    (void)size_count;
    (void)pixel_ptr;
    (void)line_pixel_ptr;
    (void)the_byte;
    (void)the_row_bytes;

    if (function_hook_state_DoRunLengthX == HOOK_ENABLED) {
        assert(0 && "DoRunLengthX not implemented.");
        abort();
    } else {
        original_DoRunLengthX(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoRunLengthTrans = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoRunLengthTrans, function_hook_state_DoRunLengthTrans)
static void(__cdecl*original_DoRunLengthTrans)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x00496e53;
CARM95_HOOK_FUNCTION(original_DoRunLengthTrans, DoRunLengthTrans)
void __cdecl DoRunLengthTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int number_of_packets;
    int size_count;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)k;
    (void)number_of_packets;
    (void)size_count;
    (void)pixel_ptr;
    (void)line_pixel_ptr;
    (void)the_byte;
    (void)the_row_bytes;

    if (function_hook_state_DoRunLengthTrans == HOOK_ENABLED) {
        assert(0 && "DoRunLengthTrans not implemented.");
        abort();
    } else {
        original_DoRunLengthTrans(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoUncompressed = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoUncompressed, function_hook_state_DoUncompressed)
static void(__cdecl*original_DoUncompressed)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x00496f9d;
CARM95_HOOK_FUNCTION(original_DoUncompressed, DoUncompressed)
void __cdecl DoUncompressed(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int the_width;
    tU8 *pixel_ptr;
    tU32 the_row_bytes;
    tU32 *line_pixel_ptr;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)the_width;
    (void)pixel_ptr;
    (void)the_row_bytes;
    (void)line_pixel_ptr;

    if (function_hook_state_DoUncompressed == HOOK_ENABLED) {
        assert(0 && "DoUncompressed not implemented.");
        abort();
    } else {
        original_DoUncompressed(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoUncompressedTrans = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoUncompressedTrans, function_hook_state_DoUncompressedTrans)
static void(__cdecl*original_DoUncompressedTrans)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x00497031;
CARM95_HOOK_FUNCTION(original_DoUncompressedTrans, DoUncompressedTrans)
void __cdecl DoUncompressedTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int the_width;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;
    (void)i;
    (void)j;
    (void)the_width;
    (void)pixel_ptr;
    (void)line_pixel_ptr;
    (void)the_byte;
    (void)the_row_bytes;

    if (function_hook_state_DoUncompressedTrans == HOOK_ENABLED) {
        assert(0 && "DoUncompressedTrans not implemented.");
        abort();
    } else {
        original_DoUncompressedTrans(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DoMini = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoMini, function_hook_state_DoMini)
static void(__cdecl*original_DoMini)(tFlic_descriptor *, tU32) = (void(__cdecl*)(tFlic_descriptor *, tU32))0x004970dc;
CARM95_HOOK_FUNCTION(original_DoMini, DoMini)
void __cdecl DoMini(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    LOG_TRACE("(%p, %u)", pFlic_info, chunk_length);

    (void)pFlic_info;
    (void)chunk_length;

    if (function_hook_state_DoMini == HOOK_ENABLED) {
        assert(0 && "DoMini not implemented.");
        abort();
    } else {
        original_DoMini(pFlic_info, chunk_length);
    }
}

function_hook_state_t function_hook_state_DrawTranslations = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DrawTranslations, function_hook_state_DrawTranslations)
static void(__cdecl*original_DrawTranslations)(tFlic_descriptor *, int) = (void(__cdecl*)(tFlic_descriptor *, int))0x004970fa;
CARM95_HOOK_FUNCTION(original_DrawTranslations, DrawTranslations)
void __cdecl DrawTranslations(tFlic_descriptor *pFlic_info, int pLast_frame) {
    tTranslation_record *trans;
    int i;
    int x;
    int width;
    int right_edge;
    LOG_TRACE("(%p, %d)", pFlic_info, pLast_frame);

    (void)pFlic_info;
    (void)pLast_frame;
    (void)trans;
    (void)i;
    (void)x;
    (void)width;
    (void)right_edge;

    if (function_hook_state_DrawTranslations == HOOK_ENABLED) {
        assert(0 && "DrawTranslations not implemented.");
        abort();
    } else {
        original_DrawTranslations(pFlic_info, pLast_frame);
    }
}

function_hook_state_t function_hook_state_PlayNextFlicFrame2 = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PlayNextFlicFrame2, function_hook_state_PlayNextFlicFrame2)
static int(__cdecl*original_PlayNextFlicFrame2)(tFlic_descriptor *, int) = (int(__cdecl*)(tFlic_descriptor *, int))0x00495ff5;
CARM95_HOOK_FUNCTION(original_PlayNextFlicFrame2, PlayNextFlicFrame2)
int __cdecl PlayNextFlicFrame2(tFlic_descriptor *pFlic_info, int pPanel_flic) {
    tU32 frame_length;
    tU32 chunk_length;
    int chunk_count;
    int chunk_counter;
    int chunk_type;
    int magic_bytes;
    int last_frame;
    int data_knocked_off;
    int read_amount;
    LOG_TRACE("(%p, %d)", pFlic_info, pPanel_flic);

    (void)pFlic_info;
    (void)pPanel_flic;
    (void)frame_length;
    (void)chunk_length;
    (void)chunk_count;
    (void)chunk_counter;
    (void)chunk_type;
    (void)magic_bytes;
    (void)last_frame;
    (void)data_knocked_off;
    (void)read_amount;

    if (function_hook_state_PlayNextFlicFrame2 == HOOK_ENABLED) {
        assert(0 && "PlayNextFlicFrame2 not implemented.");
        abort();
    } else {
        return original_PlayNextFlicFrame2(pFlic_info, pPanel_flic);
    }
}

function_hook_state_t function_hook_state_PlayNextFlicFrame = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PlayNextFlicFrame, function_hook_state_PlayNextFlicFrame)
static int(__cdecl*original_PlayNextFlicFrame)(tFlic_descriptor *) = (int(__cdecl*)(tFlic_descriptor *))0x00495fd7;
CARM95_HOOK_FUNCTION(original_PlayNextFlicFrame, PlayNextFlicFrame)
int __cdecl PlayNextFlicFrame(tFlic_descriptor *pFlic_info) {
    LOG_TRACE("(%p)", pFlic_info);

    (void)pFlic_info;

    if (function_hook_state_PlayNextFlicFrame == HOOK_ENABLED) {
        assert(0 && "PlayNextFlicFrame not implemented.");
        abort();
    } else {
        return original_PlayNextFlicFrame(pFlic_info);
    }
}

function_hook_state_t function_hook_state_PlayFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PlayFlic, function_hook_state_PlayFlic)
static int(__cdecl*original_PlayFlic)(int, tU32, tS8 *, br_pixelmap *, int, int, void(**)(), int, int) = (int(__cdecl*)(int, tU32, tS8 *, br_pixelmap *, int, int, void(**)(), int, int))0x00497278;
CARM95_HOOK_FUNCTION(original_PlayFlic, PlayFlic)
int __cdecl PlayFlic(int pIndex, tU32 pSize, tS8 *pData_ptr, br_pixelmap *pDest_pixelmap, int pX_offset, int pY_offset, void(**DoPerFrame)(), int pInterruptable, int pFrame_rate) {
    int finished_playing;
    tFlic_descriptor the_flic;
    tU32 last_frame;
    tU32 new_time;
    tU32 frame_period;
    LOG_TRACE("(%d, %u, %p, %p, %d, %d, %p, %d, %d)", pIndex, pSize, pData_ptr, pDest_pixelmap, pX_offset, pY_offset, DoPerFrame, pInterruptable, pFrame_rate);

    (void)pIndex;
    (void)pSize;
    (void)pData_ptr;
    (void)pDest_pixelmap;
    (void)pX_offset;
    (void)pY_offset;
    (void)DoPerFrame;
    (void)pInterruptable;
    (void)pFrame_rate;
    (void)finished_playing;
    (void)the_flic;
    (void)last_frame;
    (void)new_time;
    (void)frame_period;

    if (function_hook_state_PlayFlic == HOOK_ENABLED) {
        assert(0 && "PlayFlic not implemented.");
        abort();
    } else {
        return original_PlayFlic(pIndex, pSize, pData_ptr, pDest_pixelmap, pX_offset, pY_offset, DoPerFrame, pInterruptable, pFrame_rate);
    }
}

function_hook_state_t function_hook_state_SwapScreen = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(SwapScreen, function_hook_state_SwapScreen)
static void(__cdecl*original_SwapScreen)() = (void(__cdecl*)())0x00497444;
CARM95_HOOK_FUNCTION(original_SwapScreen, SwapScreen)
void __cdecl SwapScreen() {
    LOG_TRACE("()");


    if (function_hook_state_SwapScreen == HOOK_ENABLED) {
        assert(0 && "SwapScreen not implemented.");
        abort();
    } else {
        original_SwapScreen();
    }
}

function_hook_state_t function_hook_state_ShowFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ShowFlic, function_hook_state_ShowFlic)
static void(__cdecl*original_ShowFlic)(int) = (void(__cdecl*)(int))0x004973a3;
CARM95_HOOK_FUNCTION(original_ShowFlic, ShowFlic)
void __cdecl ShowFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    if (function_hook_state_ShowFlic == HOOK_ENABLED) {
        assert(0 && "ShowFlic not implemented.");
        abort();
    } else {
        original_ShowFlic(pIndex);
    }
}

function_hook_state_t function_hook_state_InitFlics = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(InitFlics, function_hook_state_InitFlics)
static void(__cdecl*original_InitFlics)() = (void(__cdecl*)())0x00497459;
CARM95_HOOK_FUNCTION(original_InitFlics, InitFlics)
void __cdecl InitFlics() {
    int i;
    LOG_TRACE("()");

    (void)i;

    if (function_hook_state_InitFlics == HOOK_ENABLED) {
        assert(0 && "InitFlics not implemented.");
        abort();
    } else {
        original_InitFlics();
    }
}

function_hook_state_t function_hook_state_LoadFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LoadFlic, function_hook_state_LoadFlic)
static int(__cdecl*original_LoadFlic)(int) = (int(__cdecl*)(int))0x00497499;
CARM95_HOOK_FUNCTION(original_LoadFlic, LoadFlic)
int __cdecl LoadFlic(int pIndex) {
    tPath_name the_path;
    FILE *f;
    char *the_buffer;
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;
    (void)the_path;
    (void)f;
    (void)the_buffer;

    if (function_hook_state_LoadFlic == HOOK_ENABLED) {
        assert(0 && "LoadFlic not implemented.");
        abort();
    } else {
        return original_LoadFlic(pIndex);
    }
}

function_hook_state_t function_hook_state_UnlockFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UnlockFlic, function_hook_state_UnlockFlic)
static void(__cdecl*original_UnlockFlic)(int) = (void(__cdecl*)(int))0x00497683;
CARM95_HOOK_FUNCTION(original_UnlockFlic, UnlockFlic)
void __cdecl UnlockFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    if (function_hook_state_UnlockFlic == HOOK_ENABLED) {
        assert(0 && "UnlockFlic not implemented.");
        abort();
    } else {
        original_UnlockFlic(pIndex);
    }
}

function_hook_state_t function_hook_state_LoadFlicData = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LoadFlicData, function_hook_state_LoadFlicData)
static int(__cdecl*original_LoadFlicData)(char *, tU8 **, tU32 *) = (int(__cdecl*)(char *, tU8 **, tU32 *))0x004976cb;
CARM95_HOOK_FUNCTION(original_LoadFlicData, LoadFlicData)
int __cdecl LoadFlicData(char *pName, tU8 **pData, tU32 *pData_length) {
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("(\"%s\", %p, %p)", pName, pData, pData_length);

    (void)pName;
    (void)pData;
    (void)pData_length;
    (void)f;
    (void)the_path;

    if (function_hook_state_LoadFlicData == HOOK_ENABLED) {
        assert(0 && "LoadFlicData not implemented.");
        abort();
    } else {
        return original_LoadFlicData(pName, pData, pData_length);
    }
}

function_hook_state_t function_hook_state_FreeFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FreeFlic, function_hook_state_FreeFlic)
static void(__cdecl*original_FreeFlic)(int) = (void(__cdecl*)(int))0x004977de;
CARM95_HOOK_FUNCTION(original_FreeFlic, FreeFlic)
void __cdecl FreeFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    if (function_hook_state_FreeFlic == HOOK_ENABLED) {
        assert(0 && "FreeFlic not implemented.");
        abort();
    } else {
        original_FreeFlic(pIndex);
    }
}

function_hook_state_t function_hook_state_ForceRunFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ForceRunFlic, function_hook_state_ForceRunFlic)
static void(__cdecl*original_ForceRunFlic)(int) = (void(__cdecl*)(int))0x00497908;
CARM95_HOOK_FUNCTION(original_ForceRunFlic, ForceRunFlic)
void __cdecl ForceRunFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    if (function_hook_state_ForceRunFlic == HOOK_ENABLED) {
        assert(0 && "ForceRunFlic not implemented.");
        abort();
    } else {
        original_ForceRunFlic(pIndex);
    }
}

function_hook_state_t function_hook_state_RunFlicAt = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(RunFlicAt, function_hook_state_RunFlicAt)
static void(__cdecl*original_RunFlicAt)(int, int, int) = (void(__cdecl*)(int, int, int))0x00497829;
CARM95_HOOK_FUNCTION(original_RunFlicAt, RunFlicAt)
void __cdecl RunFlicAt(int pIndex, int pX, int pY) {
    LOG_TRACE("(%d, %d, %d)", pIndex, pX, pY);

    (void)pIndex;
    (void)pX;
    (void)pY;

    if (function_hook_state_RunFlicAt == HOOK_ENABLED) {
        assert(0 && "RunFlicAt not implemented.");
        abort();
    } else {
        original_RunFlicAt(pIndex, pX, pY);
    }
}

function_hook_state_t function_hook_state_RunFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(RunFlic, function_hook_state_RunFlic)
static void(__cdecl*original_RunFlic)(int) = (void(__cdecl*)(int))0x0049788b;
CARM95_HOOK_FUNCTION(original_RunFlic, RunFlic)
void __cdecl RunFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    if (function_hook_state_RunFlic == HOOK_ENABLED) {
        assert(0 && "RunFlic not implemented.");
        abort();
    } else {
        original_RunFlic(pIndex);
    }
}

function_hook_state_t function_hook_state_PreloadBunchOfFlics = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PreloadBunchOfFlics, function_hook_state_PreloadBunchOfFlics)
static void(__cdecl*original_PreloadBunchOfFlics)(int) = (void(__cdecl*)(int))0x00497937;
CARM95_HOOK_FUNCTION(original_PreloadBunchOfFlics, PreloadBunchOfFlics)
void __cdecl PreloadBunchOfFlics(int pBunch_index) {
    int i;
    LOG_TRACE("(%d)", pBunch_index);

    (void)pBunch_index;
    (void)i;

    if (function_hook_state_PreloadBunchOfFlics == HOOK_ENABLED) {
        assert(0 && "PreloadBunchOfFlics not implemented.");
        abort();
    } else {
        original_PreloadBunchOfFlics(pBunch_index);
    }
}

function_hook_state_t function_hook_state_UnlockBunchOfFlics = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UnlockBunchOfFlics, function_hook_state_UnlockBunchOfFlics)
static void(__cdecl*original_UnlockBunchOfFlics)(int) = (void(__cdecl*)(int))0x00497986;
CARM95_HOOK_FUNCTION(original_UnlockBunchOfFlics, UnlockBunchOfFlics)
void __cdecl UnlockBunchOfFlics(int pBunch_index) {
    int i;
    LOG_TRACE("(%d)", pBunch_index);

    (void)pBunch_index;
    (void)i;

    if (function_hook_state_UnlockBunchOfFlics == HOOK_ENABLED) {
        assert(0 && "UnlockBunchOfFlics not implemented.");
        abort();
    } else {
        original_UnlockBunchOfFlics(pBunch_index);
    }
}

function_hook_state_t function_hook_state_FlushAllFlics = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FlushAllFlics, function_hook_state_FlushAllFlics)
static void(__cdecl*original_FlushAllFlics)(int) = (void(__cdecl*)(int))0x004979d5;
CARM95_HOOK_FUNCTION(original_FlushAllFlics, FlushAllFlics)
void __cdecl FlushAllFlics(int pBunch_index) {
    int i;
    LOG_TRACE("(%d)", pBunch_index);

    (void)pBunch_index;
    (void)i;

    if (function_hook_state_FlushAllFlics == HOOK_ENABLED) {
        assert(0 && "FlushAllFlics not implemented.");
        abort();
    } else {
        original_FlushAllFlics(pBunch_index);
    }
}

function_hook_state_t function_hook_state_InitFlicQueue = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(InitFlicQueue, function_hook_state_InitFlicQueue)
static void(__cdecl*original_InitFlicQueue)() = (void(__cdecl*)())0x00497a10;
CARM95_HOOK_FUNCTION(original_InitFlicQueue, InitFlicQueue)
void __cdecl InitFlicQueue() {
    LOG_TRACE("()");


    if (function_hook_state_InitFlicQueue == HOOK_ENABLED) {
        assert(0 && "InitFlicQueue not implemented.");
        abort();
    } else {
        original_InitFlicQueue();
    }
}

function_hook_state_t function_hook_state_FlicQueueFinished = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FlicQueueFinished, function_hook_state_FlicQueueFinished)
static int(__cdecl*original_FlicQueueFinished)() = (int(__cdecl*)())0x00497a25;
CARM95_HOOK_FUNCTION(original_FlicQueueFinished, FlicQueueFinished)
int __cdecl FlicQueueFinished() {
    tFlic_descriptor *the_flic;
    LOG_TRACE("()");

    (void)the_flic;

    if (function_hook_state_FlicQueueFinished == HOOK_ENABLED) {
        assert(0 && "FlicQueueFinished not implemented.");
        abort();
    } else {
        return original_FlicQueueFinished();
    }
}

function_hook_state_t function_hook_state_ProcessFlicQueue = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ProcessFlicQueue, function_hook_state_ProcessFlicQueue)
static void(__cdecl*original_ProcessFlicQueue)(tU32) = (void(__cdecl*)(tU32))0x00497a71;
CARM95_HOOK_FUNCTION(original_ProcessFlicQueue, ProcessFlicQueue)
void __cdecl ProcessFlicQueue(tU32 pInterval) {
    tFlic_descriptor *the_flic;
    tFlic_descriptor *last_flic;
    tFlic_descriptor *doomed_flic;
    tU32 new_time;
    int finished_playing;
    LOG_TRACE("(%u)", pInterval);

    (void)pInterval;
    (void)the_flic;
    (void)last_flic;
    (void)doomed_flic;
    (void)new_time;
    (void)finished_playing;

    if (function_hook_state_ProcessFlicQueue == HOOK_ENABLED) {
        assert(0 && "ProcessFlicQueue not implemented.");
        abort();
    } else {
        original_ProcessFlicQueue(pInterval);
    }
}

function_hook_state_t function_hook_state_FlushFlicQueue = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FlushFlicQueue, function_hook_state_FlushFlicQueue)
static void(__cdecl*original_FlushFlicQueue)() = (void(__cdecl*)())0x00497b5d;
CARM95_HOOK_FUNCTION(original_FlushFlicQueue, FlushFlicQueue)
void __cdecl FlushFlicQueue() {
    tFlic_descriptor *the_flic;
    tFlic_descriptor *old_flic;
    LOG_TRACE("()");

    (void)the_flic;
    (void)old_flic;

    if (function_hook_state_FlushFlicQueue == HOOK_ENABLED) {
        assert(0 && "FlushFlicQueue not implemented.");
        abort();
    } else {
        original_FlushFlicQueue();
    }
}

function_hook_state_t function_hook_state_AddToFlicQueue = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddToFlicQueue, function_hook_state_AddToFlicQueue)
static void(__cdecl*original_AddToFlicQueue)(int, int, int, int) = (void(__cdecl*)(int, int, int, int))0x00497bec;
CARM95_HOOK_FUNCTION(original_AddToFlicQueue, AddToFlicQueue)
void __cdecl AddToFlicQueue(int pIndex, int pX, int pY, int pMust_finish) {
    tFlic_descriptor *the_flic;
    tFlic_descriptor *new_flic;
    tFlic_descriptor *last_flic;
    tFlic_descriptor *doomed_flic;
    LOG_TRACE("(%d, %d, %d, %d)", pIndex, pX, pY, pMust_finish);

    (void)pIndex;
    (void)pX;
    (void)pY;
    (void)pMust_finish;
    (void)the_flic;
    (void)new_flic;
    (void)last_flic;
    (void)doomed_flic;

    if (function_hook_state_AddToFlicQueue == HOOK_ENABLED) {
        assert(0 && "AddToFlicQueue not implemented.");
        abort();
    } else {
        original_AddToFlicQueue(pIndex, pX, pY, pMust_finish);
    }
}

function_hook_state_t function_hook_state_InitialiseFlicPanel = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(InitialiseFlicPanel, function_hook_state_InitialiseFlicPanel)
static void(__cdecl*original_InitialiseFlicPanel)(int, int, int, int, int) = (void(__cdecl*)(int, int, int, int, int))0x00497dcd;
CARM95_HOOK_FUNCTION(original_InitialiseFlicPanel, InitialiseFlicPanel)
void __cdecl InitialiseFlicPanel(int pIndex, int pLeft, int pTop, int pWidth, int pHeight) {
    void *the_pixels;
    LOG_TRACE("(%d, %d, %d, %d, %d)", pIndex, pLeft, pTop, pWidth, pHeight);

    (void)pIndex;
    (void)pLeft;
    (void)pTop;
    (void)pWidth;
    (void)pHeight;
    (void)the_pixels;

    if (function_hook_state_InitialiseFlicPanel == HOOK_ENABLED) {
        assert(0 && "InitialiseFlicPanel not implemented.");
        abort();
    } else {
        original_InitialiseFlicPanel(pIndex, pLeft, pTop, pWidth, pHeight);
    }
}

function_hook_state_t function_hook_state_DisposeFlicPanel = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DisposeFlicPanel, function_hook_state_DisposeFlicPanel)
static void(__cdecl*original_DisposeFlicPanel)(int) = (void(__cdecl*)(int))0x00497e80;
CARM95_HOOK_FUNCTION(original_DisposeFlicPanel, DisposeFlicPanel)
void __cdecl DisposeFlicPanel(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    if (function_hook_state_DisposeFlicPanel == HOOK_ENABLED) {
        assert(0 && "DisposeFlicPanel not implemented.");
        abort();
    } else {
        original_DisposeFlicPanel(pIndex);
    }
}

function_hook_state_t function_hook_state_ServicePanelFlics = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ServicePanelFlics, function_hook_state_ServicePanelFlics)
static void(__cdecl*original_ServicePanelFlics)(int) = (void(__cdecl*)(int))0x00497edd;
CARM95_HOOK_FUNCTION(original_ServicePanelFlics, ServicePanelFlics)
void __cdecl ServicePanelFlics(int pCopy_to_buffer) {
    tU32 time_diff;
    tU32 the_time;
    tU32 old_last_time[2];
    int i;
    int j;
    int iteration_count;
    int finished;
    LOG_TRACE("(%d)", pCopy_to_buffer);

    (void)pCopy_to_buffer;
    (void)time_diff;
    (void)the_time;
    (void)old_last_time;
    (void)i;
    (void)j;
    (void)iteration_count;
    (void)finished;

    if (function_hook_state_ServicePanelFlics == HOOK_ENABLED) {
        assert(0 && "ServicePanelFlics not implemented.");
        abort();
    } else {
        original_ServicePanelFlics(pCopy_to_buffer);
    }
}

function_hook_state_t function_hook_state_ChangePanelFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ChangePanelFlic, function_hook_state_ChangePanelFlic)
static void(__cdecl*original_ChangePanelFlic)(int, tU8 *, tU32) = (void(__cdecl*)(int, tU8 *, tU32))0x004980ec;
CARM95_HOOK_FUNCTION(original_ChangePanelFlic, ChangePanelFlic)
void __cdecl ChangePanelFlic(int pIndex, tU8 *pData, tU32 pData_length) {
    LOG_TRACE("(%d, %p, %u)", pIndex, pData, pData_length);

    (void)pIndex;
    (void)pData;
    (void)pData_length;

    if (function_hook_state_ChangePanelFlic == HOOK_ENABLED) {
        assert(0 && "ChangePanelFlic not implemented.");
        abort();
    } else {
        original_ChangePanelFlic(pIndex, pData, pData_length);
    }
}

function_hook_state_t function_hook_state_GetPanelPixelmap = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(GetPanelPixelmap, function_hook_state_GetPanelPixelmap)
static br_pixelmap *(__cdecl*original_GetPanelPixelmap)(int) = (br_pixelmap *(__cdecl*)(int))0x004981b5;
CARM95_HOOK_FUNCTION(original_GetPanelPixelmap, GetPanelPixelmap)
br_pixelmap* __cdecl GetPanelPixelmap(int pIndex) {
    LOG_TRACE("(%d)", pIndex);

    (void)pIndex;

    if (function_hook_state_GetPanelPixelmap == HOOK_ENABLED) {
        assert(0 && "GetPanelPixelmap not implemented.");
        abort();
    } else {
        return original_GetPanelPixelmap(pIndex);
    }
}

function_hook_state_t function_hook_state_LoadInterfaceStrings = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LoadInterfaceStrings, function_hook_state_LoadInterfaceStrings)
static void(__cdecl*original_LoadInterfaceStrings)() = (void(__cdecl*)())0x004981cf;
CARM95_HOOK_FUNCTION(original_LoadInterfaceStrings, LoadInterfaceStrings)
void __cdecl LoadInterfaceStrings() {
    FILE *f;
    char s[256];
    char s2[256];
    char *str;
    char *comment;
    char ch;
    tPath_name the_path;
    int i;
    int j;
    int len;
    LOG_TRACE("()");

    (void)f;
    (void)s;
    (void)s2;
    (void)str;
    (void)comment;
    (void)ch;
    (void)the_path;
    (void)i;
    (void)j;
    (void)len;

    if (function_hook_state_LoadInterfaceStrings == HOOK_ENABLED) {
        assert(0 && "LoadInterfaceStrings not implemented.");
        abort();
    } else {
        original_LoadInterfaceStrings();
    }
}

function_hook_state_t function_hook_state_FlushInterfaceFonts = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FlushInterfaceFonts, function_hook_state_FlushInterfaceFonts)
static void(__cdecl*original_FlushInterfaceFonts)() = (void(__cdecl*)())0x00498961;
CARM95_HOOK_FUNCTION(original_FlushInterfaceFonts, FlushInterfaceFonts)
void __cdecl FlushInterfaceFonts() {
    LOG_TRACE("()");


    if (function_hook_state_FlushInterfaceFonts == HOOK_ENABLED) {
        assert(0 && "FlushInterfaceFonts not implemented.");
        abort();
    } else {
        original_FlushInterfaceFonts();
    }
}

function_hook_state_t function_hook_state_SuspendPendingFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(SuspendPendingFlic, function_hook_state_SuspendPendingFlic)
static void(__cdecl*original_SuspendPendingFlic)() = (void(__cdecl*)())0x004989bc;
CARM95_HOOK_FUNCTION(original_SuspendPendingFlic, SuspendPendingFlic)
void __cdecl SuspendPendingFlic() {
    LOG_TRACE("()");


    if (function_hook_state_SuspendPendingFlic == HOOK_ENABLED) {
        assert(0 && "SuspendPendingFlic not implemented.");
        abort();
    } else {
        original_SuspendPendingFlic();
    }
}

function_hook_state_t function_hook_state_ResumePendingFlic = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ResumePendingFlic, function_hook_state_ResumePendingFlic)
static void(__cdecl*original_ResumePendingFlic)() = (void(__cdecl*)())0x004989db;
CARM95_HOOK_FUNCTION(original_ResumePendingFlic, ResumePendingFlic)
void __cdecl ResumePendingFlic() {
    LOG_TRACE("()");


    if (function_hook_state_ResumePendingFlic == HOOK_ENABLED) {
        assert(0 && "ResumePendingFlic not implemented.");
        abort();
    } else {
        original_ResumePendingFlic();
    }
}

