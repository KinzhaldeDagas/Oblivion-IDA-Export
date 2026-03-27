char __cdecl sub_6859A0(float *a1, float *arg4)
{
  char v2; // bl
  TES *v4; // ecx
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *v6; // eax
  TESWorldSpace *v7; // eax
  TESObjectCELL *v8; // eax
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // rt0
  double v13; // st7
  TESObjectCELL *v14; // [esp+14h] [ebp-100h]
  float v15; // [esp+14h] [ebp-100h]
  float v16; // [esp+14h] [ebp-100h]
  float v17; // [esp+14h] [ebp-100h]
  float v18; // [esp+18h] [ebp-FCh]
  float v19; // [esp+1Ch] [ebp-F8h]
  float v20; // [esp+20h] [ebp-F4h]
  hkVector4 v21; // [esp+24h] [ebp-F0h]
  bhkWorldRayCastData a2; // [esp+34h] [ebp-E0h] BYREF
  _DWORD v23[24]; // [esp+B4h] [ebp-60h] BYREF

  v2 = 0;
  if ( byte_B3C089 )
    return 1;
  if ( ModelLoaderPtr )
  {
    v4 = TES;
    if ( TES->currentInteriorCell )
      goto LABEL_13;
    if ( TES::GetCurrentWorldspace(v4) )
    {
      CurrentWorldspace = TES::GetCurrentWorldspace(TES);
      TESWorldSpace::GetCellAtPos(CurrentWorldspace, a1);
      v14 = v6;
      if ( !v6 )
        return 0;
      if ( sub_43E000(ModelLoaderPtr, v6) )
        return 0;
      v7 = TES::GetCurrentWorldspace(TES);
      TESWorldSpace::GetCellAtPos(v7, arg4);
      if ( v8 != v14 && (!v8 || sub_43E000(ModelLoaderPtr, v8)) )
        return 0;
    }
  }
  v4 = TES;
LABEL_13:
  v23[0] = &hkClosestRayHitCollector::`vftable';
  *(float *)&v23[9] = 1.0;
  v23[0xC] = 0;
  *(float *)&v23[1] = 1.0;
  a2.WorldRayCastOutput.HitFraction = 1.0;
  v9 = *arg4 - *a1;
  v23[0x17] = 0;
  a2.WorldRayCastInput.EnableShapeCollectionFilter = 0;
  v18 = v9;
  a2.WorldRayCastOutput.RootCollidable = 0;
  v10 = arg4[1];
  a2.BroadPhaseAabbCache = 0;
  v11 = v10 - a1[1];
  a2.WorldRayCastInput.FilterInfo = 0xFFFF001B;
  a2.RayHitCollector1 = (hkRayHitCollector *)v23;
  a2.RayHitCollector2 = 0;
  v19 = v11;
  v20 = arg4[2] - a1[2];
  v12 = hkFactor;
  v21.x = *a1 * v12;
  v21.y = a1[1] * v12;
  v21.z = a1[2] * v12;
  a2.WorldRayCastInput.From = v21;
  v21.x = v18 * v12;
  v21.y = v19 * v12;
  v21.z = v12 * v20;
  a2.unk60 = v21;
  TES::CastRay(v4, &a2);
  if ( !a2.WorldRayCastOutput.RootCollidable )
    return 1;
  v15 = v20 * v20 + v18 * v18 + v19 * v19;
  v16 = sqrt(v15);
  v13 = v16;
  v17 = a2.WorldRayCastOutput.HitFraction * v16;
  if ( v13 - v17 < dbl_A3F3E8 )
    return 1;
  return v2;
}
