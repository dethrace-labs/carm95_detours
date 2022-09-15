#include "input.h"

#include "harness/trace.h"

#include "carm95_hooks.h"

#include <stdio.h>
int * hookvar_gEdge_trigger_mode  = (void*)0x00514c70;
tU32 * hookvar_gLast_poll_keys  = (void*)0x00514c74;
int * hookvar_gInsert_mode  = (void*)0x00514c78;
int(* hookvar_gGo_ahead_keys )[3] = (void*)0x00514c80;
tJoy_array * hookvar_gJoy_array  = (void*)0x005505f4;
tKey_array * hookvar_gKey_array  = (void*)0x0053a250;
int * hookvar_gKey_poll_counter  = (void*)0x0053a248;
tRolling_letter ** hookvar_gRolling_letters  = (void*)0x0053a1f8;
int * hookvar_gCurrent_cursor  = (void*)0x0053a440;
int * hookvar_gCurrent_position  = (void*)0x0053a4c0;
int(* hookvar_gLetter_x_coords )[15] = (void*)0x0053a200;
int * hookvar_gVisible_length  = (void*)0x0053a240;
int(* hookvar_gLetter_y_coords )[15] = (void*)0x0053a1b8;
#if 0
int * hookvar_gThe_key ;
#endif
tU32 * hookvar_gLast_key_down_time  = (void*)0x0053a444;
int * hookvar_gThe_length  = (void*)0x0053a1f4;
tU32 * hookvar_gLast_roll  = (void*)0x0053a448;
int * hookvar_gLast_key_down  = (void*)0x0053a244;
int(* hookvar_gKey_mapping )[67] = (void*)0x005507e0;
char(* hookvar_gCurrent_typing )[110] = (void*)0x0053a450;

static void(*original_SetJoystickArrays)(int *, int, ...) = (void(*)(int *, int, ...))0x00471750;
CARM95_HOOK_FUNCTION(original_SetJoystickArrays, SetJoystickArrays)
void SetJoystickArrays(int *pKeys, int pMark) {
    int i;
    tS32 joyX;
    tS32 joyY;
    static tS32 old_joy1X;
    static tS32 old_joy1Y;
    static tS32 old_joy2X;
    static tS32 old_joy2Y;
    LOG_TRACE("(%p, %d)", pKeys, pMark);

    (void)pKeys;
    (void)pMark;
    (void)i;
    (void)joyX;
    (void)joyY;
    (void)old_joy1X;
    (void)old_joy1Y;
    (void)old_joy2X;
    (void)old_joy2Y;

    original_SetJoystickArrays(pKeys, pMark);
}

static void(*original_PollKeys)() = (void(*)())0x00471bbf;
CARM95_HOOK_FUNCTION(original_PollKeys, PollKeys)
void PollKeys() {
    int i;
    LOG_TRACE("()");

    (void)i;

    original_PollKeys();
}

static void(*original_CyclePollKeys)() = (void(*)())0x00471c03;
CARM95_HOOK_FUNCTION(original_CyclePollKeys, CyclePollKeys)
void CyclePollKeys() {
    int i;
    LOG_TRACE("()");

    (void)i;

    original_CyclePollKeys();
}

static void(*original_ResetPollKeys)() = (void(*)())0x00471c75;
CARM95_HOOK_FUNCTION(original_ResetPollKeys, ResetPollKeys)
void ResetPollKeys() {
    int i;
    LOG_TRACE("()");

    (void)i;

    original_ResetPollKeys();
}

static void(*original_CheckKeysForMouldiness)() = (void(*)())0x00471cdb;
CARM95_HOOK_FUNCTION(original_CheckKeysForMouldiness, CheckKeysForMouldiness)
void CheckKeysForMouldiness() {
    LOG_TRACE("()");


    original_CheckKeysForMouldiness();
}

static int(*original_EitherMouseButtonDown)() = (int(*)())0x00471d0b;
CARM95_HOOK_FUNCTION(original_EitherMouseButtonDown, EitherMouseButtonDown)
int EitherMouseButtonDown() {
    int but_1;
    int but_2;
    LOG_TRACE("()");

    (void)but_1;
    (void)but_2;

    return original_EitherMouseButtonDown();
}

static tKey_down_result(*original_PDKeyDown2)(int, ...) = (tKey_down_result(*)(int, ...))0x00471d4e;
CARM95_HOOK_FUNCTION(original_PDKeyDown2, PDKeyDown2)
tKey_down_result PDKeyDown2(int pKey_index) {
    tU32 the_time;
    LOG_TRACE("(%d)", pKey_index);

    (void)pKey_index;
    (void)the_time;

    return original_PDKeyDown2(pKey_index);
}

static int(*original_PDKeyDown)(int, ...) = (int(*)(int, ...))0x00471e2d;
CARM95_HOOK_FUNCTION(original_PDKeyDown, PDKeyDown)
int PDKeyDown(int pKey_index) {
    tKey_down_result result;
    LOG_TRACE("(%d)", pKey_index);

    (void)pKey_index;
    (void)result;

    return original_PDKeyDown(pKey_index);
}

static int(*original_PDKeyDown3)(int, ...) = (int(*)(int, ...))0x00471ea6;
CARM95_HOOK_FUNCTION(original_PDKeyDown3, PDKeyDown3)
int PDKeyDown3(int pKey_index) {
    int last_key_down_time;
    int last_key_down;
    tKey_down_result result;
    LOG_TRACE("(%d)", pKey_index);

    (void)pKey_index;
    (void)last_key_down_time;
    (void)last_key_down;
    (void)result;

    return original_PDKeyDown3(pKey_index);
}

static int(*original_PDAnyKeyDown)() = (int(*)())0x00471f08;
CARM95_HOOK_FUNCTION(original_PDAnyKeyDown, PDAnyKeyDown)
int PDAnyKeyDown() {
    int i;
    tKey_down_result result;
    LOG_TRACE("()");

    (void)i;
    (void)result;

    return original_PDAnyKeyDown();
}

static int(*original_AnyKeyDown)() = (int(*)())0x00471fe4;
CARM95_HOOK_FUNCTION(original_AnyKeyDown, AnyKeyDown)
int AnyKeyDown() {
    int the_key;
    LOG_TRACE("()");

    (void)the_key;

    return original_AnyKeyDown();
}

static tU32 *(*original_KevKeyService)() = (tU32 *(*)())0x0047202c;
CARM95_HOOK_FUNCTION(original_KevKeyService, KevKeyService)
tU32* KevKeyService() {
    static tU32 sum;
    static tU32 code;
    static tU32 code2;
    static int last_key;
    static int last_single_key;
    static tU32 last_time;
    static tU32 return_val[2];
    tU32 keys;
    LOG_TRACE("()");

    (void)sum;
    (void)code;
    (void)code2;
    (void)last_key;
    (void)last_single_key;
    (void)last_time;
    (void)return_val;
    (void)keys;

    return original_KevKeyService();
}

static int(*original_OldKeyIsDown)(int, ...) = (int(*)(int, ...))0x004721fb;
CARM95_HOOK_FUNCTION(original_OldKeyIsDown, OldKeyIsDown)
int OldKeyIsDown(int pKey_index) {
    int i;
    LOG_TRACE("(%d)", pKey_index);

    (void)pKey_index;
    (void)i;

    return original_OldKeyIsDown(pKey_index);
}

static int(*original_KeyIsDown)(int, ...) = (int(*)(int, ...))0x00472293;
CARM95_HOOK_FUNCTION(original_KeyIsDown, KeyIsDown)
int KeyIsDown(int pKey_index) {
    int i;
    LOG_TRACE("(%d)", pKey_index);

    (void)pKey_index;
    (void)i;

    return original_KeyIsDown(pKey_index);
}

static void(*original_WaitForNoKeys)() = (void(*)())0x0047232b;
CARM95_HOOK_FUNCTION(original_WaitForNoKeys, WaitForNoKeys)
void WaitForNoKeys() {
    LOG_TRACE("()");


    original_WaitForNoKeys();
}

static void(*original_WaitForAKey)() = (void(*)())0x0047235a;
CARM95_HOOK_FUNCTION(original_WaitForAKey, WaitForAKey)
void WaitForAKey() {
    LOG_TRACE("()");


    original_WaitForAKey();
}

static int(*original_CmdKeyDown)(int, int, ...) = (int(*)(int, int, ...))0x0047238e;
CARM95_HOOK_FUNCTION(original_CmdKeyDown, CmdKeyDown)
int CmdKeyDown(int pFKey_ID, int pCmd_key_ID) {
    LOG_TRACE("(%d, %d)", pFKey_ID, pCmd_key_ID);

    (void)pFKey_ID;
    (void)pCmd_key_ID;

    return original_CmdKeyDown(pFKey_ID, pCmd_key_ID);
}

static void(*original_GetMousePosition)(int *, int *, ...) = (void(*)(int *, int *, ...))0x004723e4;
CARM95_HOOK_FUNCTION(original_GetMousePosition, GetMousePosition)
void GetMousePosition(int *pX_coord, int *pY_coord) {
    int x_left_margin;
    int x_right_margin;
    int y_top_margin;
    int y_bottom_margin;
    LOG_TRACE("(%p, %p)", pX_coord, pY_coord);

    (void)pX_coord;
    (void)pY_coord;
    (void)x_left_margin;
    (void)x_right_margin;
    (void)y_top_margin;
    (void)y_bottom_margin;

    original_GetMousePosition(pX_coord, pY_coord);
}

static void(*original_InitRollingLetters)() = (void(*)())0x004724d1;
CARM95_HOOK_FUNCTION(original_InitRollingLetters, InitRollingLetters)
void InitRollingLetters() {
    int i;
    LOG_TRACE("()");

    (void)i;

    original_InitRollingLetters();
}

static void(*original_EndRollingLetters)() = (void(*)())0x00472543;
CARM95_HOOK_FUNCTION(original_EndRollingLetters, EndRollingLetters)
void EndRollingLetters() {
    LOG_TRACE("()");


    original_EndRollingLetters();
}

static int(*original_AddRollingLetter)(char, int, int, tRolling_type, ...) = (int(*)(char, int, int, tRolling_type, ...))0x0047255c;
CARM95_HOOK_FUNCTION(original_AddRollingLetter, AddRollingLetter)
int AddRollingLetter(char pChar, int pX, int pY, tRolling_type rolling_type) {
    tRolling_letter *let;
    int i;
    int number_of_letters;
    LOG_TRACE("('%c', %d, %d, %d)", pChar, pX, pY, rolling_type);

    (void)pChar;
    (void)pX;
    (void)pY;
    (void)rolling_type;
    (void)let;
    (void)i;
    (void)number_of_letters;

    return original_AddRollingLetter(pChar, pX, pY, rolling_type);
}

static void(*original_AddRollingString)(char *, int, int, tRolling_type, ...) = (void(*)(char *, int, int, tRolling_type, ...))0x004726c3;
CARM95_HOOK_FUNCTION(original_AddRollingString, AddRollingString)
void AddRollingString(char *pStr, int pX, int pY, tRolling_type rolling_type) {
    int i;
    LOG_TRACE("(\"%s\", %d, %d, %d)", pStr, pX, pY, rolling_type);

    (void)pStr;
    (void)pX;
    (void)pY;
    (void)rolling_type;
    (void)i;

    original_AddRollingString(pStr, pX, pY, rolling_type);
}

static void(*original_AddRollingNumber)(tU32, int, int, int, ...) = (void(*)(tU32, int, int, int, ...))0x00472729;
CARM95_HOOK_FUNCTION(original_AddRollingNumber, AddRollingNumber)
void AddRollingNumber(tU32 pNumber, int pWidth, int pX, int pY) {
    char the_string[32];
    LOG_TRACE("(%u, %d, %d, %d)", pNumber, pWidth, pX, pY);

    (void)pNumber;
    (void)pWidth;
    (void)pX;
    (void)pY;
    (void)the_string;

    original_AddRollingNumber(pNumber, pWidth, pX, pY);
}

static void(*original_RollLettersIn)() = (void(*)())0x00472766;
CARM95_HOOK_FUNCTION(original_RollLettersIn, RollLettersIn)
void RollLettersIn() {
    tU32 new_time;
    tU32 period;
    tRolling_letter *let;
    int i;
    int j;
    int k;
    int offset;
    int which_letter;
    int font_width;
    int letter_offset;
    int font_height;
    int the_row_bytes;
    tU8 *char_ptr;
    tU8 *saved_char_ptr;
    tU8 *source_ptr;
    tU8 the_byte;
    LOG_TRACE("()");

    (void)new_time;
    (void)period;
    (void)let;
    (void)i;
    (void)j;
    (void)k;
    (void)offset;
    (void)which_letter;
    (void)font_width;
    (void)letter_offset;
    (void)font_height;
    (void)the_row_bytes;
    (void)char_ptr;
    (void)saved_char_ptr;
    (void)source_ptr;
    (void)the_byte;

    original_RollLettersIn();
}

static int(*original_ChangeCharTo)(int, int, char, ...) = (int(*)(int, int, char, ...))0x00472be8;
CARM95_HOOK_FUNCTION(original_ChangeCharTo, ChangeCharTo)
int ChangeCharTo(int pSlot_index, int pChar_index, char pNew_char) {
    int x_coord;
    int y_coord;
    int i;
    int j;
    tRolling_letter *let;
    tRolling_type new_type;
    LOG_TRACE("(%d, %d, '%c')", pSlot_index, pChar_index, pNew_char);

    (void)pSlot_index;
    (void)pChar_index;
    (void)pNew_char;
    (void)x_coord;
    (void)y_coord;
    (void)i;
    (void)j;
    (void)let;
    (void)new_type;

    return original_ChangeCharTo(pSlot_index, pChar_index, pNew_char);
}

static void(*original_ChangeTextTo)(int, int, char *, char *, ...) = (void(*)(int, int, char *, char *, ...))0x004729df;
CARM95_HOOK_FUNCTION(original_ChangeTextTo, ChangeTextTo)
void ChangeTextTo(int pXcoord, int pYcoord, char *pNew_str, char *pOld_str) {
    int x_coord;
    int i;
    int len;
    int len2;
    int j;
    tRolling_letter *let;
    tRolling_type new_type;
    char new_char;
    LOG_TRACE("(%d, %d, \"%s\", \"%s\")", pXcoord, pYcoord, pNew_str, pOld_str);

    (void)pXcoord;
    (void)pYcoord;
    (void)pNew_str;
    (void)pOld_str;
    (void)x_coord;
    (void)i;
    (void)len;
    (void)len2;
    (void)j;
    (void)let;
    (void)new_type;
    (void)new_char;

    original_ChangeTextTo(pXcoord, pYcoord, pNew_str, pOld_str);
}

static void(*original_SetRollingCursor)(int, ...) = (void(*)(int, ...))0x00472ea8;
CARM95_HOOK_FUNCTION(original_SetRollingCursor, SetRollingCursor)
void SetRollingCursor(int pSlot_index) {
    LOG_TRACE("(%d)", pSlot_index);

    (void)pSlot_index;

    original_SetRollingCursor(pSlot_index);
}

static void(*original_BlankSlot)(int, int, int, ...) = (void(*)(int, int, int, ...))0x00472ba0;
CARM95_HOOK_FUNCTION(original_BlankSlot, BlankSlot)
void BlankSlot(int pIndex, int pName_length, int pVisible_length) {
    int i;
    LOG_TRACE("(%d, %d, %d)", pIndex, pName_length, pVisible_length);

    (void)pIndex;
    (void)pName_length;
    (void)pVisible_length;
    (void)i;

    original_BlankSlot(pIndex, pName_length, pVisible_length);
}

static void(*original_DoRLBackspace)(int, ...) = (void(*)(int, ...))0x00472fb9;
CARM95_HOOK_FUNCTION(original_DoRLBackspace, DoRLBackspace)
void DoRLBackspace(int pSlot_index) {
    int i;
    int new_len;
    LOG_TRACE("(%d)", pSlot_index);

    (void)pSlot_index;
    (void)i;
    (void)new_len;

    original_DoRLBackspace(pSlot_index);
}

static void(*original_DoRLDelete)(int, ...) = (void(*)(int, ...))0x004730be;
CARM95_HOOK_FUNCTION(original_DoRLDelete, DoRLDelete)
void DoRLDelete(int pSlot_index) {
    int i;
    int new_len;
    LOG_TRACE("(%d)", pSlot_index);

    (void)pSlot_index;
    (void)i;
    (void)new_len;

    original_DoRLDelete(pSlot_index);
}

static void(*original_DoRLInsert)(int, ...) = (void(*)(int, ...))0x00473189;
CARM95_HOOK_FUNCTION(original_DoRLInsert, DoRLInsert)
void DoRLInsert(int pSlot_index) {
    LOG_TRACE("(%d)", pSlot_index);

    (void)pSlot_index;

    original_DoRLInsert(pSlot_index);
}

static void(*original_DoRLCursorLeft)(int, ...) = (void(*)(int, ...))0x004731ba;
CARM95_HOOK_FUNCTION(original_DoRLCursorLeft, DoRLCursorLeft)
void DoRLCursorLeft(int pSlot_index) {
    LOG_TRACE("(%d)", pSlot_index);

    (void)pSlot_index;

    original_DoRLCursorLeft(pSlot_index);
}

static void(*original_DoRLCursorRight)(int, ...) = (void(*)(int, ...))0x00473248;
CARM95_HOOK_FUNCTION(original_DoRLCursorRight, DoRLCursorRight)
void DoRLCursorRight(int pSlot_index) {
    LOG_TRACE("(%d)", pSlot_index);

    (void)pSlot_index;

    original_DoRLCursorRight(pSlot_index);
}

static void(*original_DoRLTypeLetter)(int, int, ...) = (void(*)(int, int, ...))0x004732a2;
CARM95_HOOK_FUNCTION(original_DoRLTypeLetter, DoRLTypeLetter)
void DoRLTypeLetter(int pChar, int pSlot_index) {
    int i;
    int new_len;
    LOG_TRACE("(%d, %d)", pChar, pSlot_index);

    (void)pChar;
    (void)pSlot_index;
    (void)i;
    (void)new_len;

    original_DoRLTypeLetter(pChar, pSlot_index);
}

static void(*original_StopTyping)(int, ...) = (void(*)(int, ...))0x00472d51;
CARM95_HOOK_FUNCTION(original_StopTyping, StopTyping)
void StopTyping(int pSlot_index) {
    int i;
    LOG_TRACE("(%d)", pSlot_index);

    (void)pSlot_index;
    (void)i;

    original_StopTyping(pSlot_index);
}

static void(*original_RevertTyping)(int, char *, ...) = (void(*)(int, char *, ...))0x00472dca;
CARM95_HOOK_FUNCTION(original_RevertTyping, RevertTyping)
void RevertTyping(int pSlot_index, char *pRevert_str) {
    int i;
    LOG_TRACE("(%d, \"%s\")", pSlot_index, pRevert_str);

    (void)pSlot_index;
    (void)pRevert_str;
    (void)i;

    original_RevertTyping(pSlot_index, pRevert_str);
}

static void(*original_StartTyping)(int, char *, int, ...) = (void(*)(int, char *, int, ...))0x00472e42;
CARM95_HOOK_FUNCTION(original_StartTyping, StartTyping)
void StartTyping(int pSlot_index, char *pText, int pVisible_length) {
    LOG_TRACE("(%d, \"%s\", %d)", pSlot_index, pText, pVisible_length);

    (void)pSlot_index;
    (void)pText;
    (void)pVisible_length;

    original_StartTyping(pSlot_index, pText, pVisible_length);
}

static void(*original_TypeKey)(int, char, ...) = (void(*)(int, char, ...))0x00472ecc;
CARM95_HOOK_FUNCTION(original_TypeKey, TypeKey)
void TypeKey(int pSlot_index, char pKey) {
    LOG_TRACE("(%d, '%c')", pSlot_index, pKey);

    (void)pSlot_index;
    (void)pKey;

    original_TypeKey(pSlot_index, pKey);
}

static void(*original_SetSlotXY)(int, int, int, ...) = (void(*)(int, int, int, ...))0x0047340f;
CARM95_HOOK_FUNCTION(original_SetSlotXY, SetSlotXY)
void SetSlotXY(int pSlot_index, int pX_coord, int pY_coord) {
    LOG_TRACE("(%d, %d, %d)", pSlot_index, pX_coord, pY_coord);

    (void)pSlot_index;
    (void)pX_coord;
    (void)pY_coord;

    original_SetSlotXY(pSlot_index, pX_coord, pY_coord);
}

static void(*original_GetTypedName)(char *, int, ...) = (void(*)(char *, int, ...))0x00473434;
CARM95_HOOK_FUNCTION(original_GetTypedName, GetTypedName)
void GetTypedName(char *pDestn, int pMax_length) {
    LOG_TRACE("(\"%s\", %d)", pDestn, pMax_length);

    (void)pDestn;
    (void)pMax_length;

    original_GetTypedName(pDestn, pMax_length);
}

static void(*original_KillCursor)(int, ...) = (void(*)(int, ...))0x004734aa;
CARM95_HOOK_FUNCTION(original_KillCursor, KillCursor)
void KillCursor(int pSlot_index) {
    int x_coord;
    int y_coord;
    int i;
    int j;
    tRolling_letter *let;
    tRolling_type new_type;
    LOG_TRACE("(%d)", pSlot_index);

    (void)pSlot_index;
    (void)x_coord;
    (void)y_coord;
    (void)i;
    (void)j;
    (void)let;
    (void)new_type;

    original_KillCursor(pSlot_index);
}

static void(*original_EdgeTriggerModeOn)() = (void(*)())0x00473577;
CARM95_HOOK_FUNCTION(original_EdgeTriggerModeOn, EdgeTriggerModeOn)
void EdgeTriggerModeOn() {
    LOG_TRACE("()");


    original_EdgeTriggerModeOn();
}

static void(*original_EdgeTriggerModeOff)() = (void(*)())0x0047358c;
CARM95_HOOK_FUNCTION(original_EdgeTriggerModeOff, EdgeTriggerModeOff)
void EdgeTriggerModeOff() {
    LOG_TRACE("()");


    original_EdgeTriggerModeOff();
}

