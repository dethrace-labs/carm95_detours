#ifndef _HOSTCFG_H_
#define _HOSTCFG_H_

#include "br_types.h"


char* __cdecl HostDefaultDevice();

br_boolean __cdecl HostIniSectionExists(char *ini_file, char *section_name);

br_error __cdecl HostIniQuery(char *ini_file, char *section_name, char *entry, char *Buffer, int max, br_uint_16 *size);

br_error __cdecl HostRegistryQuery(void *hKey, char *Path, char *entry, char *Buffer, br_uint_16 max, br_uint_16 *size);

#endif
