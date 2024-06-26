#ifndef _BRQSORT_H_
#define _BRQSORT_H_

#include "br_types.h"


void __cdecl BrQsort(void *basep, unsigned int nelems, unsigned int size, br_qsort_cbfn *comp);

void swap_chars(char *a, char *b, unsigned int nbytes);

void swap_ints(char *ap, char *bp, unsigned int nints);

void swap_int_1(char *ap, char *bp, unsigned int nints);

#endif
