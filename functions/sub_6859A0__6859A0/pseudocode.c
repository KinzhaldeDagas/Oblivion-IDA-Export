char __cdecl sub_6859A0(float *worldXY, float *arg4)
{
  char v2; // bl
  TES *v4; // ecx
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *CellAtWorldPosition; // eax
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

  v2 = 0; /*0x6859e6*/
  if ( unk_B3C089 ) /*0x6859e8*/
    return 1; /*0x6859f2*/
  if ( MEMORY[0xB33A1C] ) /*0x6859f7*/
  {
    v4 = MEMORY[0xB333A0]; /*0x6859ff*/
    if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x685a05*/
      goto LABEL_13; /*0x685a08*/
    if ( TES::GetCurrentWorldspace(v4) ) /*0x685a0a*/
    {
      CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x685a1a*/
      CellAtWorldPosition = TESWorldSpace_GetCellAtWorldPosition(CurrentWorldspace, worldXY); /*0x685a21*/
      v14 = CellAtWorldPosition; /*0x685a28*/
      if ( !CellAtWorldPosition ) /*0x685a2c*/
        return 0; /*0x685a2c*/
      if ( sub_43E000(MEMORY[0xB33A1C], CellAtWorldPosition) ) /*0x685a35*/
        return 0; /*0x685a35*/
      v7 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x685a45*/
      v8 = TESWorldSpace_GetCellAtWorldPosition(v7, arg4); /*0x685a4c*/
      if ( v8 != v14 && (!v8 || sub_43E000(MEMORY[0xB33A1C], v8)) ) /*0x685a62*/
        return 0; /*0x685a6d*/
    }
  }
  v4 = MEMORY[0xB333A0]; /*0x685a72*/
LABEL_13:
  v23[0] = &hkClosestRayHitCollector::`vftable'; /*0x685a78*/
  *(float *)&v23[9] = 1.0; /*0x685a85*/
  v23[0xC] = 0; /*0x685a8c*/
  *(float *)&v23[1] = 1.0; /*0x685a93*/
  a2.WorldRayCastOutput.HitFraction = 1.0; /*0x685a9a*/
  v9 = *arg4 - *worldXY; /*0x685aa4*/
  v23[0x17] = 0; /*0x685aae*/
  a2.WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x685ab5*/
  v18 = v9; /*0x685ab9*/
  a2.WorldRayCastOutput.RootCollidable = 0; /*0x685abd*/
  v10 = arg4[1]; /*0x685ac4*/
  a2.BroadPhaseAabbCache = 0; /*0x685ac7*/
  v11 = v10 - worldXY[1]; /*0x685ace*/
  a2.WorldRayCastInput.FilterInfo = 0xFFFF001B; /*0x685ad1*/
  a2.RayHitCollector1 = (hkRayHitCollector *)v23; /*0x685ad9*/
  a2.RayHitCollector2 = 0; /*0x685ae0*/
  v19 = v11; /*0x685ae7*/
  v20 = arg4[2] - worldXY[2]; /*0x685af1*/
  v12 = hkFactor; /*0x685aff*/
  v21.x = *worldXY * v12; /*0x685b01*/
  v21.y = worldXY[1] * v12; /*0x685b0a*/
  v21.z = worldXY[2] * v12; /*0x685b13*/
  a2.WorldRayCastInput.From = v21; /*0x685b20*/
  v21.x = v18 * v12; /*0x685b27*/
  v21.y = v19 * v12; /*0x685b31*/
  v21.z = v12 * v20; /*0x685b39*/
  a2.unk60 = v21; /*0x685b42*/
  TES::CastRay(v4, &a2); /*0x685b4a*/
  if ( !a2.WorldRayCastOutput.RootCollidable ) /*0x685b56*/
    return 1; /*0x685b56*/
  v15 = v20 * v20 + v18 * v18 + v19 * v19; /*0x685b76*/
  v16 = sqrt(v15); /*0x685b83*/
  v13 = v16; /*0x685b8f*/
  v17 = a2.WorldRayCastOutput.HitFraction * v16;// Another native HitFraction use: obstruction/visibility ray scales the total segment length by WorldRayCastOutput.HitFraction and checks remaining clearance. Confirms HitFraction is normalized 0..1 along the ray vector. /*0x685b99*/
  if ( v13 - v17 < dbl_A3F3E8 ) /*0x685bac*/
    return 1; /*0x685bae*/
  return v2; /*0x685bb2*/
}
