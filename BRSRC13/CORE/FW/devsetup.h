#ifndef _DEVSETUP_H_
#define _DEVSETUP_H_

#include "br_types.h"

extern br_pixelmap ** hookvar_last_begin_screen ; // addr: 00541B08

br_pixelmap* __cdecl BrDevLastBeginQuery();

void __stdcall BrDevLastBeginSet(br_pixelmap *pm);

extern br_error(__stdcall*BrDevBeginVar)(br_pixelmap **, char *);
#if 0
br_error BrDevBeginVar_do_not_use(br_pixelmap **ppm, char *setup_string);
#endif

br_error __cdecl BrDevBegin(br_pixelmap **ppm, char *setup_string);

br_error BrDevBeginTV(br_pixelmap **ppm, char *setup_string, br_token_value *setup_tv);

br_pixelmap* BrDevBeginOld(char *setup_string);

void __cdecl BrDevEndOld();

void __cdecl BrDevPaletteSetOld(br_pixelmap *pm);

void __cdecl BrDevPaletteSetEntryOld(int i, br_colour colour);

br_error __cdecl BrRendererFacilityFind(br_renderer_facility **prf, br_device_pixelmap *destination, br_token scalar_type);

br_error __cdecl BrPrimitiveLibraryFind(br_primitive_library **ppl, br_device_pixelmap *destination, br_token scalar_type);

br_error __cdecl BrGeometryFormatFind(br_geometry **pgf, br_renderer *renderer, br_renderer_facility *renderer_facility, br_token scalar_type, br_token format_type);

#endif
