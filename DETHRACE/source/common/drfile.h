#ifndef _DRFILE_H_
#define _DRFILE_H_

#include "br_types.h"
#include "dr_types.h"

extern br_filesystem * hookvar_gFilesystem ; // addr: 0050F020
extern br_filesystem ** hookvar_gOld_file_system ; // addr: 00536298

void* DRStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result);

void* DRStdioOpenWrite(char *name, int mode);

void DRStdioClose(void *f);

br_size_t DRStdioRead(void *buf, br_size_t size, unsigned int n, void *f);

br_size_t DRStdioWrite(void *buf, br_size_t size, unsigned int n, void *f);

void InstallDRFileCalls();

#endif
