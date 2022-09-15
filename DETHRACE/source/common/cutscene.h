#ifndef _CUTSCENE_H_
#define _CUTSCENE_H_

#include "br_types.h"
#include "dr_types.h"

// extern tS32 * hookvar_gLast_demo_end_anim ;

void* radmalloc(unsigned long numbytes);

void radfree(void *ptr);

void ShowCutScene(int pIndex, int pWait_end, int pSound_ID, br_scalar pDelay);

void DoSCILogo();

void DoStainlessLogo();

void PlaySmackerFile(char *pSmack_name);

void DoOpeningAnimation();

void DoNewGameAnimation();

void DoGoToRaceAnimation();

void DoEndRaceAnimation();

void DoGameOverAnimation();

void DoGameCompletedAnimation();

void StartLoadingScreen();

#endif