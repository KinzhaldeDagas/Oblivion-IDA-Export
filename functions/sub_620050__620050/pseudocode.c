// Read-mostly lane test for one ally: predictive target/ally yaw plus local horizontal bound width. Success has a controller side effect, so SmartAI must not call it as a query.
int *__cdecl Combat_CheckActorBlocksRangedTarget(int *a2, int *a3, int *arg8, char a4)
{
  int v4; // ecx
  double v5; // st7
  int v6; // eax
  float *v7; // eax
  int (__thiscall *v8)(int *, _BYTE *); // edx
  double v9; // st7
  int v10; // eax
  int v11; // eax
  int (__thiscall *v12)(int *, _BYTE *); // edx
  double v13; // st7
  int v14; // eax
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // eax
  double v20; // st7
  int v21; // eax
  char v23; // [esp+10h] [ebp-88h]
  char v24; // [esp+10h] [ebp-88h]
  float v25; // [esp+1Ch] [ebp-7Ch]
  float v26; // [esp+1Ch] [ebp-7Ch]
  float DistanceBetween; // [esp+20h] [ebp-78h]
  float v28; // [esp+20h] [ebp-78h]
  double v29; // [esp+24h] [ebp-74h] BYREF
  float v30; // [esp+2Ch] [ebp-6Ch]
  double v31; // [esp+30h] [ebp-68h]
  _BYTE v32[12]; // [esp+38h] [ebp-60h] BYREF
  _BYTE v33[12]; // [esp+44h] [ebp-54h] BYREF
  _BYTE v34[12]; // [esp+50h] [ebp-48h] BYREF
  _BYTE v35[12]; // [esp+5Ch] [ebp-3Ch] BYREF
  _BYTE v36[12]; // [esp+68h] [ebp-30h] BYREF
  _BYTE v37[12]; // [esp+74h] [ebp-24h] BYREF
  _BYTE v38[12]; // [esp+80h] [ebp-18h] BYREF
  _BYTE v39[12]; // [esp+8Ch] [ebp-Ch] BYREF

  DistanceBetween = TESObjectREFR_GetSurfaceDistance(a2, (TESObjectREFR *)a2, (TESObjectREFR *)a3, 0, v23); /*0x62006e*/
  v30 = Actor_CalculateAimAnglesToTarget((MobileObject *)a2, (int)a3, (float *)&v29, 2); /*0x620080*/
  if ( !arg8 ) /*0x620090*/
    return 0; /*0x620090*/
  v4 = arg8[0x16]; /*0x620096*/
  if ( !v4 ) /*0x62009b*/
    return 0; /*0x62009b*/
  if ( arg8 == a2 ) /*0x6200a3*/
    return 0; /*0x6200a3*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) ) /*0x6200ae*/
    return 0; /*0x6200ae*/
  if ( a4 && !(*(unsigned __int8 (__thiscall **)(int *, int))(*arg8 + 0x334))(arg8, 1) ) /*0x6200cd*/
    return 0;                                   // When requireInCombat is true, candidate must satisfy Actor::IsInCombat(true). Candidate must also be HighProcess, non-null, and not shooter. /*0x6200cd*/
  v25 = TESObjectREFR_GetSurfaceDistance(a2, (TESObjectREFR *)a2, (TESObjectREFR *)arg8, 0, v24); /*0x6200e0*/
  if ( DistanceBetween <= (double)v25 ) /*0x6200f6*/
    return 0;                                   // Candidate must be strictly closer than current target by TESObjectREFR_GetSurfaceDistance; equal or farther is not blocking. /*0x6200f6*/
  v28 = Actor_CalculateAimAnglesToTarget((MobileObject *)a2, (int)arg8, (float *)&v29, 2);// Aim yaw uses projectile/spell predictive solver (active modes 2/4), not a static position-only bearing. Pitch output is ignored by this lane test. /*0x62010a*/
  v5 = *(float *)(*(int (__thiscall **)(int *, _BYTE *))(*arg8 + 0x15C))(arg8, v32); /*0x620122*/
  v6 = *arg8; /*0x620124*/
  v29 = v5; /*0x620126*/
  v7 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(v6 + 0x158))(arg8, v33); /*0x620137*/
  v8 = *(int (__thiscall **)(int *, _BYTE *))(*arg8 + 0x15C); /*0x620141*/
  v31 = v29 - *v7; /*0x62014c*/
  v9 = *(float *)(v8(arg8, v34) + 4); /*0x620154*/
  v10 = *arg8; /*0x620157*/
  v29 = v9; /*0x620159*/
  v11 = (*(int (__thiscall **)(int *, _BYTE *))(v10 + 0x158))(arg8, v35); /*0x62016a*/
  v12 = *(int (__thiscall **)(int *, _BYTE *))(*arg8 + 0x15C);// Width=max(boundMax.x-boundMin.x, boundMax.y-boundMin.y); engine does not apply actor scale here. /*0x62017e*/
  if ( v29 - *(float *)(v11 + 4) >= v31 ) /*0x620184*/
  {
    v17 = *(float *)(v12(arg8, v38) + 4); /*0x6201b7*/
    v18 = *arg8; /*0x6201ba*/
    v31 = v17; /*0x6201bc*/
    v19 = (*(int (__thiscall **)(int *, _BYTE *))(v18 + 0x158))(arg8, v39); /*0x6201cd*/
    v16 = v31 - *(float *)(v19 + 4); /*0x6201d2*/
  }
  else
  {
    v13 = *(float *)v12(arg8, v36); /*0x62018f*/
    v14 = *arg8; /*0x620191*/
    v31 = v13; /*0x620193*/
    v15 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(v14 + 0x158))(arg8, v37); /*0x6201a4*/
    v16 = v31 - *v15; /*0x6201a8*/
  }
  if ( v25 == 0.0 ) /*0x6201e5*/
  {
    v20 = flt_A70EA8;                           // If candidate surface distance == 0, angular tolerance is 0.0174533 rad (1 degree). Otherwise tolerance=atan(2*horizontalWidth/distance). /*0x6201eb*/
  }
  else
  {
    *(float *)&v29 = v16; /*0x6201f5*/
    *(float *)&v29 = (*(float *)&v29 + *(float *)&v29) / v25; /*0x620201*/
    *(float *)&v29 = atan(*(float *)&v29); /*0x62020e*/
    v20 = *(float *)&v29; /*0x620212*/
  }
  v26 = v20; /*0x620216*/
  v30 = v30 - v28;                              // Vanilla compares abs(targetYaw-allyYaw) without +/-pi wrap normalization and ignores pitch/vertical separation. /*0x620222*/
  v30 = fabs(v30); /*0x62022c*/
  if ( v26 < (double)v30 )                      // Blocks iff fabs(targetYaw-candidateYaw) <= angularTolerance. Difference is not wrap-normalized; no vertical-angle or LOS test. /*0x62023f*/
    return 0; /*0x62027d*/
  if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*arg8 + 0x334))(arg8, 1) )// Blocking in-combat candidate with a controller is marked +0x15A and given the lane-clear timer, even if wrapper later returns another ally's result. /*0x62024d*/
  {
    v21 = (*(int (__thiscall **)(int *))(*arg8 + 0x330))(arg8); /*0x62025d*/
    if ( v21 ) /*0x620261*/
    {
      if ( !*(_BYTE *)(v21 + 0x15A) ) /*0x620263*/
        CombatController_MarkAsBlockingAlly(v21); /*0x62026d*/
    }
  }
  return arg8; /*0x620272*/
}
