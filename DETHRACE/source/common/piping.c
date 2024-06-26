#include "piping.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include "carm95_webserver.h"

#include <assert.h>
tU8 ** hookvar_gPipe_buffer_start  = (void*)0x0050ba00;
int * hookvar_gDisable_sound  = (void*)0x0050ba04;
int * hookvar_gDisable_advance  = (void*)0x0050ba08;
int * hookvar_gMax_rewind_chunks  = (void*)0x0050ba0c;
float * hookvar_gWall_severity  = (void*)0x0050ba10;
tPipe_reset_proc*(* hookvar_gReset_procs )[32] = (void*)0x0050ba18;
#if 0
tPiped_registration_snapshot(* hookvar_gRegistration_snapshots )[5];
#endif
tPipe_smudge_data ** hookvar_gSmudge_space  = (void*)0x00531ffc;
tU32 * hookvar_gOldest_time  = (void*)0x00531ff8;
#if 0
int * hookvar_gCurrent_snapshot_registration_index ;
#endif
tPipe_chunk ** hookvar_gMr_chunky  = (void*)0x00531fa0;
tCar_spec ** hookvar_gCar_ptr  = (void*)0x00532040;
br_vector3 * hookvar_gZero_vector  = (void*)0x00532068;
tPipe_chunk_type(* hookvar_gReentrancy_array )[5] = (void*)0x00532050;
#if 0
tU32 * hookvar_gLast_time ;
#endif
tPipe_model_geometry_data ** hookvar_gModel_geometry_space  = (void*)0x0053204c;
#if 0
tU32 * hookvar_gEnd_time ;
#endif
tU32 * hookvar_gTrigger_time  = (void*)0x00532094;
int * hookvar_gReentrancy_count  = (void*)0x00532074;
br_vector3 * hookvar_gCar_pos  = (void*)0x00532030;
br_vector3 * hookvar_gReference_pos  = (void*)0x00532020;
br_scalar * hookvar_gMax_distance  = (void*)0x00532004;
#if 0
tU32 * hookvar_gLoop_abort_time ;
#endif
br_vector3 * hookvar_gWall_impact_point  = (void*)0x00532078;
tU8 ** hookvar_gPipe_buffer_working_end  = (void*)0x00532044;
tU32 * hookvar_gYoungest_time  = (void*)0x00532084;
tU8 ** hookvar_gPipe_buffer_phys_end  = (void*)0x0053208c;
#if 0
tU8 ** hookvar_gLocal_buffer_record_ptr ;
#endif
tU8 ** hookvar_gPipe_play_ptr  = (void*)0x00532018;
tU8 ** hookvar_gEnd_of_session  = (void*)0x00532048;
tU8 ** hookvar_gPipe_record_ptr  = (void*)0x0053201c;
tU8 ** hookvar_gPipe_buffer_oldest  = (void*)0x0053200c;
tU32 * hookvar_gPipe_buffer_size  = (void*)0x00532088;
tU8 ** hookvar_gLocal_buffer  = (void*)0x00532014;
tU32 * hookvar_gLocal_buffer_size  = (void*)0x00532090;

function_hook_state_t function_hook_state_GetReducedPos = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(GetReducedPos, function_hook_state_GetReducedPos)
static void(__cdecl*original_GetReducedPos)(br_vector3 *, tReduced_pos *) = (void(__cdecl*)(br_vector3 *, tReduced_pos *))0x00427ed0;
CARM95_HOOK_FUNCTION(original_GetReducedPos, GetReducedPos)
void __cdecl GetReducedPos(br_vector3 *v, tReduced_pos *p) {
    LOG_TRACE("(%p, %p)", v, p);

    (void)v;
    (void)p;

    if (function_hook_state_GetReducedPos == HOOK_ENABLED) {
        assert(0 && "GetReducedPos not implemented.");
        abort();
    } else {
        original_GetReducedPos(v, p);
    }
}

function_hook_state_t function_hook_state_SaveReducedPos = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(SaveReducedPos, function_hook_state_SaveReducedPos)
static void(__cdecl*original_SaveReducedPos)(tReduced_pos *, br_vector3 *) = (void(__cdecl*)(tReduced_pos *, br_vector3 *))0x00427f61;
CARM95_HOOK_FUNCTION(original_SaveReducedPos, SaveReducedPos)
void __cdecl SaveReducedPos(tReduced_pos *p, br_vector3 *v) {
    br_vector3 tv;
    LOG_TRACE("(%p, %p)", p, v);

    (void)p;
    (void)v;
    (void)tv;

    if (function_hook_state_SaveReducedPos == HOOK_ENABLED) {
        assert(0 && "SaveReducedPos not implemented.");
        abort();
    } else {
        original_SaveReducedPos(p, v);
    }
}

function_hook_state_t function_hook_state_PipeSearchForwards = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSearchForwards, function_hook_state_PipeSearchForwards)
static int(__cdecl*original_PipeSearchForwards)() = (int(__cdecl*)())0x00427fdf;
CARM95_HOOK_FUNCTION(original_PipeSearchForwards, PipeSearchForwards)
int __cdecl PipeSearchForwards() {
    LOG_TRACE("()");


    if (function_hook_state_PipeSearchForwards == HOOK_ENABLED) {
        assert(0 && "PipeSearchForwards not implemented.");
        abort();
    } else {
        return original_PipeSearchForwards();
    }
}

function_hook_state_t function_hook_state_IsActionReplayAvailable = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(IsActionReplayAvailable, function_hook_state_IsActionReplayAvailable)
static int(__cdecl*original_IsActionReplayAvailable)() = (int(__cdecl*)())0x00428078;
CARM95_HOOK_FUNCTION(original_IsActionReplayAvailable, IsActionReplayAvailable)
int __cdecl IsActionReplayAvailable() {
    LOG_TRACE("()");


    if (function_hook_state_IsActionReplayAvailable == HOOK_ENABLED) {
        assert(0 && "IsActionReplayAvailable not implemented.");
        abort();
    } else {
        return original_IsActionReplayAvailable();
    }
}

function_hook_state_t function_hook_state_SomeReplayLeft = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(SomeReplayLeft, function_hook_state_SomeReplayLeft)
static int(__cdecl*original_SomeReplayLeft)() = (int(__cdecl*)())0x004280a1;
CARM95_HOOK_FUNCTION(original_SomeReplayLeft, SomeReplayLeft)
int __cdecl SomeReplayLeft() {
    LOG_TRACE("()");


    if (function_hook_state_SomeReplayLeft == HOOK_ENABLED) {
        assert(0 && "SomeReplayLeft not implemented.");
        abort();
    } else {
        return original_SomeReplayLeft();
    }
}

function_hook_state_t function_hook_state_DisablePipedSounds = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DisablePipedSounds, function_hook_state_DisablePipedSounds)
static void(__cdecl*original_DisablePipedSounds)() = (void(__cdecl*)())0x004280f9;
CARM95_HOOK_FUNCTION(original_DisablePipedSounds, DisablePipedSounds)
void __cdecl DisablePipedSounds() {
    LOG_TRACE("()");


    if (function_hook_state_DisablePipedSounds == HOOK_ENABLED) {
        assert(0 && "DisablePipedSounds not implemented.");
        abort();
    } else {
        original_DisablePipedSounds();
    }
}

function_hook_state_t function_hook_state_EnablePipedSounds = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(EnablePipedSounds, function_hook_state_EnablePipedSounds)
static void(__cdecl*original_EnablePipedSounds)() = (void(__cdecl*)())0x0042810e;
CARM95_HOOK_FUNCTION(original_EnablePipedSounds, EnablePipedSounds)
void __cdecl EnablePipedSounds() {
    LOG_TRACE("()");


    if (function_hook_state_EnablePipedSounds == HOOK_ENABLED) {
        assert(0 && "EnablePipedSounds not implemented.");
        abort();
    } else {
        original_EnablePipedSounds();
    }
}

function_hook_state_t function_hook_state_LengthOfSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(LengthOfSession, function_hook_state_LengthOfSession)
static tU32(__cdecl*original_LengthOfSession)(tPipe_session *) = (tU32(__cdecl*)(tPipe_session *))0x00428123;
CARM95_HOOK_FUNCTION(original_LengthOfSession, LengthOfSession)
tU32 __cdecl LengthOfSession(tPipe_session *pSession) {
    int i;
    tU32 running_total;
    tPipe_chunk *the_chunk;
    LOG_TRACE("(%p)", pSession);

    (void)pSession;
    (void)i;
    (void)running_total;
    (void)the_chunk;

    if (function_hook_state_LengthOfSession == HOOK_ENABLED) {
        assert(0 && "LengthOfSession not implemented.");
        abort();
    } else {
        return original_LengthOfSession(pSession);
    }
}

function_hook_state_t function_hook_state_StartPipingSession2 = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(StartPipingSession2, function_hook_state_StartPipingSession2)
static void(__cdecl*original_StartPipingSession2)(tPipe_chunk_type, int) = (void(__cdecl*)(tPipe_chunk_type, int))0x004285e1;
CARM95_HOOK_FUNCTION(original_StartPipingSession2, StartPipingSession2)
void __cdecl StartPipingSession2(tPipe_chunk_type pThe_type, int pMunge_reentrancy) {
    LOG_TRACE("(%d, %d)", pThe_type, pMunge_reentrancy);

    (void)pThe_type;
    (void)pMunge_reentrancy;

    if (function_hook_state_StartPipingSession2 == HOOK_ENABLED) {
        assert(0 && "StartPipingSession2 not implemented.");
        abort();
    } else {
        original_StartPipingSession2(pThe_type, pMunge_reentrancy);
    }
}

function_hook_state_t function_hook_state_StartPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(StartPipingSession, function_hook_state_StartPipingSession)
static void(__cdecl*original_StartPipingSession)(tPipe_chunk_type) = (void(__cdecl*)(tPipe_chunk_type))0x0042868f;
CARM95_HOOK_FUNCTION(original_StartPipingSession, StartPipingSession)
void __cdecl StartPipingSession(tPipe_chunk_type pThe_type) {
    LOG_TRACE("(%d)", pThe_type);

    (void)pThe_type;

    if (function_hook_state_StartPipingSession == HOOK_ENABLED) {
        assert(0 && "StartPipingSession not implemented.");
        abort();
    } else {
        original_StartPipingSession(pThe_type);
    }
}

function_hook_state_t function_hook_state_EndPipingSession2 = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(EndPipingSession2, function_hook_state_EndPipingSession2)
static void(__cdecl*original_EndPipingSession2)(int) = (void(__cdecl*)(int))0x004286a8;
CARM95_HOOK_FUNCTION(original_EndPipingSession2, EndPipingSession2)
void __cdecl EndPipingSession2(int pMunge_reentrancy) {
    int a;
    LOG_TRACE("(%d)", pMunge_reentrancy);

    (void)pMunge_reentrancy;
    (void)a;

    if (function_hook_state_EndPipingSession2 == HOOK_ENABLED) {
        assert(0 && "EndPipingSession2 not implemented.");
        abort();
    } else {
        original_EndPipingSession2(pMunge_reentrancy);
    }
}

function_hook_state_t function_hook_state_EndPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(EndPipingSession, function_hook_state_EndPipingSession)
static void(__cdecl*original_EndPipingSession)() = (void(__cdecl*)())0x0042884c;
CARM95_HOOK_FUNCTION(original_EndPipingSession, EndPipingSession)
void __cdecl EndPipingSession() {
    LOG_TRACE("()");


    if (function_hook_state_EndPipingSession == HOOK_ENABLED) {
        assert(0 && "EndPipingSession not implemented.");
        abort();
    } else {
        original_EndPipingSession();
    }
}

function_hook_state_t function_hook_state_AddDataToSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddDataToSession, function_hook_state_AddDataToSession)
static void(__cdecl*original_AddDataToSession)(int, void *, tU32) = (void(__cdecl*)(int, void *, tU32))0x00428861;
CARM95_HOOK_FUNCTION(original_AddDataToSession, AddDataToSession)
void __cdecl AddDataToSession(int pSubject_index, void *pData, tU32 pData_length) {
    tU32 temp_buffer_size;
    int variable_for_breaking_on;
    LOG_TRACE("(%d, %p, %u)", pSubject_index, pData, pData_length);

    (void)pSubject_index;
    (void)pData;
    (void)pData_length;
    (void)temp_buffer_size;
    (void)variable_for_breaking_on;

    if (function_hook_state_AddDataToSession == HOOK_ENABLED) {
        assert(0 && "AddDataToSession not implemented.");
        abort();
    } else {
        original_AddDataToSession(pSubject_index, pData, pData_length);
    }
}

function_hook_state_t function_hook_state_AddModelGeometryToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddModelGeometryToPipingSession, function_hook_state_AddModelGeometryToPipingSession)
static void(__cdecl*original_AddModelGeometryToPipingSession)(tU16, int, int, tChanged_vertex *) = (void(__cdecl*)(tU16, int, int, tChanged_vertex *))0x00428904;
CARM95_HOOK_FUNCTION(original_AddModelGeometryToPipingSession, AddModelGeometryToPipingSession)
void __cdecl AddModelGeometryToPipingSession(tU16 pCar_ID, int pModel_index, int pVertex_count, tChanged_vertex *pCoordinates) {
    tU32 data_size;
    LOG_TRACE("(%u, %d, %d, %p)", pCar_ID, pModel_index, pVertex_count, pCoordinates);

    (void)pCar_ID;
    (void)pModel_index;
    (void)pVertex_count;
    (void)pCoordinates;
    (void)data_size;

    if (function_hook_state_AddModelGeometryToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddModelGeometryToPipingSession not implemented.");
        abort();
    } else {
        original_AddModelGeometryToPipingSession(pCar_ID, pModel_index, pVertex_count, pCoordinates);
    }
}

function_hook_state_t function_hook_state_AddSmudgeToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddSmudgeToPipingSession, function_hook_state_AddSmudgeToPipingSession)
static void(__cdecl*original_AddSmudgeToPipingSession)(tU16, int, int, tSmudged_vertex *) = (void(__cdecl*)(tU16, int, int, tSmudged_vertex *))0x0042898f;
CARM95_HOOK_FUNCTION(original_AddSmudgeToPipingSession, AddSmudgeToPipingSession)
void __cdecl AddSmudgeToPipingSession(tU16 pCar_ID, int pModel_index, int pVertex_count, tSmudged_vertex *pCoordinates) {
    tU32 data_size;
    LOG_TRACE("(%u, %d, %d, %p)", pCar_ID, pModel_index, pVertex_count, pCoordinates);

    (void)pCar_ID;
    (void)pModel_index;
    (void)pVertex_count;
    (void)pCoordinates;
    (void)data_size;

    if (function_hook_state_AddSmudgeToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddSmudgeToPipingSession not implemented.");
        abort();
    } else {
        original_AddSmudgeToPipingSession(pCar_ID, pModel_index, pVertex_count, pCoordinates);
    }
}

function_hook_state_t function_hook_state_AddPedestrianToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddPedestrianToPipingSession, function_hook_state_AddPedestrianToPipingSession)
static void(__cdecl*original_AddPedestrianToPipingSession)(int, br_matrix34 *, tU8, tU8, tS8, int, tU16, float, br_scalar, br_vector3 *) = (void(__cdecl*)(int, br_matrix34 *, tU8, tU8, tS8, int, tU16, float, br_scalar, br_vector3 *))0x00428a1a;
CARM95_HOOK_FUNCTION(original_AddPedestrianToPipingSession, AddPedestrianToPipingSession)
void __cdecl AddPedestrianToPipingSession(int pPedestrian_index, br_matrix34 *pTrans, tU8 pAction_index, tU8 pFrame_index, tS8 pHit_points, int pDone_initial, tU16 pParent_ID, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset) {
    tPipe_pedestrian_data data;
    tU32 data_size;
    LOG_TRACE("(%d, %p, %u, %u, %d, %d, %u, %f, %f, %p)", pPedestrian_index, pTrans, pAction_index, pFrame_index, pHit_points, pDone_initial, pParent_ID, pSpin_period, pJump_magnitude, pOffset);

    (void)pPedestrian_index;
    (void)pTrans;
    (void)pAction_index;
    (void)pFrame_index;
    (void)pHit_points;
    (void)pDone_initial;
    (void)pParent_ID;
    (void)pSpin_period;
    (void)pJump_magnitude;
    (void)pOffset;
    (void)data;
    (void)data_size;

    if (function_hook_state_AddPedestrianToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddPedestrianToPipingSession not implemented.");
        abort();
    } else {
        original_AddPedestrianToPipingSession(pPedestrian_index, pTrans, pAction_index, pFrame_index, pHit_points, pDone_initial, pParent_ID, pSpin_period, pJump_magnitude, pOffset);
    }
}

function_hook_state_t function_hook_state_AddSparkToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddSparkToPipingSession, function_hook_state_AddSparkToPipingSession)
static void(__cdecl*original_AddSparkToPipingSession)(int, br_vector3 *, br_vector3 *) = (void(__cdecl*)(int, br_vector3 *, br_vector3 *))0x00428af9;
CARM95_HOOK_FUNCTION(original_AddSparkToPipingSession, AddSparkToPipingSession)
void __cdecl AddSparkToPipingSession(int pSpark_index, br_vector3 *pPos, br_vector3 *pV) {
    tPipe_spark_data data;
    LOG_TRACE("(%d, %p, %p)", pSpark_index, pPos, pV);

    (void)pSpark_index;
    (void)pPos;
    (void)pV;
    (void)data;

    if (function_hook_state_AddSparkToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddSparkToPipingSession not implemented.");
        abort();
    } else {
        original_AddSparkToPipingSession(pSpark_index, pPos, pV);
    }
}

function_hook_state_t function_hook_state_AddShrapnelToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddShrapnelToPipingSession, function_hook_state_AddShrapnelToPipingSession)
static void(__cdecl*original_AddShrapnelToPipingSession)(int, br_vector3 *, tU16, br_material *) = (void(__cdecl*)(int, br_vector3 *, tU16, br_material *))0x00428b4d;
CARM95_HOOK_FUNCTION(original_AddShrapnelToPipingSession, AddShrapnelToPipingSession)
void __cdecl AddShrapnelToPipingSession(int pShrapnel_index, br_vector3 *pPos, tU16 pAge, br_material *pMaterial) {
    tPipe_shrapnel_data data;
    tU32 data_size;
    LOG_TRACE("(%d, %p, %u, %p)", pShrapnel_index, pPos, pAge, pMaterial);

    (void)pShrapnel_index;
    (void)pPos;
    (void)pAge;
    (void)pMaterial;
    (void)data;
    (void)data_size;

    if (function_hook_state_AddShrapnelToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddShrapnelToPipingSession not implemented.");
        abort();
    } else {
        original_AddShrapnelToPipingSession(pShrapnel_index, pPos, pAge, pMaterial);
    }
}

function_hook_state_t function_hook_state_AddScreenWobbleToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddScreenWobbleToPipingSession, function_hook_state_AddScreenWobbleToPipingSession)
static void(__cdecl*original_AddScreenWobbleToPipingSession)(int, int) = (void(__cdecl*)(int, int))0x00428bb4;
CARM95_HOOK_FUNCTION(original_AddScreenWobbleToPipingSession, AddScreenWobbleToPipingSession)
void __cdecl AddScreenWobbleToPipingSession(int pWobble_x, int pWobble_y) {
    tPipe_screen_shake_data data;
    LOG_TRACE("(%d, %d)", pWobble_x, pWobble_y);

    (void)pWobble_x;
    (void)pWobble_y;
    (void)data;

    if (function_hook_state_AddScreenWobbleToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddScreenWobbleToPipingSession not implemented.");
        abort();
    } else {
        original_AddScreenWobbleToPipingSession(pWobble_x, pWobble_y);
    }
}

function_hook_state_t function_hook_state_AddGrooveStopToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddGrooveStopToPipingSession, function_hook_state_AddGrooveStopToPipingSession)
static void(__cdecl*original_AddGrooveStopToPipingSession)(int, br_matrix34 *, int, int, float, float) = (void(__cdecl*)(int, br_matrix34 *, int, int, float, float))0x00428bde;
CARM95_HOOK_FUNCTION(original_AddGrooveStopToPipingSession, AddGrooveStopToPipingSession)
void __cdecl AddGrooveStopToPipingSession(int pGroove_index, br_matrix34 *pMatrix, int pPath_interrupt, int pObject_interrupt, float pPath_resumption, float pObject_resumption) {
    tPipe_groove_stop_data data;
    LOG_TRACE("(%d, %p, %d, %d, %f, %f)", pGroove_index, pMatrix, pPath_interrupt, pObject_interrupt, pPath_resumption, pObject_resumption);

    (void)pGroove_index;
    (void)pMatrix;
    (void)pPath_interrupt;
    (void)pObject_interrupt;
    (void)pPath_resumption;
    (void)pObject_resumption;
    (void)data;

    if (function_hook_state_AddGrooveStopToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddGrooveStopToPipingSession not implemented.");
        abort();
    } else {
        original_AddGrooveStopToPipingSession(pGroove_index, pMatrix, pPath_interrupt, pObject_interrupt, pPath_resumption, pObject_resumption);
    }
}

function_hook_state_t function_hook_state_AddNonCarToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddNonCarToPipingSession, function_hook_state_AddNonCarToPipingSession)
static void(__cdecl*original_AddNonCarToPipingSession)(int, br_actor *) = (void(__cdecl*)(int, br_actor *))0x00428c26;
CARM95_HOOK_FUNCTION(original_AddNonCarToPipingSession, AddNonCarToPipingSession)
void __cdecl AddNonCarToPipingSession(int pIndex, br_actor *pActor) {
    tPipe_non_car_data data;
    LOG_TRACE("(%d, %p)", pIndex, pActor);

    (void)pIndex;
    (void)pActor;
    (void)data;

    if (function_hook_state_AddNonCarToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddNonCarToPipingSession not implemented.");
        abort();
    } else {
        original_AddNonCarToPipingSession(pIndex, pActor);
    }
}

function_hook_state_t function_hook_state_AddSmokeToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddSmokeToPipingSession, function_hook_state_AddSmokeToPipingSession)
static void(__cdecl*original_AddSmokeToPipingSession)(int, tU8, br_vector3 *, br_scalar, br_scalar) = (void(__cdecl*)(int, tU8, br_vector3 *, br_scalar, br_scalar))0x00428c5f;
CARM95_HOOK_FUNCTION(original_AddSmokeToPipingSession, AddSmokeToPipingSession)
void __cdecl AddSmokeToPipingSession(int pIndex, tU8 pType, br_vector3 *pPos, br_scalar pRadius, br_scalar pStrength) {
    tPipe_smoke_data data;
    LOG_TRACE("(%d, %u, %p, %f, %f)", pIndex, pType, pPos, pRadius, pStrength);

    (void)pIndex;
    (void)pType;
    (void)pPos;
    (void)pRadius;
    (void)pStrength;
    (void)data;

    if (function_hook_state_AddSmokeToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddSmokeToPipingSession not implemented.");
        abort();
    } else {
        original_AddSmokeToPipingSession(pIndex, pType, pPos, pRadius, pStrength);
    }
}

function_hook_state_t function_hook_state_AddSmokeColumnToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddSmokeColumnToPipingSession, function_hook_state_AddSmokeColumnToPipingSession)
static void(__cdecl*original_AddSmokeColumnToPipingSession)(int, tCar_spec *, int, int) = (void(__cdecl*)(int, tCar_spec *, int, int))0x00428cb8;
CARM95_HOOK_FUNCTION(original_AddSmokeColumnToPipingSession, AddSmokeColumnToPipingSession)
void __cdecl AddSmokeColumnToPipingSession(int pIndex, tCar_spec *pCar, int pVertex, int pColour) {
    tPipe_smoke_column_data data;
    LOG_TRACE("(%d, %p, %d, %d)", pIndex, pCar, pVertex, pColour);

    (void)pIndex;
    (void)pCar;
    (void)pVertex;
    (void)pColour;
    (void)data;

    if (function_hook_state_AddSmokeColumnToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddSmokeColumnToPipingSession not implemented.");
        abort();
    } else {
        original_AddSmokeColumnToPipingSession(pIndex, pCar, pVertex, pColour);
    }
}

function_hook_state_t function_hook_state_AddFlameToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddFlameToPipingSession, function_hook_state_AddFlameToPipingSession)
static void(__cdecl*original_AddFlameToPipingSession)(int, int, br_scalar, br_scalar, br_scalar, br_scalar) = (void(__cdecl*)(int, int, br_scalar, br_scalar, br_scalar, br_scalar))0x00428cf7;
CARM95_HOOK_FUNCTION(original_AddFlameToPipingSession, AddFlameToPipingSession)
void __cdecl AddFlameToPipingSession(int pIndex, int pFrame_count, br_scalar pScale_x, br_scalar pScale_y, br_scalar pOffset_x, br_scalar pOffset_z) {
    tPipe_flame_data data;
    LOG_TRACE("(%d, %d, %f, %f, %f, %f)", pIndex, pFrame_count, pScale_x, pScale_y, pOffset_x, pOffset_z);

    (void)pIndex;
    (void)pFrame_count;
    (void)pScale_x;
    (void)pScale_y;
    (void)pOffset_x;
    (void)pOffset_z;
    (void)data;

    if (function_hook_state_AddFlameToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddFlameToPipingSession not implemented.");
        abort();
    } else {
        original_AddFlameToPipingSession(pIndex, pFrame_count, pScale_x, pScale_y, pOffset_x, pOffset_z);
    }
}

function_hook_state_t function_hook_state_AddSplashToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddSplashToPipingSession, function_hook_state_AddSplashToPipingSession)
static void(__cdecl*original_AddSplashToPipingSession)(tCollision_info *) = (void(__cdecl*)(tCollision_info *))0x00428d36;
CARM95_HOOK_FUNCTION(original_AddSplashToPipingSession, AddSplashToPipingSession)
void __cdecl AddSplashToPipingSession(tCollision_info *pCar) {
    tPipe_splash_data data;
    LOG_TRACE("(%p)", pCar);

    (void)pCar;
    (void)data;

    if (function_hook_state_AddSplashToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddSplashToPipingSession not implemented.");
        abort();
    } else {
        original_AddSplashToPipingSession(pCar);
    }
}

function_hook_state_t function_hook_state_AddOilSpillToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddOilSpillToPipingSession, function_hook_state_AddOilSpillToPipingSession)
static void(__cdecl*original_AddOilSpillToPipingSession)(int, br_matrix34 *, br_scalar, br_scalar, tU32, tU32, tCar_spec *, br_vector3 *, br_pixelmap *) = (void(__cdecl*)(int, br_matrix34 *, br_scalar, br_scalar, tU32, tU32, tCar_spec *, br_vector3 *, br_pixelmap *))0x00428da1;
CARM95_HOOK_FUNCTION(original_AddOilSpillToPipingSession, AddOilSpillToPipingSession)
void __cdecl AddOilSpillToPipingSession(int pIndex, br_matrix34 *pMat, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap) {
    tPipe_oil_spill_data data;
    LOG_TRACE("(%d, %p, %f, %f, %u, %u, %p, %p, %p)", pIndex, pMat, pFull_size, pGrow_rate, pSpill_time, pStop_time, pCar, pOriginal_pos, pPixelmap);

    (void)pIndex;
    (void)pMat;
    (void)pFull_size;
    (void)pGrow_rate;
    (void)pSpill_time;
    (void)pStop_time;
    (void)pCar;
    (void)pOriginal_pos;
    (void)pPixelmap;
    (void)data;

    if (function_hook_state_AddOilSpillToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddOilSpillToPipingSession not implemented.");
        abort();
    } else {
        original_AddOilSpillToPipingSession(pIndex, pMat, pFull_size, pGrow_rate, pSpill_time, pStop_time, pCar, pOriginal_pos, pPixelmap);
    }
}

function_hook_state_t function_hook_state_AddFrameFinishToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddFrameFinishToPipingSession, function_hook_state_AddFrameFinishToPipingSession)
static void(__cdecl*original_AddFrameFinishToPipingSession)(tU32) = (void(__cdecl*)(tU32))0x00428e0f;
CARM95_HOOK_FUNCTION(original_AddFrameFinishToPipingSession, AddFrameFinishToPipingSession)
void __cdecl AddFrameFinishToPipingSession(tU32 pThe_time) {
    tPipe_frame_boundary_data data;
    LOG_TRACE("(%u)", pThe_time);

    (void)pThe_time;
    (void)data;

    if (function_hook_state_AddFrameFinishToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddFrameFinishToPipingSession not implemented.");
        abort();
    } else {
        original_AddFrameFinishToPipingSession(pThe_time);
    }
}

function_hook_state_t function_hook_state_AddCarToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddCarToPipingSession, function_hook_state_AddCarToPipingSession)
static void(__cdecl*original_AddCarToPipingSession)(int, br_matrix34 *, br_vector3 *, float, float, float, float, float, float, br_scalar, int, int) = (void(__cdecl*)(int, br_matrix34 *, br_vector3 *, float, float, float, float, float, float, br_scalar, int, int))0x00428e33;
CARM95_HOOK_FUNCTION(original_AddCarToPipingSession, AddCarToPipingSession)
void __cdecl AddCarToPipingSession(int pCar_ID, br_matrix34 *pCar_mat, br_vector3 *pCar_velocity, float pSpeedo_speed, float pLf_sus_position, float pRf_sus_position, float pLr_sus_position, float pRr_sus_position, float pSteering_angle, br_scalar pRevs, int pGear, int pFrame_coll_flag) {
    tPipe_car_data data;
    LOG_TRACE("(%d, %p, %p, %f, %f, %f, %f, %f, %f, %f, %d, %d)", pCar_ID, pCar_mat, pCar_velocity, pSpeedo_speed, pLf_sus_position, pRf_sus_position, pLr_sus_position, pRr_sus_position, pSteering_angle, pRevs, pGear, pFrame_coll_flag);

    (void)pCar_ID;
    (void)pCar_mat;
    (void)pCar_velocity;
    (void)pSpeedo_speed;
    (void)pLf_sus_position;
    (void)pRf_sus_position;
    (void)pLr_sus_position;
    (void)pRr_sus_position;
    (void)pSteering_angle;
    (void)pRevs;
    (void)pGear;
    (void)pFrame_coll_flag;
    (void)data;

    if (function_hook_state_AddCarToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddCarToPipingSession not implemented.");
        abort();
    } else {
        original_AddCarToPipingSession(pCar_ID, pCar_mat, pCar_velocity, pSpeedo_speed, pLf_sus_position, pRf_sus_position, pLr_sus_position, pRr_sus_position, pSteering_angle, pRevs, pGear, pFrame_coll_flag);
    }
}

function_hook_state_t function_hook_state_AddSoundToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddSoundToPipingSession, function_hook_state_AddSoundToPipingSession)
static void(__cdecl*original_AddSoundToPipingSession)(tS3_outlet_ptr, int, tS3_volume, tS3_volume, tS3_pitch, br_vector3 *) = (void(__cdecl*)(tS3_outlet_ptr, int, tS3_volume, tS3_volume, tS3_pitch, br_vector3 *))0x00428f38;
CARM95_HOOK_FUNCTION(original_AddSoundToPipingSession, AddSoundToPipingSession)
void __cdecl AddSoundToPipingSession(tS3_outlet_ptr pOutlet, int pSound_index, tS3_volume pL_volume, tS3_volume pR_volume, tS3_pitch pPitch, br_vector3 *pPos) {
    tPipe_sound_data data;
    LOG_TRACE("(\"%s\", %d, %d, %d, %d, %p)", pOutlet, pSound_index, pL_volume, pR_volume, pPitch, pPos);

    (void)pOutlet;
    (void)pSound_index;
    (void)pL_volume;
    (void)pR_volume;
    (void)pPitch;
    (void)pPos;
    (void)data;

    if (function_hook_state_AddSoundToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddSoundToPipingSession not implemented.");
        abort();
    } else {
        original_AddSoundToPipingSession(pOutlet, pSound_index, pL_volume, pR_volume, pPitch, pPos);
    }
}

function_hook_state_t function_hook_state_AddDamageToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddDamageToPipingSession, function_hook_state_AddDamageToPipingSession)
static void(__cdecl*original_AddDamageToPipingSession)(int, tS8 *) = (void(__cdecl*)(int, tS8 *))0x00428fb5;
CARM95_HOOK_FUNCTION(original_AddDamageToPipingSession, AddDamageToPipingSession)
void __cdecl AddDamageToPipingSession(int pCar_ID, tS8 *pDifferences) {
    tPipe_damage_data data;
    int i;
    LOG_TRACE("(%d, %p)", pCar_ID, pDifferences);

    (void)pCar_ID;
    (void)pDifferences;
    (void)data;
    (void)i;

    if (function_hook_state_AddDamageToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddDamageToPipingSession not implemented.");
        abort();
    } else {
        original_AddDamageToPipingSession(pCar_ID, pDifferences);
    }
}

function_hook_state_t function_hook_state_AddSpecialToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddSpecialToPipingSession, function_hook_state_AddSpecialToPipingSession)
static void(__cdecl*original_AddSpecialToPipingSession)(tSpecial_type) = (void(__cdecl*)(tSpecial_type))0x00429003;
CARM95_HOOK_FUNCTION(original_AddSpecialToPipingSession, AddSpecialToPipingSession)
void __cdecl AddSpecialToPipingSession(tSpecial_type pType) {
    tPipe_special_data data;
    LOG_TRACE("(%d)", pType);

    (void)pType;
    (void)data;

    if (function_hook_state_AddSpecialToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddSpecialToPipingSession not implemented.");
        abort();
    } else {
        original_AddSpecialToPipingSession(pType);
    }
}

function_hook_state_t function_hook_state_AddPedGibToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddPedGibToPipingSession, function_hook_state_AddPedGibToPipingSession)
static void(__cdecl*original_AddPedGibToPipingSession)(int, br_matrix34 *, int, int, int) = (void(__cdecl*)(int, br_matrix34 *, int, int, int))0x00429023;
CARM95_HOOK_FUNCTION(original_AddPedGibToPipingSession, AddPedGibToPipingSession)
void __cdecl AddPedGibToPipingSession(int pIndex, br_matrix34 *pTrans, int pSize, int pGib_index, int pPed_index) {
    tPipe_ped_gib_data data;
    LOG_TRACE("(%d, %p, %d, %d, %d)", pIndex, pTrans, pSize, pGib_index, pPed_index);

    (void)pIndex;
    (void)pTrans;
    (void)pSize;
    (void)pGib_index;
    (void)pPed_index;
    (void)data;

    if (function_hook_state_AddPedGibToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddPedGibToPipingSession not implemented.");
        abort();
    } else {
        original_AddPedGibToPipingSession(pIndex, pTrans, pSize, pGib_index, pPed_index);
    }
}

function_hook_state_t function_hook_state_AddCarIncidentToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddCarIncidentToPipingSession, function_hook_state_AddCarIncidentToPipingSession)
static void(__cdecl*original_AddCarIncidentToPipingSession)(float, tCar_spec *, br_vector3 *) = (void(__cdecl*)(float, tCar_spec *, br_vector3 *))0x00429063;
CARM95_HOOK_FUNCTION(original_AddCarIncidentToPipingSession, AddCarIncidentToPipingSession)
void __cdecl AddCarIncidentToPipingSession(float pSeverity, tCar_spec *pCar, br_vector3 *pImpact_point) {
    tPipe_incident_data data;
    LOG_TRACE("(%f, %p, %p)", pSeverity, pCar, pImpact_point);

    (void)pSeverity;
    (void)pCar;
    (void)pImpact_point;
    (void)data;

    if (function_hook_state_AddCarIncidentToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddCarIncidentToPipingSession not implemented.");
        abort();
    } else {
        original_AddCarIncidentToPipingSession(pSeverity, pCar, pImpact_point);
    }
}

function_hook_state_t function_hook_state_AddPedIncidentToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddPedIncidentToPipingSession, function_hook_state_AddPedIncidentToPipingSession)
static void(__cdecl*original_AddPedIncidentToPipingSession)(int, br_actor *) = (void(__cdecl*)(int, br_actor *))0x004290ab;
CARM95_HOOK_FUNCTION(original_AddPedIncidentToPipingSession, AddPedIncidentToPipingSession)
void __cdecl AddPedIncidentToPipingSession(int pPed_index, br_actor *pActor) {
    tPipe_incident_data data;
    LOG_TRACE("(%d, %p)", pPed_index, pActor);

    (void)pPed_index;
    (void)pActor;
    (void)data;

    if (function_hook_state_AddPedIncidentToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddPedIncidentToPipingSession not implemented.");
        abort();
    } else {
        original_AddPedIncidentToPipingSession(pPed_index, pActor);
    }
}

function_hook_state_t function_hook_state_AddWallIncidentToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddWallIncidentToPipingSession, function_hook_state_AddWallIncidentToPipingSession)
static void(__cdecl*original_AddWallIncidentToPipingSession)(float, br_vector3 *) = (void(__cdecl*)(float, br_vector3 *))0x004290dd;
CARM95_HOOK_FUNCTION(original_AddWallIncidentToPipingSession, AddWallIncidentToPipingSession)
void __cdecl AddWallIncidentToPipingSession(float pSeverity, br_vector3 *pImpact_point) {
    tPipe_incident_data data;
    LOG_TRACE("(%f, %p)", pSeverity, pImpact_point);

    (void)pSeverity;
    (void)pImpact_point;
    (void)data;

    if (function_hook_state_AddWallIncidentToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddWallIncidentToPipingSession not implemented.");
        abort();
    } else {
        original_AddWallIncidentToPipingSession(pSeverity, pImpact_point);
    }
}

function_hook_state_t function_hook_state_AddProxRayToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddProxRayToPipingSession, function_hook_state_AddProxRayToPipingSession)
static void(__cdecl*original_AddProxRayToPipingSession)(int, tCar_spec *, tU16, tU32) = (void(__cdecl*)(int, tCar_spec *, tU16, tU32))0x00429117;
CARM95_HOOK_FUNCTION(original_AddProxRayToPipingSession, AddProxRayToPipingSession)
void __cdecl AddProxRayToPipingSession(int pRay_index, tCar_spec *pCar, tU16 pPed_index, tU32 pTime) {
    tPipe_prox_ray_data data;
    LOG_TRACE("(%d, %p, %u, %u)", pRay_index, pCar, pPed_index, pTime);

    (void)pRay_index;
    (void)pCar;
    (void)pPed_index;
    (void)pTime;
    (void)data;

    if (function_hook_state_AddProxRayToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddProxRayToPipingSession not implemented.");
        abort();
    } else {
        original_AddProxRayToPipingSession(pRay_index, pCar, pPed_index, pTime);
    }
}

function_hook_state_t function_hook_state_AddSkidAdjustmentToPipingSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AddSkidAdjustmentToPipingSession, function_hook_state_AddSkidAdjustmentToPipingSession)
static void(__cdecl*original_AddSkidAdjustmentToPipingSession)(int, br_matrix34 *, int) = (void(__cdecl*)(int, br_matrix34 *, int))0x00429153;
CARM95_HOOK_FUNCTION(original_AddSkidAdjustmentToPipingSession, AddSkidAdjustmentToPipingSession)
void __cdecl AddSkidAdjustmentToPipingSession(int pSkid_num, br_matrix34 *pMatrix, int pMaterial_index) {
    tPipe_skid_adjustment adjustment;
    LOG_TRACE("(%d, %p, %d)", pSkid_num, pMatrix, pMaterial_index);

    (void)pSkid_num;
    (void)pMatrix;
    (void)pMaterial_index;
    (void)adjustment;

    if (function_hook_state_AddSkidAdjustmentToPipingSession == HOOK_ENABLED) {
        assert(0 && "AddSkidAdjustmentToPipingSession not implemented.");
        abort();
    } else {
        original_AddSkidAdjustmentToPipingSession(pSkid_num, pMatrix, pMaterial_index);
    }
}

function_hook_state_t function_hook_state_PipeSingleModelGeometry = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleModelGeometry, function_hook_state_PipeSingleModelGeometry)
static void(__cdecl*original_PipeSingleModelGeometry)(tU16, int, int, tChanged_vertex *) = (void(__cdecl*)(tU16, int, int, tChanged_vertex *))0x00429186;
CARM95_HOOK_FUNCTION(original_PipeSingleModelGeometry, PipeSingleModelGeometry)
void __cdecl PipeSingleModelGeometry(tU16 pCar_ID, int pModel_index, int pVertex_count, tChanged_vertex *pCoordinates) {
    LOG_TRACE("(%u, %d, %d, %p)", pCar_ID, pModel_index, pVertex_count, pCoordinates);

    (void)pCar_ID;
    (void)pModel_index;
    (void)pVertex_count;
    (void)pCoordinates;

    if (function_hook_state_PipeSingleModelGeometry == HOOK_ENABLED) {
        assert(0 && "PipeSingleModelGeometry not implemented.");
        abort();
    } else {
        original_PipeSingleModelGeometry(pCar_ID, pModel_index, pVertex_count, pCoordinates);
    }
}

function_hook_state_t function_hook_state_PipeSinglePedestrian = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSinglePedestrian, function_hook_state_PipeSinglePedestrian)
static void(__cdecl*original_PipeSinglePedestrian)(int, br_matrix34 *, tU8, tU8, tS8, int, tU16, float, br_scalar, br_vector3 *) = (void(__cdecl*)(int, br_matrix34 *, tU8, tU8, tS8, int, tU16, float, br_scalar, br_vector3 *))0x004291b8;
CARM95_HOOK_FUNCTION(original_PipeSinglePedestrian, PipeSinglePedestrian)
void __cdecl PipeSinglePedestrian(int pPedestrian_index, br_matrix34 *pTrans, tU8 pAction_index, tU8 pFrame_index, tS8 pHit_points, int pDone_initial, tU16 pParent_ID, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset) {
    LOG_TRACE("(%d, %p, %u, %u, %d, %d, %u, %f, %f, %p)", pPedestrian_index, pTrans, pAction_index, pFrame_index, pHit_points, pDone_initial, pParent_ID, pSpin_period, pJump_magnitude, pOffset);

    (void)pPedestrian_index;
    (void)pTrans;
    (void)pAction_index;
    (void)pFrame_index;
    (void)pHit_points;
    (void)pDone_initial;
    (void)pParent_ID;
    (void)pSpin_period;
    (void)pJump_magnitude;
    (void)pOffset;

    if (function_hook_state_PipeSinglePedestrian == HOOK_ENABLED) {
        assert(0 && "PipeSinglePedestrian not implemented.");
        abort();
    } else {
        original_PipeSinglePedestrian(pPedestrian_index, pTrans, pAction_index, pFrame_index, pHit_points, pDone_initial, pParent_ID, pSpin_period, pJump_magnitude, pOffset);
    }
}

function_hook_state_t function_hook_state_PipeSingleCar = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleCar, function_hook_state_PipeSingleCar)
static void(__cdecl*original_PipeSingleCar)(int, br_matrix34 *, br_vector3 *, float, float, float, float, float, float, br_scalar, int, int) = (void(__cdecl*)(int, br_matrix34 *, br_vector3 *, float, float, float, float, float, float, br_scalar, int, int))0x00429202;
CARM95_HOOK_FUNCTION(original_PipeSingleCar, PipeSingleCar)
void __cdecl PipeSingleCar(int pCar_ID, br_matrix34 *pCar_mat, br_vector3 *pCar_velocity, float pSpeedo_speed, float pLf_sus_position, float pRf_sus_position, float pLr_sus_position, float pRr_sus_position, float pSteering_angle, br_scalar pRevs, int pGear, int pFrame_coll_flag) {
    LOG_TRACE("(%d, %p, %p, %f, %f, %f, %f, %f, %f, %f, %d, %d)", pCar_ID, pCar_mat, pCar_velocity, pSpeedo_speed, pLf_sus_position, pRf_sus_position, pLr_sus_position, pRr_sus_position, pSteering_angle, pRevs, pGear, pFrame_coll_flag);

    (void)pCar_ID;
    (void)pCar_mat;
    (void)pCar_velocity;
    (void)pSpeedo_speed;
    (void)pLf_sus_position;
    (void)pRf_sus_position;
    (void)pLr_sus_position;
    (void)pRr_sus_position;
    (void)pSteering_angle;
    (void)pRevs;
    (void)pGear;
    (void)pFrame_coll_flag;

    if (function_hook_state_PipeSingleCar == HOOK_ENABLED) {
        assert(0 && "PipeSingleCar not implemented.");
        abort();
    } else {
        original_PipeSingleCar(pCar_ID, pCar_mat, pCar_velocity, pSpeedo_speed, pLf_sus_position, pRf_sus_position, pLr_sus_position, pRr_sus_position, pSteering_angle, pRevs, pGear, pFrame_coll_flag);
    }
}

function_hook_state_t function_hook_state_PipeSingleSound = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleSound, function_hook_state_PipeSingleSound)
static void(__cdecl*original_PipeSingleSound)(tS3_outlet_ptr, int, tS3_volume, tS3_volume, tS3_pitch, br_vector3 *) = (void(__cdecl*)(tS3_outlet_ptr, int, tS3_volume, tS3_volume, tS3_pitch, br_vector3 *))0x00429254;
CARM95_HOOK_FUNCTION(original_PipeSingleSound, PipeSingleSound)
void __cdecl PipeSingleSound(tS3_outlet_ptr pOutlet, int pSound_index, tS3_volume pL_volume, tS3_volume pR_volume, tS3_pitch pPitch, br_vector3 *pPos) {
    LOG_TRACE("(\"%s\", %d, %d, %d, %d, %p)", pOutlet, pSound_index, pL_volume, pR_volume, pPitch, pPos);

    (void)pOutlet;
    (void)pSound_index;
    (void)pL_volume;
    (void)pR_volume;
    (void)pPitch;
    (void)pPos;

    if (function_hook_state_PipeSingleSound == HOOK_ENABLED) {
        assert(0 && "PipeSingleSound not implemented.");
        abort();
    } else {
        original_PipeSingleSound(pOutlet, pSound_index, pL_volume, pR_volume, pPitch, pPos);
    }
}

function_hook_state_t function_hook_state_PipeSingleOilSpill = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleOilSpill, function_hook_state_PipeSingleOilSpill)
static void(__cdecl*original_PipeSingleOilSpill)(int, br_matrix34 *, br_scalar, br_scalar, tU32, tU32, tCar_spec *, br_vector3 *, br_pixelmap *) = (void(__cdecl*)(int, br_matrix34 *, br_scalar, br_scalar, tU32, tU32, tCar_spec *, br_vector3 *, br_pixelmap *))0x004292a8;
CARM95_HOOK_FUNCTION(original_PipeSingleOilSpill, PipeSingleOilSpill)
void __cdecl PipeSingleOilSpill(int pIndex, br_matrix34 *pMat, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap) {
    LOG_TRACE("(%d, %p, %f, %f, %u, %u, %p, %p, %p)", pIndex, pMat, pFull_size, pGrow_rate, pSpill_time, pStop_time, pCar, pOriginal_pos, pPixelmap);

    (void)pIndex;
    (void)pMat;
    (void)pFull_size;
    (void)pGrow_rate;
    (void)pSpill_time;
    (void)pStop_time;
    (void)pCar;
    (void)pOriginal_pos;
    (void)pPixelmap;

    if (function_hook_state_PipeSingleOilSpill == HOOK_ENABLED) {
        assert(0 && "PipeSingleOilSpill not implemented.");
        abort();
    } else {
        original_PipeSingleOilSpill(pIndex, pMat, pFull_size, pGrow_rate, pSpill_time, pStop_time, pCar, pOriginal_pos, pPixelmap);
    }
}

function_hook_state_t function_hook_state_PipeSingleDamage = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleDamage, function_hook_state_PipeSingleDamage)
static void(__cdecl*original_PipeSingleDamage)(int, tS8 *) = (void(__cdecl*)(int, tS8 *))0x004292ee;
CARM95_HOOK_FUNCTION(original_PipeSingleDamage, PipeSingleDamage)
void __cdecl PipeSingleDamage(int pCar_ID, tS8 *pDifferences) {
    LOG_TRACE("(%d, %p)", pCar_ID, pDifferences);

    (void)pCar_ID;
    (void)pDifferences;

    if (function_hook_state_PipeSingleDamage == HOOK_ENABLED) {
        assert(0 && "PipeSingleDamage not implemented.");
        abort();
    } else {
        original_PipeSingleDamage(pCar_ID, pDifferences);
    }
}

function_hook_state_t function_hook_state_PipeSingleSpecial = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleSpecial, function_hook_state_PipeSingleSpecial)
static void(__cdecl*original_PipeSingleSpecial)(tSpecial_type) = (void(__cdecl*)(tSpecial_type))0x00429318;
CARM95_HOOK_FUNCTION(original_PipeSingleSpecial, PipeSingleSpecial)
void __cdecl PipeSingleSpecial(tSpecial_type pType) {
    LOG_TRACE("(%d)", pType);

    (void)pType;

    if (function_hook_state_PipeSingleSpecial == HOOK_ENABLED) {
        assert(0 && "PipeSingleSpecial not implemented.");
        abort();
    } else {
        original_PipeSingleSpecial(pType);
    }
}

function_hook_state_t function_hook_state_PipeSinglePedGib = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSinglePedGib, function_hook_state_PipeSinglePedGib)
static void(__cdecl*original_PipeSinglePedGib)(int, br_matrix34 *, int, int, int) = (void(__cdecl*)(int, br_matrix34 *, int, int, int))0x0042933e;
CARM95_HOOK_FUNCTION(original_PipeSinglePedGib, PipeSinglePedGib)
void __cdecl PipeSinglePedGib(int pIndex, br_matrix34 *pTrans, int pSize, int pGib_index, int pPed_index) {
    LOG_TRACE("(%d, %p, %d, %d, %d)", pIndex, pTrans, pSize, pGib_index, pPed_index);

    (void)pIndex;
    (void)pTrans;
    (void)pSize;
    (void)pGib_index;
    (void)pPed_index;

    if (function_hook_state_PipeSinglePedGib == HOOK_ENABLED) {
        assert(0 && "PipeSinglePedGib not implemented.");
        abort();
    } else {
        original_PipeSinglePedGib(pIndex, pTrans, pSize, pGib_index, pPed_index);
    }
}

function_hook_state_t function_hook_state_PipeSingleCarIncident = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleCarIncident, function_hook_state_PipeSingleCarIncident)
static void(__cdecl*original_PipeSingleCarIncident)(float, tCar_spec *, br_vector3 *) = (void(__cdecl*)(float, tCar_spec *, br_vector3 *))0x00429374;
CARM95_HOOK_FUNCTION(original_PipeSingleCarIncident, PipeSingleCarIncident)
void __cdecl PipeSingleCarIncident(float pSeverity, tCar_spec *pCar, br_vector3 *pImpact_point) {
    LOG_TRACE("(%f, %p, %p)", pSeverity, pCar, pImpact_point);

    (void)pSeverity;
    (void)pCar;
    (void)pImpact_point;

    if (function_hook_state_PipeSingleCarIncident == HOOK_ENABLED) {
        assert(0 && "PipeSingleCarIncident not implemented.");
        abort();
    } else {
        original_PipeSingleCarIncident(pSeverity, pCar, pImpact_point);
    }
}

function_hook_state_t function_hook_state_PipeSinglePedIncident = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSinglePedIncident, function_hook_state_PipeSinglePedIncident)
static void(__cdecl*original_PipeSinglePedIncident)(int, br_actor *) = (void(__cdecl*)(int, br_actor *))0x004293a2;
CARM95_HOOK_FUNCTION(original_PipeSinglePedIncident, PipeSinglePedIncident)
void __cdecl PipeSinglePedIncident(int pPed_index, br_actor *pActor) {
    LOG_TRACE("(%d, %p)", pPed_index, pActor);

    (void)pPed_index;
    (void)pActor;

    if (function_hook_state_PipeSinglePedIncident == HOOK_ENABLED) {
        assert(0 && "PipeSinglePedIncident not implemented.");
        abort();
    } else {
        original_PipeSinglePedIncident(pPed_index, pActor);
    }
}

function_hook_state_t function_hook_state_PipeSingleWallIncident = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleWallIncident, function_hook_state_PipeSingleWallIncident)
static void(__cdecl*original_PipeSingleWallIncident)(float, br_vector3 *) = (void(__cdecl*)(float, br_vector3 *))0x004293d6;
CARM95_HOOK_FUNCTION(original_PipeSingleWallIncident, PipeSingleWallIncident)
void __cdecl PipeSingleWallIncident(float pSeverity, br_vector3 *pImpact_point) {
    LOG_TRACE("(%f, %p)", pSeverity, pImpact_point);

    (void)pSeverity;
    (void)pImpact_point;

    if (function_hook_state_PipeSingleWallIncident == HOOK_ENABLED) {
        assert(0 && "PipeSingleWallIncident not implemented.");
        abort();
    } else {
        original_PipeSingleWallIncident(pSeverity, pImpact_point);
    }
}

function_hook_state_t function_hook_state_PipeSingleScreenShake = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleScreenShake, function_hook_state_PipeSingleScreenShake)
static void(__cdecl*original_PipeSingleScreenShake)(int, int) = (void(__cdecl*)(int, int))0x00429415;
CARM95_HOOK_FUNCTION(original_PipeSingleScreenShake, PipeSingleScreenShake)
void __cdecl PipeSingleScreenShake(int pWobble_x, int pWobble_y) {
    LOG_TRACE("(%d, %d)", pWobble_x, pWobble_y);

    (void)pWobble_x;
    (void)pWobble_y;

    if (function_hook_state_PipeSingleScreenShake == HOOK_ENABLED) {
        assert(0 && "PipeSingleScreenShake not implemented.");
        abort();
    } else {
        original_PipeSingleScreenShake(pWobble_x, pWobble_y);
    }
}

function_hook_state_t function_hook_state_PipeSingleGrooveStop = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleGrooveStop, function_hook_state_PipeSingleGrooveStop)
static void(__cdecl*original_PipeSingleGrooveStop)(int, br_matrix34 *, int, int, float, float) = (void(__cdecl*)(int, br_matrix34 *, int, int, float, float))0x0042943f;
CARM95_HOOK_FUNCTION(original_PipeSingleGrooveStop, PipeSingleGrooveStop)
void __cdecl PipeSingleGrooveStop(int pGroove_index, br_matrix34 *pMatrix, int pPath_interrupt, int pObject_interrupt, float pPath_resumption, float pObject_resumption) {
    LOG_TRACE("(%d, %p, %d, %d, %f, %f)", pGroove_index, pMatrix, pPath_interrupt, pObject_interrupt, pPath_resumption, pObject_resumption);

    (void)pGroove_index;
    (void)pMatrix;
    (void)pPath_interrupt;
    (void)pObject_interrupt;
    (void)pPath_resumption;
    (void)pObject_resumption;

    if (function_hook_state_PipeSingleGrooveStop == HOOK_ENABLED) {
        assert(0 && "PipeSingleGrooveStop not implemented.");
        abort();
    } else {
        original_PipeSingleGrooveStop(pGroove_index, pMatrix, pPath_interrupt, pObject_interrupt, pPath_resumption, pObject_resumption);
    }
}

function_hook_state_t function_hook_state_PipeFrameFinish = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeFrameFinish, function_hook_state_PipeFrameFinish)
static void(__cdecl*original_PipeFrameFinish)() = (void(__cdecl*)())0x00429479;
CARM95_HOOK_FUNCTION(original_PipeFrameFinish, PipeFrameFinish)
void __cdecl PipeFrameFinish() {
    LOG_TRACE("()");


    if (function_hook_state_PipeFrameFinish == HOOK_ENABLED) {
        assert(0 && "PipeFrameFinish not implemented.");
        abort();
    } else {
        original_PipeFrameFinish();
    }
}

function_hook_state_t function_hook_state_PipingFrameReset = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipingFrameReset, function_hook_state_PipingFrameReset)
static void(__cdecl*original_PipingFrameReset)() = (void(__cdecl*)())0x004294e4;
CARM95_HOOK_FUNCTION(original_PipingFrameReset, PipingFrameReset)
void __cdecl PipingFrameReset() {
    int i;
    LOG_TRACE("()");

    (void)i;

    if (function_hook_state_PipingFrameReset == HOOK_ENABLED) {
        assert(0 && "PipingFrameReset not implemented.");
        abort();
    } else {
        original_PipingFrameReset();
    }
}

function_hook_state_t function_hook_state_PipeSingleSkidAdjustment = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeSingleSkidAdjustment, function_hook_state_PipeSingleSkidAdjustment)
static void(__cdecl*original_PipeSingleSkidAdjustment)(int, br_matrix34 *, int) = (void(__cdecl*)(int, br_matrix34 *, int))0x0042952b;
CARM95_HOOK_FUNCTION(original_PipeSingleSkidAdjustment, PipeSingleSkidAdjustment)
void __cdecl PipeSingleSkidAdjustment(int pSkid_num, br_matrix34 *pMatrix, int pMaterial_index) {
    LOG_TRACE("(%d, %p, %d)", pSkid_num, pMatrix, pMaterial_index);

    (void)pSkid_num;
    (void)pMatrix;
    (void)pMaterial_index;

    if (function_hook_state_PipeSingleSkidAdjustment == HOOK_ENABLED) {
        assert(0 && "PipeSingleSkidAdjustment not implemented.");
        abort();
    } else {
        original_PipeSingleSkidAdjustment(pSkid_num, pMatrix, pMaterial_index);
    }
}

function_hook_state_t function_hook_state_ResetPiping = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ResetPiping, function_hook_state_ResetPiping)
static void(__cdecl*original_ResetPiping)() = (void(__cdecl*)())0x00429559;
CARM95_HOOK_FUNCTION(original_ResetPiping, ResetPiping)
void __cdecl ResetPiping() {
    LOG_TRACE("()");


    if (function_hook_state_ResetPiping == HOOK_ENABLED) {
        assert(0 && "ResetPiping not implemented.");
        abort();
    } else {
        original_ResetPiping();
    }
}

function_hook_state_t function_hook_state_InitialisePiping = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(InitialisePiping, function_hook_state_InitialisePiping)
static void(__cdecl*original_InitialisePiping)() = (void(__cdecl*)())0x00429596;
CARM95_HOOK_FUNCTION(original_InitialisePiping, InitialisePiping)
void __cdecl InitialisePiping() {
    LOG_TRACE("()");


    if (function_hook_state_InitialisePiping == HOOK_ENABLED) {
        assert(0 && "InitialisePiping not implemented.");
        abort();
    } else {
        original_InitialisePiping();
    }
}

function_hook_state_t function_hook_state_DisposePiping = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DisposePiping, function_hook_state_DisposePiping)
static void(__cdecl*original_DisposePiping)() = (void(__cdecl*)())0x0042966f;
CARM95_HOOK_FUNCTION(original_DisposePiping, DisposePiping)
void __cdecl DisposePiping() {
    LOG_TRACE("()");


    if (function_hook_state_DisposePiping == HOOK_ENABLED) {
        assert(0 && "DisposePiping not implemented.");
        abort();
    } else {
        original_DisposePiping();
    }
}

function_hook_state_t function_hook_state_InitLastDamageArrayEtc = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(InitLastDamageArrayEtc, function_hook_state_InitLastDamageArrayEtc)
static void(__cdecl*original_InitLastDamageArrayEtc)() = (void(__cdecl*)())0x004296e9;
CARM95_HOOK_FUNCTION(original_InitLastDamageArrayEtc, InitLastDamageArrayEtc)
void __cdecl InitLastDamageArrayEtc() {
    int i;
    int j;
    int cat;
    int car_count;
    tCar_spec *car;
    LOG_TRACE("()");

    (void)i;
    (void)j;
    (void)cat;
    (void)car_count;
    (void)car;

    if (function_hook_state_InitLastDamageArrayEtc == HOOK_ENABLED) {
        assert(0 && "InitLastDamageArrayEtc not implemented.");
        abort();
    } else {
        original_InitLastDamageArrayEtc();
    }
}

function_hook_state_t function_hook_state_ResetCars = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ResetCars, function_hook_state_ResetCars)
static void(__cdecl*original_ResetCars)() = (void(__cdecl*)())0x004297d2;
CARM95_HOOK_FUNCTION(original_ResetCars, ResetCars)
void __cdecl ResetCars() {
    tCar_spec *car;
    int cat;
    int i;
    int car_count;
    LOG_TRACE("()");

    (void)car;
    (void)cat;
    (void)i;
    (void)car_count;

    if (function_hook_state_ResetCars == HOOK_ENABLED) {
        assert(0 && "ResetCars not implemented.");
        abort();
    } else {
        original_ResetCars();
    }
}

function_hook_state_t function_hook_state_PipeCarPositions = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(PipeCarPositions, function_hook_state_PipeCarPositions)
static void(__cdecl*original_PipeCarPositions)() = (void(__cdecl*)())0x0042987f;
CARM95_HOOK_FUNCTION(original_PipeCarPositions, PipeCarPositions)
void __cdecl PipeCarPositions() {
    tCar_spec *car;
    int cat;
    int i;
    int j;
    int car_count;
    int session_started;
    int difference_found;
    tS8 damage_deltas[12];
    LOG_TRACE("()");

    (void)car;
    (void)cat;
    (void)i;
    (void)j;
    (void)car_count;
    (void)session_started;
    (void)difference_found;
    (void)damage_deltas;

    if (function_hook_state_PipeCarPositions == HOOK_ENABLED) {
        assert(0 && "PipeCarPositions not implemented.");
        abort();
    } else {
        original_PipeCarPositions();
    }
}

function_hook_state_t function_hook_state_ResetPipePlayToEnd = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ResetPipePlayToEnd, function_hook_state_ResetPipePlayToEnd)
static void(__cdecl*original_ResetPipePlayToEnd)() = (void(__cdecl*)())0x00429b22;
CARM95_HOOK_FUNCTION(original_ResetPipePlayToEnd, ResetPipePlayToEnd)
void __cdecl ResetPipePlayToEnd() {
    LOG_TRACE("()");


    if (function_hook_state_ResetPipePlayToEnd == HOOK_ENABLED) {
        assert(0 && "ResetPipePlayToEnd not implemented.");
        abort();
    } else {
        original_ResetPipePlayToEnd();
    }
}

function_hook_state_t function_hook_state_ResetPipePlayToStart = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ResetPipePlayToStart, function_hook_state_ResetPipePlayToStart)
static void(__cdecl*original_ResetPipePlayToStart)() = (void(__cdecl*)())0x00429b37;
CARM95_HOOK_FUNCTION(original_ResetPipePlayToStart, ResetPipePlayToStart)
void __cdecl ResetPipePlayToStart() {
    LOG_TRACE("()");


    if (function_hook_state_ResetPipePlayToStart == HOOK_ENABLED) {
        assert(0 && "ResetPipePlayToStart not implemented.");
        abort();
    } else {
        original_ResetPipePlayToStart();
    }
}

function_hook_state_t function_hook_state_GetPipePlayPtr = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(GetPipePlayPtr, function_hook_state_GetPipePlayPtr)
static tU8 *(__cdecl*original_GetPipePlayPtr)() = (tU8 *(__cdecl*)())0x00429b4c;
CARM95_HOOK_FUNCTION(original_GetPipePlayPtr, GetPipePlayPtr)
tU8* __cdecl GetPipePlayPtr() {
    LOG_TRACE("()");


    if (function_hook_state_GetPipePlayPtr == HOOK_ENABLED) {
        assert(0 && "GetPipePlayPtr not implemented.");
        abort();
    } else {
        return original_GetPipePlayPtr();
    }
}

function_hook_state_t function_hook_state_SetPipePlayPtr = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(SetPipePlayPtr, function_hook_state_SetPipePlayPtr)
static void(__cdecl*original_SetPipePlayPtr)(tU8 *) = (void(__cdecl*)(tU8 *))0x00429b61;
CARM95_HOOK_FUNCTION(original_SetPipePlayPtr, SetPipePlayPtr)
void __cdecl SetPipePlayPtr(tU8 *pPtr) {
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;

    if (function_hook_state_SetPipePlayPtr == HOOK_ENABLED) {
        assert(0 && "SetPipePlayPtr not implemented.");
        abort();
    } else {
        original_SetPipePlayPtr(pPtr);
    }
}

function_hook_state_t function_hook_state_AdvanceChunkPtr = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(AdvanceChunkPtr, function_hook_state_AdvanceChunkPtr)
static void(__cdecl*original_AdvanceChunkPtr)(tPipe_chunk **, tChunk_subject_index) = (void(__cdecl*)(tPipe_chunk **, tChunk_subject_index))0x00429fcd;
CARM95_HOOK_FUNCTION(original_AdvanceChunkPtr, AdvanceChunkPtr)
void __cdecl AdvanceChunkPtr(tPipe_chunk **pChunk, tChunk_subject_index pType) {
    tPipe_chunk *old_chunk;
    LOG_TRACE("(%p, %u)", pChunk, pType);

    (void)pChunk;
    (void)pType;
    (void)old_chunk;

    if (function_hook_state_AdvanceChunkPtr == HOOK_ENABLED) {
        assert(0 && "AdvanceChunkPtr not implemented.");
        abort();
    } else {
        original_AdvanceChunkPtr(pChunk, pType);
    }
}

function_hook_state_t function_hook_state_ApplyModelGeometry = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyModelGeometry, function_hook_state_ApplyModelGeometry)
static void(__cdecl*original_ApplyModelGeometry)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a1fd;
CARM95_HOOK_FUNCTION(original_ApplyModelGeometry, ApplyModelGeometry)
void __cdecl ApplyModelGeometry(tPipe_chunk **pChunk) {
    int i;
    br_model *model_ptr;
    tCar_spec *car;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)i;
    (void)model_ptr;
    (void)car;

    if (function_hook_state_ApplyModelGeometry == HOOK_ENABLED) {
        assert(0 && "ApplyModelGeometry not implemented.");
        abort();
    } else {
        original_ApplyModelGeometry(pChunk);
    }
}

function_hook_state_t function_hook_state_DoSmudge = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(DoSmudge, function_hook_state_DoSmudge)
static void(__cdecl*original_DoSmudge)(tPipe_chunk **, int) = (void(__cdecl*)(tPipe_chunk **, int))0x00429b74;
CARM95_HOOK_FUNCTION(original_DoSmudge, DoSmudge)
void __cdecl DoSmudge(tPipe_chunk **pChunk, int pDir) {
    int i;
    int v;
    tU8 inc;
    br_model *model_ptr;
    tCar_spec *car;
    int group;
    LOG_TRACE("(%p, %d)", pChunk, pDir);

    (void)pChunk;
    (void)pDir;
    (void)i;
    (void)v;
    (void)inc;
    (void)model_ptr;
    (void)car;
    (void)group;

    if (function_hook_state_DoSmudge == HOOK_ENABLED) {
        assert(0 && "DoSmudge not implemented.");
        abort();
    } else {
        original_DoSmudge(pChunk, pDir);
    }
}

function_hook_state_t function_hook_state_ApplySmudge = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplySmudge, function_hook_state_ApplySmudge)
static void(__cdecl*original_ApplySmudge)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a3b1;
CARM95_HOOK_FUNCTION(original_ApplySmudge, ApplySmudge)
void __cdecl ApplySmudge(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplySmudge == HOOK_ENABLED) {
        assert(0 && "ApplySmudge not implemented.");
        abort();
    } else {
        original_ApplySmudge(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyPedestrian = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyPedestrian, function_hook_state_ApplyPedestrian)
static void(__cdecl*original_ApplyPedestrian)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a3d8;
CARM95_HOOK_FUNCTION(original_ApplyPedestrian, ApplyPedestrian)
void __cdecl ApplyPedestrian(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplyPedestrian == HOOK_ENABLED) {
        assert(0 && "ApplyPedestrian not implemented.");
        abort();
    } else {
        original_ApplyPedestrian(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplySpark = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplySpark, function_hook_state_ApplySpark)
static void(__cdecl*original_ApplySpark)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a472;
CARM95_HOOK_FUNCTION(original_ApplySpark, ApplySpark)
void __cdecl ApplySpark(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplySpark == HOOK_ENABLED) {
        assert(0 && "ApplySpark not implemented.");
        abort();
    } else {
        original_ApplySpark(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyShrapnel = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyShrapnel, function_hook_state_ApplyShrapnel)
static void(__cdecl*original_ApplyShrapnel)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a4b0;
CARM95_HOOK_FUNCTION(original_ApplyShrapnel, ApplyShrapnel)
void __cdecl ApplyShrapnel(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplyShrapnel == HOOK_ENABLED) {
        assert(0 && "ApplyShrapnel not implemented.");
        abort();
    } else {
        original_ApplyShrapnel(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyScreenWobble = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyScreenWobble, function_hook_state_ApplyScreenWobble)
static void(__cdecl*original_ApplyScreenWobble)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a4f8;
CARM95_HOOK_FUNCTION(original_ApplyScreenWobble, ApplyScreenWobble)
void __cdecl ApplyScreenWobble(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplyScreenWobble == HOOK_ENABLED) {
        assert(0 && "ApplyScreenWobble not implemented.");
        abort();
    } else {
        original_ApplyScreenWobble(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyGrooveStop = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyGrooveStop, function_hook_state_ApplyGrooveStop)
static void(__cdecl*original_ApplyGrooveStop)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a52d;
CARM95_HOOK_FUNCTION(original_ApplyGrooveStop, ApplyGrooveStop)
void __cdecl ApplyGrooveStop(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplyGrooveStop == HOOK_ENABLED) {
        assert(0 && "ApplyGrooveStop not implemented.");
        abort();
    } else {
        original_ApplyGrooveStop(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyNonCar = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyNonCar, function_hook_state_ApplyNonCar)
static void(__cdecl*original_ApplyNonCar)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a586;
CARM95_HOOK_FUNCTION(original_ApplyNonCar, ApplyNonCar)
void __cdecl ApplyNonCar(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplyNonCar == HOOK_ENABLED) {
        assert(0 && "ApplyNonCar not implemented.");
        abort();
    } else {
        original_ApplyNonCar(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplySmoke = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplySmoke, function_hook_state_ApplySmoke)
static void(__cdecl*original_ApplySmoke)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a5b9;
CARM95_HOOK_FUNCTION(original_ApplySmoke, ApplySmoke)
void __cdecl ApplySmoke(tPipe_chunk **pChunk) {
    br_vector3 pos;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)pos;

    if (function_hook_state_ApplySmoke == HOOK_ENABLED) {
        assert(0 && "ApplySmoke not implemented.");
        abort();
    } else {
        original_ApplySmoke(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplySmokeColumn = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplySmokeColumn, function_hook_state_ApplySmokeColumn)
static void(__cdecl*original_ApplySmokeColumn)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a651;
CARM95_HOOK_FUNCTION(original_ApplySmokeColumn, ApplySmokeColumn)
void __cdecl ApplySmokeColumn(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplySmokeColumn == HOOK_ENABLED) {
        assert(0 && "ApplySmokeColumn not implemented.");
        abort();
    } else {
        original_ApplySmokeColumn(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyFlame = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyFlame, function_hook_state_ApplyFlame)
static void(__cdecl*original_ApplyFlame)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a6f8;
CARM95_HOOK_FUNCTION(original_ApplyFlame, ApplyFlame)
void __cdecl ApplyFlame(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplyFlame == HOOK_ENABLED) {
        assert(0 && "ApplyFlame not implemented.");
        abort();
    } else {
        original_ApplyFlame(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplySplash = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplySplash, function_hook_state_ApplySplash)
static void(__cdecl*original_ApplySplash)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a752;
CARM95_HOOK_FUNCTION(original_ApplySplash, ApplySplash)
void __cdecl ApplySplash(tPipe_chunk **pChunk) {
    tCar_spec *c;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)c;

    if (function_hook_state_ApplySplash == HOOK_ENABLED) {
        assert(0 && "ApplySplash not implemented.");
        abort();
    } else {
        original_ApplySplash(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyOilSpill = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyOilSpill, function_hook_state_ApplyOilSpill)
static void(__cdecl*original_ApplyOilSpill)(tPipe_chunk **, tU32) = (void(__cdecl*)(tPipe_chunk **, tU32))0x0042a80d;
CARM95_HOOK_FUNCTION(original_ApplyOilSpill, ApplyOilSpill)
void __cdecl ApplyOilSpill(tPipe_chunk **pChunk, tU32 pStop_time) {
    LOG_TRACE("(%p, %u)", pChunk, pStop_time);

    (void)pChunk;
    (void)pStop_time;

    if (function_hook_state_ApplyOilSpill == HOOK_ENABLED) {
        assert(0 && "ApplyOilSpill not implemented.");
        abort();
    } else {
        original_ApplyOilSpill(pChunk, pStop_time);
    }
}

function_hook_state_t function_hook_state_ApplyFrameBoundary = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyFrameBoundary, function_hook_state_ApplyFrameBoundary)
static void(__cdecl*original_ApplyFrameBoundary)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a87c;
CARM95_HOOK_FUNCTION(original_ApplyFrameBoundary, ApplyFrameBoundary)
void __cdecl ApplyFrameBoundary(tPipe_chunk **pChunk) {
    tU32 result;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)result;

    if (function_hook_state_ApplyFrameBoundary == HOOK_ENABLED) {
        assert(0 && "ApplyFrameBoundary not implemented.");
        abort();
    } else {
        original_ApplyFrameBoundary(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplySound = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplySound, function_hook_state_ApplySound)
static void(__cdecl*original_ApplySound)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042a8b5;
CARM95_HOOK_FUNCTION(original_ApplySound, ApplySound)
void __cdecl ApplySound(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplySound == HOOK_ENABLED) {
        assert(0 && "ApplySound not implemented.");
        abort();
    } else {
        original_ApplySound(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyCar = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyCar, function_hook_state_ApplyCar)
static void(__cdecl*original_ApplyCar)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042aa59;
CARM95_HOOK_FUNCTION(original_ApplyCar, ApplyCar)
void __cdecl ApplyCar(tPipe_chunk **pChunk) {
    tCar_spec *car;
    br_vector3 com_offset_c;
    br_vector3 com_offset_w;
    br_scalar __block0___scale;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)car;
    (void)com_offset_c;
    (void)com_offset_w;
    (void)__block0___scale;

    if (function_hook_state_ApplyCar == HOOK_ENABLED) {
        assert(0 && "ApplyCar not implemented.");
        abort();
    } else {
        original_ApplyCar(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyDamage = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyDamage, function_hook_state_ApplyDamage)
static void(__cdecl*original_ApplyDamage)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042ae65;
CARM95_HOOK_FUNCTION(original_ApplyDamage, ApplyDamage)
void __cdecl ApplyDamage(tPipe_chunk **pChunk) {
    tCar_spec *car;
    int i;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)car;
    (void)i;

    if (function_hook_state_ApplyDamage == HOOK_ENABLED) {
        assert(0 && "ApplyDamage not implemented.");
        abort();
    } else {
        original_ApplyDamage(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplySpecial = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplySpecial, function_hook_state_ApplySpecial)
static void(__cdecl*original_ApplySpecial)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042af1e;
CARM95_HOOK_FUNCTION(original_ApplySpecial, ApplySpecial)
void __cdecl ApplySpecial(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplySpecial == HOOK_ENABLED) {
        assert(0 && "ApplySpecial not implemented.");
        abort();
    } else {
        original_ApplySpecial(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyPedGib = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyPedGib, function_hook_state_ApplyPedGib)
static void(__cdecl*original_ApplyPedGib)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042afc8;
CARM95_HOOK_FUNCTION(original_ApplyPedGib, ApplyPedGib)
void __cdecl ApplyPedGib(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplyPedGib == HOOK_ENABLED) {
        assert(0 && "ApplyPedGib not implemented.");
        abort();
    } else {
        original_ApplyPedGib(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyProxRay = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyProxRay, function_hook_state_ApplyProxRay)
static void(__cdecl*original_ApplyProxRay)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042b01f;
CARM95_HOOK_FUNCTION(original_ApplyProxRay, ApplyProxRay)
void __cdecl ApplyProxRay(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplyProxRay == HOOK_ENABLED) {
        assert(0 && "ApplyProxRay not implemented.");
        abort();
    } else {
        original_ApplyProxRay(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplySkidAdjustment = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplySkidAdjustment, function_hook_state_ApplySkidAdjustment)
static void(__cdecl*original_ApplySkidAdjustment)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042b068;
CARM95_HOOK_FUNCTION(original_ApplySkidAdjustment, ApplySkidAdjustment)
void __cdecl ApplySkidAdjustment(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_ApplySkidAdjustment == HOOK_ENABLED) {
        assert(0 && "ApplySkidAdjustment not implemented.");
        abort();
    } else {
        original_ApplySkidAdjustment(pChunk);
    }
}

function_hook_state_t function_hook_state_ApplyPipedSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ApplyPipedSession, function_hook_state_ApplyPipedSession)
static int(__cdecl*original_ApplyPipedSession)(tU8 **) = (int(__cdecl*)(tU8 **))0x00429cfb;
CARM95_HOOK_FUNCTION(original_ApplyPipedSession, ApplyPipedSession)
int __cdecl ApplyPipedSession(tU8 **pPtr) {
    int i;
    int return_value;
    tPipe_chunk *chunk_ptr;
    tPipe_chunk_type chunk_type;
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;
    (void)i;
    (void)return_value;
    (void)chunk_ptr;
    (void)chunk_type;

    if (function_hook_state_ApplyPipedSession == HOOK_ENABLED) {
        assert(0 && "ApplyPipedSession not implemented.");
        abort();
    } else {
        return original_ApplyPipedSession(pPtr);
    }
}

function_hook_state_t function_hook_state_MoveSessionPointerBackOne = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(MoveSessionPointerBackOne, function_hook_state_MoveSessionPointerBackOne)
static int(__cdecl*original_MoveSessionPointerBackOne)(tU8 **) = (int(__cdecl*)(tU8 **))0x0042b419;
CARM95_HOOK_FUNCTION(original_MoveSessionPointerBackOne, MoveSessionPointerBackOne)
int __cdecl MoveSessionPointerBackOne(tU8 **pPtr) {
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;

    if (function_hook_state_MoveSessionPointerBackOne == HOOK_ENABLED) {
        assert(0 && "MoveSessionPointerBackOne not implemented.");
        abort();
    } else {
        return original_MoveSessionPointerBackOne(pPtr);
    }
}

function_hook_state_t function_hook_state_MoveSessionPointerForwardOne = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(MoveSessionPointerForwardOne, function_hook_state_MoveSessionPointerForwardOne)
static int(__cdecl*original_MoveSessionPointerForwardOne)(tU8 **) = (int(__cdecl*)(tU8 **))0x0042bf9e;
CARM95_HOOK_FUNCTION(original_MoveSessionPointerForwardOne, MoveSessionPointerForwardOne)
int __cdecl MoveSessionPointerForwardOne(tU8 **pPtr) {
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;

    if (function_hook_state_MoveSessionPointerForwardOne == HOOK_ENABLED) {
        assert(0 && "MoveSessionPointerForwardOne not implemented.");
        abort();
    } else {
        return original_MoveSessionPointerForwardOne(pPtr);
    }
}

function_hook_state_t function_hook_state_FindPreviousChunk = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FindPreviousChunk, function_hook_state_FindPreviousChunk)
static tPipe_chunk *(__cdecl*original_FindPreviousChunk)(tU8 *, tPipe_chunk_type, tChunk_subject_index) = (tPipe_chunk *(__cdecl*)(tU8 *, tPipe_chunk_type, tChunk_subject_index))0x0042b492;
CARM95_HOOK_FUNCTION(original_FindPreviousChunk, FindPreviousChunk)
tPipe_chunk* __cdecl FindPreviousChunk(tU8 *pPtr, tPipe_chunk_type pType, tChunk_subject_index pIndex) {
    tU8 *ptr;
    int i;
    int reached_end;
    int chunk_counter;
    tPipe_chunk *mr_chunky;
    tChunk_subject_index masked_index;
    LOG_TRACE("(%p, %d, %u)", pPtr, pType, pIndex);

    (void)pPtr;
    (void)pType;
    (void)pIndex;
    (void)ptr;
    (void)i;
    (void)reached_end;
    (void)chunk_counter;
    (void)mr_chunky;
    (void)masked_index;

    if (function_hook_state_FindPreviousChunk == HOOK_ENABLED) {
        assert(0 && "FindPreviousChunk not implemented.");
        abort();
    } else {
        return original_FindPreviousChunk(pPtr, pType, pIndex);
    }
}

function_hook_state_t function_hook_state_UndoModelGeometry = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoModelGeometry, function_hook_state_UndoModelGeometry)
static void(__cdecl*original_UndoModelGeometry)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042b5ae;
CARM95_HOOK_FUNCTION(original_UndoModelGeometry, UndoModelGeometry)
void __cdecl UndoModelGeometry(tPipe_chunk **pChunk) {
    int i;
    br_model *model_ptr;
    tCar_spec *car;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)i;
    (void)model_ptr;
    (void)car;

    if (function_hook_state_UndoModelGeometry == HOOK_ENABLED) {
        assert(0 && "UndoModelGeometry not implemented.");
        abort();
    } else {
        original_UndoModelGeometry(pChunk);
    }
}

function_hook_state_t function_hook_state_UndoSmudge = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoSmudge, function_hook_state_UndoSmudge)
static void(__cdecl*original_UndoSmudge)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042b762;
CARM95_HOOK_FUNCTION(original_UndoSmudge, UndoSmudge)
void __cdecl UndoSmudge(tPipe_chunk **pChunk) {
    int i;
    br_model *model_ptr;
    tCar_spec *car;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)i;
    (void)model_ptr;
    (void)car;

    if (function_hook_state_UndoSmudge == HOOK_ENABLED) {
        assert(0 && "UndoSmudge not implemented.");
        abort();
    } else {
        original_UndoSmudge(pChunk);
    }
}

function_hook_state_t function_hook_state_UndoPedestrian = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoPedestrian, function_hook_state_UndoPedestrian)
static void(__cdecl*original_UndoPedestrian)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042b78c;
CARM95_HOOK_FUNCTION(original_UndoPedestrian, UndoPedestrian)
void __cdecl UndoPedestrian(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoPedestrian == HOOK_ENABLED) {
        assert(0 && "UndoPedestrian not implemented.");
        abort();
    } else {
        original_UndoPedestrian(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoFrameBoundary = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoFrameBoundary, function_hook_state_UndoFrameBoundary)
static void(__cdecl*original_UndoFrameBoundary)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042b7e9;
CARM95_HOOK_FUNCTION(original_UndoFrameBoundary, UndoFrameBoundary)
void __cdecl UndoFrameBoundary(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoFrameBoundary == HOOK_ENABLED) {
        assert(0 && "UndoFrameBoundary not implemented.");
        abort();
    } else {
        original_UndoFrameBoundary(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoCar = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoCar, function_hook_state_UndoCar)
static void(__cdecl*original_UndoCar)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042b817;
CARM95_HOOK_FUNCTION(original_UndoCar, UndoCar)
void __cdecl UndoCar(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoCar == HOOK_ENABLED) {
        assert(0 && "UndoCar not implemented.");
        abort();
    } else {
        original_UndoCar(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoSound = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoSound, function_hook_state_UndoSound)
static void(__cdecl*original_UndoSound)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042b874;
CARM95_HOOK_FUNCTION(original_UndoSound, UndoSound)
void __cdecl UndoSound(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_UndoSound == HOOK_ENABLED) {
        assert(0 && "UndoSound not implemented.");
        abort();
    } else {
        original_UndoSound(pChunk);
    }
}

function_hook_state_t function_hook_state_UndoDamage = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoDamage, function_hook_state_UndoDamage)
static void(__cdecl*original_UndoDamage)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042b88d;
CARM95_HOOK_FUNCTION(original_UndoDamage, UndoDamage)
void __cdecl UndoDamage(tPipe_chunk **pChunk) {
    tCar_spec *car;
    int i;
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;
    (void)car;
    (void)i;

    if (function_hook_state_UndoDamage == HOOK_ENABLED) {
        assert(0 && "UndoDamage not implemented.");
        abort();
    } else {
        original_UndoDamage(pChunk);
    }
}

function_hook_state_t function_hook_state_UndoSpecial = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoSpecial, function_hook_state_UndoSpecial)
static void(__cdecl*original_UndoSpecial)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042b94c;
CARM95_HOOK_FUNCTION(original_UndoSpecial, UndoSpecial)
void __cdecl UndoSpecial(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_UndoSpecial == HOOK_ENABLED) {
        assert(0 && "UndoSpecial not implemented.");
        abort();
    } else {
        original_UndoSpecial(pChunk);
    }
}

function_hook_state_t function_hook_state_UndoPedGib = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoPedGib, function_hook_state_UndoPedGib)
static void(__cdecl*original_UndoPedGib)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042b9f6;
CARM95_HOOK_FUNCTION(original_UndoPedGib, UndoPedGib)
void __cdecl UndoPedGib(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoPedGib == HOOK_ENABLED) {
        assert(0 && "UndoPedGib not implemented.");
        abort();
    } else {
        original_UndoPedGib(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoSpark = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoSpark, function_hook_state_UndoSpark)
static void(__cdecl*original_UndoSpark)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042ba42;
CARM95_HOOK_FUNCTION(original_UndoSpark, UndoSpark)
void __cdecl UndoSpark(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoSpark == HOOK_ENABLED) {
        assert(0 && "UndoSpark not implemented.");
        abort();
    } else {
        original_UndoSpark(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoShrapnel = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoShrapnel, function_hook_state_UndoShrapnel)
static void(__cdecl*original_UndoShrapnel)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042ba8e;
CARM95_HOOK_FUNCTION(original_UndoShrapnel, UndoShrapnel)
void __cdecl UndoShrapnel(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoShrapnel == HOOK_ENABLED) {
        assert(0 && "UndoShrapnel not implemented.");
        abort();
    } else {
        original_UndoShrapnel(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoScreenWobble = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoScreenWobble, function_hook_state_UndoScreenWobble)
static void(__cdecl*original_UndoScreenWobble)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bada;
CARM95_HOOK_FUNCTION(original_UndoScreenWobble, UndoScreenWobble)
void __cdecl UndoScreenWobble(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoScreenWobble == HOOK_ENABLED) {
        assert(0 && "UndoScreenWobble not implemented.");
        abort();
    } else {
        original_UndoScreenWobble(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoGrooveStop = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoGrooveStop, function_hook_state_UndoGrooveStop)
static void(__cdecl*original_UndoGrooveStop)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bb37;
CARM95_HOOK_FUNCTION(original_UndoGrooveStop, UndoGrooveStop)
void __cdecl UndoGrooveStop(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoGrooveStop == HOOK_ENABLED) {
        assert(0 && "UndoGrooveStop not implemented.");
        abort();
    } else {
        original_UndoGrooveStop(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoNonCar = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoNonCar, function_hook_state_UndoNonCar)
static void(__cdecl*original_UndoNonCar)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bb83;
CARM95_HOOK_FUNCTION(original_UndoNonCar, UndoNonCar)
void __cdecl UndoNonCar(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoNonCar == HOOK_ENABLED) {
        assert(0 && "UndoNonCar not implemented.");
        abort();
    } else {
        original_UndoNonCar(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoSmoke = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoSmoke, function_hook_state_UndoSmoke)
static void(__cdecl*original_UndoSmoke)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bbcf;
CARM95_HOOK_FUNCTION(original_UndoSmoke, UndoSmoke)
void __cdecl UndoSmoke(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoSmoke == HOOK_ENABLED) {
        assert(0 && "UndoSmoke not implemented.");
        abort();
    } else {
        original_UndoSmoke(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoSmokeColumn = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoSmokeColumn, function_hook_state_UndoSmokeColumn)
static void(__cdecl*original_UndoSmokeColumn)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bc1b;
CARM95_HOOK_FUNCTION(original_UndoSmokeColumn, UndoSmokeColumn)
void __cdecl UndoSmokeColumn(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoSmokeColumn == HOOK_ENABLED) {
        assert(0 && "UndoSmokeColumn not implemented.");
        abort();
    } else {
        original_UndoSmokeColumn(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoFlame = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoFlame, function_hook_state_UndoFlame)
static void(__cdecl*original_UndoFlame)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bc3b;
CARM95_HOOK_FUNCTION(original_UndoFlame, UndoFlame)
void __cdecl UndoFlame(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;

    if (function_hook_state_UndoFlame == HOOK_ENABLED) {
        assert(0 && "UndoFlame not implemented.");
        abort();
    } else {
        original_UndoFlame(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoSplash = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoSplash, function_hook_state_UndoSplash)
static void(__cdecl*original_UndoSplash)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bc52;
CARM95_HOOK_FUNCTION(original_UndoSplash, UndoSplash)
void __cdecl UndoSplash(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoSplash == HOOK_ENABLED) {
        assert(0 && "UndoSplash not implemented.");
        abort();
    } else {
        original_UndoSplash(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoOilSpill = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoOilSpill, function_hook_state_UndoOilSpill)
static void(__cdecl*original_UndoOilSpill)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bd0b;
CARM95_HOOK_FUNCTION(original_UndoOilSpill, UndoOilSpill)
void __cdecl UndoOilSpill(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    tPipe_chunk *temp_prev_chunk;
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;
    (void)temp_prev_chunk;

    if (function_hook_state_UndoOilSpill == HOOK_ENABLED) {
        assert(0 && "UndoOilSpill not implemented.");
        abort();
    } else {
        original_UndoOilSpill(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoProxRay = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoProxRay, function_hook_state_UndoProxRay)
static void(__cdecl*original_UndoProxRay)(tPipe_chunk **) = (void(__cdecl*)(tPipe_chunk **))0x0042bd60;
CARM95_HOOK_FUNCTION(original_UndoProxRay, UndoProxRay)
void __cdecl UndoProxRay(tPipe_chunk **pChunk) {
    LOG_TRACE("(%p)", pChunk);

    (void)pChunk;

    if (function_hook_state_UndoProxRay == HOOK_ENABLED) {
        assert(0 && "UndoProxRay not implemented.");
        abort();
    } else {
        original_UndoProxRay(pChunk);
    }
}

function_hook_state_t function_hook_state_UndoSkidAdjustment = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoSkidAdjustment, function_hook_state_UndoSkidAdjustment)
static void(__cdecl*original_UndoSkidAdjustment)(tPipe_chunk **, tPipe_chunk *) = (void(__cdecl*)(tPipe_chunk **, tPipe_chunk *))0x0042bd77;
CARM95_HOOK_FUNCTION(original_UndoSkidAdjustment, UndoSkidAdjustment)
void __cdecl UndoSkidAdjustment(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk) {
    LOG_TRACE("(%p, %p)", pChunk, pPrev_chunk);

    (void)pChunk;
    (void)pPrev_chunk;

    if (function_hook_state_UndoSkidAdjustment == HOOK_ENABLED) {
        assert(0 && "UndoSkidAdjustment not implemented.");
        abort();
    } else {
        original_UndoSkidAdjustment(pChunk, pPrev_chunk);
    }
}

function_hook_state_t function_hook_state_UndoPipedSession = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(UndoPipedSession, function_hook_state_UndoPipedSession)
static int(__cdecl*original_UndoPipedSession)(tU8 **) = (int(__cdecl*)(tU8 **))0x0042b0a6;
CARM95_HOOK_FUNCTION(original_UndoPipedSession, UndoPipedSession)
int __cdecl UndoPipedSession(tU8 **pPtr) {
    tPipe_chunk *chunk_ptr;
    tPipe_chunk *prev_chunk;
    tU8 *temp_ptr;
    tU8 *pushed_end_of_session;
    int i;
    tPipe_chunk_type chunk_type;
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;
    (void)chunk_ptr;
    (void)prev_chunk;
    (void)temp_ptr;
    (void)pushed_end_of_session;
    (void)i;
    (void)chunk_type;

    if (function_hook_state_UndoPipedSession == HOOK_ENABLED) {
        assert(0 && "UndoPipedSession not implemented.");
        abort();
    } else {
        return original_UndoPipedSession(pPtr);
    }
}

function_hook_state_t function_hook_state_FindPrevFrameTime = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(FindPrevFrameTime, function_hook_state_FindPrevFrameTime)
static tU32(__cdecl*original_FindPrevFrameTime)(tU8 *) = (tU32(__cdecl*)(tU8 *))0x0042bdd2;
CARM95_HOOK_FUNCTION(original_FindPrevFrameTime, FindPrevFrameTime)
tU32 __cdecl FindPrevFrameTime(tU8 *pPtr) {
    tU8 *temp_ptr;
    LOG_TRACE("(%p)", pPtr);

    (void)pPtr;
    (void)temp_ptr;

    if (function_hook_state_FindPrevFrameTime == HOOK_ENABLED) {
        assert(0 && "FindPrevFrameTime not implemented.");
        abort();
    } else {
        return original_FindPrevFrameTime(pPtr);
    }
}

function_hook_state_t function_hook_state_ScanBuffer = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ScanBuffer, function_hook_state_ScanBuffer)
static void(__cdecl*original_ScanBuffer)(tU8 **, tPipe_chunk_type, tU32, int(**)(tPipe_chunk *, int, tU32), int(**)(tU32)) = (void(__cdecl*)(tU8 **, tPipe_chunk_type, tU32, int(**)(tPipe_chunk *, int, tU32), int(**)(tU32)))0x0042be18;
CARM95_HOOK_FUNCTION(original_ScanBuffer, ScanBuffer)
void __cdecl ScanBuffer(tU8 **pPtr, tPipe_chunk_type pType, tU32 pDefault_time, int(**pCall_back)(tPipe_chunk *, int, tU32), int(**pTime_check)(tU32)) {
    tPipe_chunk *chunk_ptr;
    tU32 the_time;
    LOG_TRACE("(%p, %d, %u, %p, %p)", pPtr, pType, pDefault_time, pCall_back, pTime_check);

    (void)pPtr;
    (void)pType;
    (void)pDefault_time;
    (void)pCall_back;
    (void)pTime_check;
    (void)chunk_ptr;
    (void)the_time;

    if (function_hook_state_ScanBuffer == HOOK_ENABLED) {
        assert(0 && "ScanBuffer not implemented.");
        abort();
    } else {
        original_ScanBuffer(pPtr, pType, pDefault_time, pCall_back, pTime_check);
    }
}

function_hook_state_t function_hook_state_CheckSound = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(CheckSound, function_hook_state_CheckSound)
static int(__cdecl*original_CheckSound)(tPipe_chunk *, int, tU32) = (int(__cdecl*)(tPipe_chunk *, int, tU32))0x0042c00a;
CARM95_HOOK_FUNCTION(original_CheckSound, CheckSound)
int __cdecl CheckSound(tPipe_chunk *pChunk_ptr, int pChunk_count, tU32 pTime) {
    int i;
    int sound_length;
    tPipe_chunk *temp_ptr;
    LOG_TRACE("(%p, %d, %u)", pChunk_ptr, pChunk_count, pTime);

    (void)pChunk_ptr;
    (void)pChunk_count;
    (void)pTime;
    (void)i;
    (void)sound_length;
    (void)temp_ptr;

    if (function_hook_state_CheckSound == HOOK_ENABLED) {
        assert(0 && "CheckSound not implemented.");
        abort();
    } else {
        return original_CheckSound(pChunk_ptr, pChunk_count, pTime);
    }
}

function_hook_state_t function_hook_state_SoundTimeout = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(SoundTimeout, function_hook_state_SoundTimeout)
static int(__cdecl*original_SoundTimeout)(tU32) = (int(__cdecl*)(tU32))0x0042c132;
CARM95_HOOK_FUNCTION(original_SoundTimeout, SoundTimeout)
int __cdecl SoundTimeout(tU32 pTime) {
    LOG_TRACE("(%u)", pTime);

    (void)pTime;

    if (function_hook_state_SoundTimeout == HOOK_ENABLED) {
        assert(0 && "SoundTimeout not implemented.");
        abort();
    } else {
        return original_SoundTimeout(pTime);
    }
}

function_hook_state_t function_hook_state_ScanAndPlaySoundsToBe = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ScanAndPlaySoundsToBe, function_hook_state_ScanAndPlaySoundsToBe)
static void(__cdecl*original_ScanAndPlaySoundsToBe)(tU8 *, tU32, tU32) = (void(__cdecl*)(tU8 *, tU32, tU32))0x0042c06e;
CARM95_HOOK_FUNCTION(original_ScanAndPlaySoundsToBe, ScanAndPlaySoundsToBe)
void __cdecl ScanAndPlaySoundsToBe(tU8 *pPtr, tU32 pOldest_time, tU32 pYoungest_time) {
    tU8 *temp_ptr;
    LOG_TRACE("(%p, %u, %u)", pPtr, pOldest_time, pYoungest_time);

    (void)pPtr;
    (void)pOldest_time;
    (void)pYoungest_time;
    (void)temp_ptr;

    if (function_hook_state_ScanAndPlaySoundsToBe == HOOK_ENABLED) {
        assert(0 && "ScanAndPlaySoundsToBe not implemented.");
        abort();
    } else {
        original_ScanAndPlaySoundsToBe(pPtr, pOldest_time, pYoungest_time);
    }
}

function_hook_state_t function_hook_state_CheckCar = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(CheckCar, function_hook_state_CheckCar)
static int(__cdecl*original_CheckCar)(tPipe_chunk *, int, tU32) = (int(__cdecl*)(tPipe_chunk *, int, tU32))0x0042c327;
CARM95_HOOK_FUNCTION(original_CheckCar, CheckCar)
int __cdecl CheckCar(tPipe_chunk *pChunk_ptr, int pChunk_count, tU32 pTime) {
    int i;
    tCar_spec *car;
    br_vector3 com_offset_c;
    br_vector3 com_offset_w;
    br_vector3 difference;
    tPipe_chunk *temp_ptr;
    LOG_TRACE("(%p, %d, %u)", pChunk_ptr, pChunk_count, pTime);

    (void)pChunk_ptr;
    (void)pChunk_count;
    (void)pTime;
    (void)i;
    (void)car;
    (void)com_offset_c;
    (void)com_offset_w;
    (void)difference;
    (void)temp_ptr;

    if (function_hook_state_CheckCar == HOOK_ENABLED) {
        assert(0 && "CheckCar not implemented.");
        abort();
    } else {
        return original_CheckCar(pChunk_ptr, pChunk_count, pTime);
    }
}

function_hook_state_t function_hook_state_CarTimeout = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(CarTimeout, function_hook_state_CarTimeout)
static int(__cdecl*original_CarTimeout)(tU32) = (int(__cdecl*)(tU32))0x0042c5b2;
CARM95_HOOK_FUNCTION(original_CarTimeout, CarTimeout)
int __cdecl CarTimeout(tU32 pTime) {
    LOG_TRACE("(%u)", pTime);

    (void)pTime;

    if (function_hook_state_CarTimeout == HOOK_ENABLED) {
        assert(0 && "CarTimeout not implemented.");
        abort();
    } else {
        return original_CarTimeout(pTime);
    }
}

function_hook_state_t function_hook_state_ScanCarsPositions = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ScanCarsPositions, function_hook_state_ScanCarsPositions)
static void(__cdecl*original_ScanCarsPositions)(tCar_spec *, br_vector3 *, br_scalar, tU32, tU32, br_vector3 *, tU32 *) = (void(__cdecl*)(tCar_spec *, br_vector3 *, br_scalar, tU32, tU32, br_vector3 *, tU32 *))0x0042c171;
CARM95_HOOK_FUNCTION(original_ScanCarsPositions, ScanCarsPositions)
void __cdecl ScanCarsPositions(tCar_spec *pCar, br_vector3 *pSource_pos, br_scalar pMax_distance_sqr, tU32 pOffset_time, tU32 pTime_period, br_vector3 *pCar_pos, tU32 *pTime_returned) {
    tU8 *temp_ptr;
    LOG_TRACE("(%p, %p, %f, %u, %u, %p, %p)", pCar, pSource_pos, pMax_distance_sqr, pOffset_time, pTime_period, pCar_pos, pTime_returned);

    (void)pCar;
    (void)pSource_pos;
    (void)pMax_distance_sqr;
    (void)pOffset_time;
    (void)pTime_period;
    (void)pCar_pos;
    (void)pTime_returned;
    (void)temp_ptr;

    if (function_hook_state_ScanCarsPositions == HOOK_ENABLED) {
        assert(0 && "ScanCarsPositions not implemented.");
        abort();
    } else {
        original_ScanCarsPositions(pCar, pSource_pos, pMax_distance_sqr, pOffset_time, pTime_period, pCar_pos, pTime_returned);
    }
}

function_hook_state_t function_hook_state_CheckIncident = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(CheckIncident, function_hook_state_CheckIncident)
static int(__cdecl*original_CheckIncident)(tPipe_chunk *, int, tU32) = (int(__cdecl*)(tPipe_chunk *, int, tU32))0x0042c90d;
CARM95_HOOK_FUNCTION(original_CheckIncident, CheckIncident)
int __cdecl CheckIncident(tPipe_chunk *pChunk_ptr, int pChunk_count, tU32 pTime) {
    LOG_TRACE("(%p, %d, %u)", pChunk_ptr, pChunk_count, pTime);

    (void)pChunk_ptr;
    (void)pChunk_count;
    (void)pTime;

    if (function_hook_state_CheckIncident == HOOK_ENABLED) {
        assert(0 && "CheckIncident not implemented.");
        abort();
    } else {
        return original_CheckIncident(pChunk_ptr, pChunk_count, pTime);
    }
}

function_hook_state_t function_hook_state_GetNextIncident = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(GetNextIncident, function_hook_state_GetNextIncident)
static int(__cdecl*original_GetNextIncident)(tU32, tIncident_type *, float *, tIncident_info *, tU32 *) = (int(__cdecl*)(tU32, tIncident_type *, float *, tIncident_info *, tU32 *))0x0042c6a3;
CARM95_HOOK_FUNCTION(original_GetNextIncident, GetNextIncident)
int __cdecl GetNextIncident(tU32 pOffset_time, tIncident_type *pIncident_type, float *pSeverity, tIncident_info *pInfo, tU32 *pTime_away) {
    tU8 *temp_ptr;
    LOG_TRACE("(%u, %p, %p, %p, %p)", pOffset_time, pIncident_type, pSeverity, pInfo, pTime_away);

    (void)pOffset_time;
    (void)pIncident_type;
    (void)pSeverity;
    (void)pInfo;
    (void)pTime_away;
    (void)temp_ptr;

    if (function_hook_state_GetNextIncident == HOOK_ENABLED) {
        assert(0 && "GetNextIncident not implemented.");
        abort();
    } else {
        return original_GetNextIncident(pOffset_time, pIncident_type, pSeverity, pInfo, pTime_away);
    }
}

function_hook_state_t function_hook_state_GetARStartTime = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(GetARStartTime, function_hook_state_GetARStartTime)
static tU32(__cdecl*original_GetARStartTime)() = (tU32(__cdecl*)())0x0042ca0e;
CARM95_HOOK_FUNCTION(original_GetARStartTime, GetARStartTime)
tU32 __cdecl GetARStartTime() {
    tU8 *temp_ptr;
    LOG_TRACE("()");

    (void)temp_ptr;

    if (function_hook_state_GetARStartTime == HOOK_ENABLED) {
        assert(0 && "GetARStartTime not implemented.");
        abort();
    } else {
        return original_GetARStartTime();
    }
}

