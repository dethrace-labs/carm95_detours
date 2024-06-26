#ifndef _SYS_CONF_H_
#define _SYS_CONF_H_

#include "br_types.h"

extern br_token(* hookvar_valid_system_config_tokens )[5]; // addr: 0052CE20

br_boolean Is_Valid_Sys_Config_Token(br_token t);

br_boolean __stdcall LoadIniEntry(char *ini_file, char *section_name, br_token t, char *Entry);

br_error LoadIniConfig(char *ini_file, char *section_name);

br_boolean __stdcall LoadRegistryEntry(char *Reg_Path, void *hKey, br_token t, char *Entry);

br_error LoadRegistryConfig(char *Reg_Path, void *hKey);

br_error __stdcall BrSetDefaultConfig(br_token t, char *Entry);

br_error __cdecl BrSystemConfigBegin();

br_error __cdecl BrSystemConfigLoad(br_token t, char *Param1, void *Param2);

br_error __cdecl BrSystemConfigSetString(br_token t, char *string);

br_error __cdecl BrSystemConfigQueryString(br_token t, char *string, int max_size);

#endif
