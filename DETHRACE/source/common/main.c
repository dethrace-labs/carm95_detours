#include "main.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include "carm95_webserver.h"

#include <assert.h>

function_hook_state_t function_hook_state_QuitGame = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(QuitGame, function_hook_state_QuitGame)
static void(__cdecl*original_QuitGame)() = (void(__cdecl*)())0x004a9ea0;
CARM95_HOOK_FUNCTION(original_QuitGame, QuitGame)
void __cdecl QuitGame() {
    LOG_TRACE("()");


    if (function_hook_state_QuitGame == HOOK_ENABLED) {
        assert(0 && "QuitGame not implemented.");
        abort();
    } else {
        original_QuitGame();
    }
}

function_hook_state_t function_hook_state_TrackCount = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(TrackCount, function_hook_state_TrackCount)
tU32 TrackCount(br_actor *pActor, tU32 *pCount) {
    unsigned int x;
    unsigned int z;
    int ad;
    float e;
    LOG_TRACE("(%p, %p)", pActor, pCount);

    (void)pActor;
    (void)pCount;
    (void)x;
    (void)z;
    (void)ad;
    (void)e;

    if (function_hook_state_TrackCount == HOOK_ENABLED) {
        assert(0 && "TrackCount not implemented.");
        abort();
    } else {
        NOT_IMPLEMENTED();
    }
}

function_hook_state_t function_hook_state_CheckNumberOfTracks = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(CheckNumberOfTracks, function_hook_state_CheckNumberOfTracks)
void CheckNumberOfTracks() {
    tU32 track_count;
    LOG_TRACE("()");

    (void)track_count;

    if (function_hook_state_CheckNumberOfTracks == HOOK_ENABLED) {
        assert(0 && "CheckNumberOfTracks not implemented.");
        abort();
    } else {
        NOT_IMPLEMENTED();
    }
}

function_hook_state_t function_hook_state_ServiceTheGame = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ServiceTheGame, function_hook_state_ServiceTheGame)
static void(__cdecl*original_ServiceTheGame)(int) = (void(__cdecl*)(int))0x004a9f29;
CARM95_HOOK_FUNCTION(original_ServiceTheGame, ServiceTheGame)
void __cdecl ServiceTheGame(int pRacing) {
    LOG_TRACE("(%d)", pRacing);

    (void)pRacing;

    if (function_hook_state_ServiceTheGame == HOOK_ENABLED) {
        assert(0 && "ServiceTheGame not implemented.");
        abort();
    } else {
        original_ServiceTheGame(pRacing);
    }
}

function_hook_state_t function_hook_state_ServiceGame = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ServiceGame, function_hook_state_ServiceGame)
static void(__cdecl*original_ServiceGame)() = (void(__cdecl*)())0x004a9fe4;
CARM95_HOOK_FUNCTION(original_ServiceGame, ServiceGame)
void __cdecl ServiceGame() {
    LOG_TRACE("()");


    if (function_hook_state_ServiceGame == HOOK_ENABLED) {
        assert(0 && "ServiceGame not implemented.");
        abort();
    } else {
        original_ServiceGame();
    }
}

function_hook_state_t function_hook_state_ServiceGameInRace = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(ServiceGameInRace, function_hook_state_ServiceGameInRace)
static void(__cdecl*original_ServiceGameInRace)() = (void(__cdecl*)())0x004a9ff9;
CARM95_HOOK_FUNCTION(original_ServiceGameInRace, ServiceGameInRace)
void __cdecl ServiceGameInRace() {
    LOG_TRACE("()");


    if (function_hook_state_ServiceGameInRace == HOOK_ENABLED) {
        assert(0 && "ServiceGameInRace not implemented.");
        abort();
    } else {
        original_ServiceGameInRace();
    }
}

function_hook_state_t function_hook_state_GameMain = HOOK_UNAVAILABLE;
CARM95_WEBSERVER_STATE(GameMain, function_hook_state_GameMain)
static void(__cdecl*original_GameMain)(int, char **) = (void(__cdecl*)(int, char **))0x004aa013;
CARM95_HOOK_FUNCTION(original_GameMain, GameMain)
void __cdecl GameMain(int pArgc, char **pArgv) {
    tPath_name CD_dir;
    LOG_TRACE("(%d, %p)", pArgc, pArgv);

    (void)pArgc;
    (void)pArgv;
    (void)CD_dir;

    if (function_hook_state_GameMain == HOOK_ENABLED) {
        assert(0 && "GameMain not implemented.");
        abort();
    } else {
        original_GameMain(pArgc, pArgv);
    }
}

