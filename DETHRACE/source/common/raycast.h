#ifndef _RAYCAST_H_
#define _RAYCAST_H_

#include "br_types.h"
#include "dr_types.h"

extern br_matrix34 * hookvar_gPick_model_to_view__raycast ; // addr: 0053D028 // suffix added to avoid duplicate symbol
extern int * hookvar_gBelow_face_index ; // addr: 0053D010
extern br_scalar * hookvar_gCurrent_y ; // addr: 0053D018
extern int * hookvar_gAbove_face_index ; // addr: 0053D020
extern br_model ** hookvar_gAbove_model ; // addr: 0053D01C
extern br_model ** hookvar_gBelow_model ; // addr: 0053D00C
extern br_scalar * hookvar_gHighest_y_below ; // addr: 0053D058
extern br_actor ** hookvar_gY_picking_camera ; // addr: 0053D008
extern br_scalar * hookvar_gLowest_y_above ; // addr: 0053D014

int __cdecl DRActorToRoot(br_actor *a, br_actor *world, br_matrix34 *m);

void __cdecl InitRayCasting();

int BadDiv__raycast(br_scalar a, br_scalar b);

void DRVector2AccumulateScale__raycast(br_vector2 *a, br_vector2 *b, br_scalar s);

int __cdecl PickBoundsTestRay__raycast(br_bounds *b, br_vector3 *rp, br_vector3 *rd, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far);

int __cdecl ActorPick2D(br_actor *ap, br_model *model, br_material *material, dr_pick2d_cbfn *callback, void *arg);

int __cdecl DRScenePick2DXY(br_actor *world, br_actor *camera, br_pixelmap *viewport, int pick_x, int pick_y, dr_pick2d_cbfn *callback, void *arg);

int __cdecl DRScenePick2D(br_actor *world, br_actor *camera, dr_pick2d_cbfn *callback, void *arg);

int __cdecl DRModelPick2D__raycast(br_model *model, br_material *material, br_vector3 *ray_pos, br_vector3 *ray_dir, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg);

int FindHighestPolyCallBack__raycast(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg);

int __cdecl FindHighestCallBack__raycast(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg);

void __cdecl FindBestY(br_vector3 *pPosition, br_actor *gWorld, br_scalar pStarting_height, br_scalar *pNearest_y_above, br_scalar *pNearest_y_below, br_model **pNearest_above_model, br_model **pNearest_below_model, int *pNearest_above_face_index, int *pNearest_below_face_index);

int __cdecl FindYVerticallyBelowPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg);

int __cdecl FindYVerticallyBelowCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg);

br_scalar __cdecl FindYVerticallyBelow(br_vector3 *pPosition);

br_scalar __cdecl FindYVerticallyBelow2(br_vector3 *pCast_point);

#endif
