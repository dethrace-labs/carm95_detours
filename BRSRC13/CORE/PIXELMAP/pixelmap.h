#ifndef _PIXELMAP_H_
#define _PIXELMAP_H_

#include "br_types.h"


br_pixelmap* __cdecl BrPixelmapAllocate(br_uint_8 type, br_int_32 w, br_int_32 h, void *pixels, int flags);

#endif
