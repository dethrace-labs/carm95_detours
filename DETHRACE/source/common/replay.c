#include "replay.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include <stdio.h>
char *(* hookvar_gReplay_pixie_names )[10] = (void*)0x0050a1b0;
#if 0
int * hookvar_gSingle_frame_mode ;
#endif
#if 0
tU32 * hookvar_gCam_change_time ;
#endif
#if 0
int * hookvar_gSave_file ;
#endif
#if 0
int(* hookvar_gProgress_line_left )[2];
#endif
#if 0
int(* hookvar_gProgress_line_right )[2];
#endif
#if 0
int(* hookvar_gProgress_line_top )[2];
#endif
br_pixelmap *(* hookvar_gReplay_pixies )[10] = (void*)0x00531dd0;
int * hookvar_gKey_down  = (void*)0x00531db8;
#if 0
int * hookvar_gNo_cursor ;
#endif
#if 0
int * hookvar_gSave_frame_number ;
#endif
#if 0
int * hookvar_gCam_change_button_down ;
#endif
#if 0
tU32 * hookvar_gAction_replay_start_time ;
#endif
#if 0
tU32 * hookvar_gLast_replay_zappy_screen ;
#endif
#if 0
tS32 * hookvar_gStopped_time ;
#endif
float * hookvar_gPending_replay_rate  = (void*)0x00531dbc;
#if 0
tU32 * hookvar_gAction_replay_end_time ;
#endif
float * hookvar_gReplay_rate  = (void*)0x00531dcc;
#if 0
int * hookvar_gSave_bunch_ID ;
#endif
#if 0
int * hookvar_gPlay_direction ;
#endif
#if 0
int * hookvar_gPaused ;
#endif
tAction_replay_camera_type * hookvar_gAction_replay_camera_mode  = (void*)0x00551db4;

static int(*original_ReplayIsPaused)() = (int(*)())0x0041adc0;
CARM95_HOOK_FUNCTION(original_ReplayIsPaused, ReplayIsPaused)
int ReplayIsPaused() {
    LOG_TRACE("()");


    return original_ReplayIsPaused();
}

static float(*original_GetReplayRate)() = (float(*)())0x0041adf3;
CARM95_HOOK_FUNCTION(original_GetReplayRate, GetReplayRate)
float GetReplayRate() {
    LOG_TRACE("()");


    return original_GetReplayRate();
}

int GetReplayDirection() {
    LOG_TRACE("()");


    NOT_IMPLEMENTED();
}

void StopSaving() {
    LOG_TRACE("()");


    NOT_IMPLEMENTED();
}

void ActualActionReplayHeadups(int pSpecial_zappy_bastard) {
    tU32 the_time;
    int x;
    tU16 played_col1;
    tU16 played_col2;
    tU16 to_play_col1;
    tU16 to_play_col2;
    LOG_TRACE("(%d)", pSpecial_zappy_bastard);

    (void)pSpecial_zappy_bastard;
    (void)the_time;
    (void)x;
    (void)played_col1;
    (void)played_col2;
    (void)to_play_col1;
    (void)to_play_col2;

    NOT_IMPLEMENTED();
}

static void(*original_DoActionReplayPostSwap)() = (void(*)())0x0041ae1e;
CARM95_HOOK_FUNCTION(original_DoActionReplayPostSwap, DoActionReplayPostSwap)
void DoActionReplayPostSwap() {
    LOG_TRACE("()");


    original_DoActionReplayPostSwap();
}

static void(*original_DoZappyActionReplayHeadups)(int, ...) = (void(*)(int, ...))0x0041ae48;
CARM95_HOOK_FUNCTION(original_DoZappyActionReplayHeadups, DoZappyActionReplayHeadups)
void DoZappyActionReplayHeadups(int pSpecial_zappy_bastard) {
    tU32 the_time;
    LOG_TRACE("(%d)", pSpecial_zappy_bastard);

    (void)pSpecial_zappy_bastard;
    (void)the_time;

    original_DoZappyActionReplayHeadups(pSpecial_zappy_bastard);
}

static void(*original_DoActionReplayHeadups)() = (void(*)())0x0041ae33;
CARM95_HOOK_FUNCTION(original_DoActionReplayHeadups, DoActionReplayHeadups)
void DoActionReplayHeadups() {
    LOG_TRACE("()");


    original_DoActionReplayHeadups();
}

void MoveReplayBuffer(tS32 pMove_amount) {
    tU8 *play_ptr;
    tU8 *old_play_ptr;
    tU8 *old_play_ptr2;
    int i;
    int a;
    tU32 old_time;
    LOG_TRACE("(%d)", pMove_amount);

    (void)pMove_amount;
    (void)play_ptr;
    (void)old_play_ptr;
    (void)old_play_ptr2;
    (void)i;
    (void)a;
    (void)old_time;

    NOT_IMPLEMENTED();
}

void MoveToEndOfReplay() {
    float old_replay_rate;
    LOG_TRACE("()");

    (void)old_replay_rate;

    NOT_IMPLEMENTED();
}

void MoveToStartOfReplay() {
    float old_replay_rate;
    LOG_TRACE("()");

    (void)old_replay_rate;

    NOT_IMPLEMENTED();
}

static void(*original_ToggleReplay)() = (void(*)())0x0041b661;
CARM95_HOOK_FUNCTION(original_ToggleReplay, ToggleReplay)
void ToggleReplay() {
    LOG_TRACE("()");


    original_ToggleReplay();
}

static void(*original_ReverseSound)(tS3_effect_tag, tS3_sound_tag, ...) = (void(*)(tS3_effect_tag, tS3_sound_tag, ...))0x0041b7fe;
CARM95_HOOK_FUNCTION(original_ReverseSound, ReverseSound)
void ReverseSound(tS3_effect_tag pEffect_index, tS3_sound_tag pSound_tag) {
    LOG_TRACE("(%d, %d)", pEffect_index, pSound_tag);

    (void)pEffect_index;
    (void)pSound_tag;

    original_ReverseSound(pEffect_index, pSound_tag);
}

static int(*original_FindUniqueFile)() = (int(*)())0x0041b819;
CARM95_HOOK_FUNCTION(original_FindUniqueFile, FindUniqueFile)
int FindUniqueFile() {
    int index;
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("()");

    (void)index;
    (void)f;
    (void)the_path;

    return original_FindUniqueFile();
}

static void(*original_PollActionReplayControls)(tU32, ...) = (void(*)(tU32, ...))0x0041b925;
CARM95_HOOK_FUNCTION(original_PollActionReplayControls, PollActionReplayControls)
void PollActionReplayControls(tU32 pFrame_period) {
    float old_replay_rate;
    int old_key_down;
    int x_coord;
    int y_coord;
    int i;
    tU32 real_time;
    static tU32 last_real_time;
    static int psuedo_mouse_keys[8];
    static tRectangle mouse_areas[2][8];
    LOG_TRACE("(%u)", pFrame_period);

    (void)pFrame_period;
    (void)old_replay_rate;
    (void)old_key_down;
    (void)x_coord;
    (void)y_coord;
    (void)i;
    (void)real_time;
    (void)last_real_time;
    (void)psuedo_mouse_keys;
    (void)mouse_areas;

    original_PollActionReplayControls(pFrame_period);
}

static void(*original_CheckReplayTurnOn)() = (void(*)())0x0041c03b;
CARM95_HOOK_FUNCTION(original_CheckReplayTurnOn, CheckReplayTurnOn)
void CheckReplayTurnOn() {
    LOG_TRACE("()");


    original_CheckReplayTurnOn();
}

static void(*original_InitializeActionReplay)() = (void(*)())0x0041c093;
CARM95_HOOK_FUNCTION(original_InitializeActionReplay, InitializeActionReplay)
void InitializeActionReplay() {
    int i;
    LOG_TRACE("()");

    (void)i;

    original_InitializeActionReplay();
}

static void(*original_DoActionReplay)(tU32, ...) = (void(*)(tU32, ...))0x0041c0e6;
CARM95_HOOK_FUNCTION(original_DoActionReplay, DoActionReplay)
void DoActionReplay(tU32 pFrame_period) {
    LOG_TRACE("(%u)", pFrame_period);

    (void)pFrame_period;

    original_DoActionReplay(pFrame_period);
}

static void(*original_SynchronizeActionReplay)() = (void(*)())0x0041c11c;
CARM95_HOOK_FUNCTION(original_SynchronizeActionReplay, SynchronizeActionReplay)
void SynchronizeActionReplay() {
    FILE *f;
    tPath_name the_path;
    static tU32 gLast_synch_time;
    LOG_TRACE("()");

    (void)f;
    (void)the_path;
    (void)gLast_synch_time;

    original_SynchronizeActionReplay();
}
