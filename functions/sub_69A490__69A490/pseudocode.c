// Obstruction raycast helper. Configures layer 0x1C collision mask, builds from supplied point to actor mid/upper z, preserves actor collision identity in high 16 filter bits, and returns true when no ray hit occurs.
bool __stdcall MagicCaster_IsRayClearToActorMidpoint_Layer1C(NiPoint3 a1, TESChildCELL *argC)
{
  MobileObject *v2; // esi
  TESObjectCELL *DwordAtOffset40; // edi
  BSExtraDataVtbl *v5; // edi
  int v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  double ScaledCollisionHeight; // st7
  hkVector4 v11; // xmm0
  double v12; // st7
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  NiPoint3 a2; // [esp+14h] [ebp-9Ch] BYREF
  bhkWorldRayCastData v18; // [esp+20h] [ebp-90h] BYREF

  v2 = (MobileObject *)argC; /*0x69a4ac*/
  if ( !argC ) /*0x69a4b4*/
    return 0; /*0x69a4b4*/
  if ( !Shared_GetDwordAtOffset40(argC) ) /*0x69a4d1*/
    return 0; /*0x69a4d1*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v2); /*0x69a4e1*/
  v5 = TESObjectCELL_IsInterior(DwordAtOffset40)
     ? sub_424180(&DwordAtOffset40->members.extraData)
     : (BSExtraDataVtbl *)MEMORY[0xB35C24];
  if ( !v5 ) /*0x69a502*/
    return 0; /*0x69a4b6*/
  bhkCollisionLayer_SetInteraction(0x1C, 1, 1); // TES4 authoritative: 0x69A490 reasserts layer 0x1C obstruction mask on the global collision matrix before each ray; it is not a scoped local filter. /*0x69a50a*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x13, 1); /*0x69a515*/
  bhkCollisionLayer_SetInteraction(0x1C, 2, 1); /*0x69a520*/
  bhkCollisionLayer_SetInteraction(0x1C, 3, 0); /*0x69a52a*/
  bhkCollisionLayer_SetInteraction(0x1C, 4, 0); /*0x69a534*/
  bhkCollisionLayer_SetInteraction(0x1C, 5, 0); /*0x69a53e*/
  bhkCollisionLayer_SetInteraction(0x1C, 6, 0); /*0x69a54b*/
  bhkCollisionLayer_SetInteraction(0x1C, 7, 0); /*0x69a555*/
  bhkCollisionLayer_SetInteraction(0x1C, 8, 0); /*0x69a55f*/
  bhkCollisionLayer_SetInteraction(0x1C, 9, 1); /*0x69a56a*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xA, 0); /*0x69a574*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xB, 0); /*0x69a57e*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xC, 0); /*0x69a58b*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xD, 1); /*0x69a596*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xE, 1); /*0x69a5a1*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xF, 0); /*0x69a5ab*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x10, 0); /*0x69a5b5*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x11, 1); /*0x69a5c0*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x12, 0); /*0x69a5cd*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x14, 0); /*0x69a5d7*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x15, 0); /*0x69a5e1*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x18, 0); /*0x69a5eb*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1A, 0); /*0x69a5f5*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1B, 0); /*0x69a5ff*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1C, 0); /*0x69a60c*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1D, 0); /*0x69a616*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1E, 0); /*0x69a620*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1F, 0); /*0x69a62a*/
  v6 = (int)v2->vtbl->super.GetPos((TESObjectREFR *)v2); /*0x69a63c*/
  v7 = *(float *)v6; /*0x69a63e*/
  v8 = *(float *)(v6 + 4); /*0x69a640*/
  v9 = *(float *)(v6 + 8); /*0x69a643*/
  a2.x = v7; /*0x69a646*/
  a2.y = v8; /*0x69a64c*/
  a2.z = v9; /*0x69a650*/
  ScaledCollisionHeight = Actor_GetScaledCollisionHeight(v2); /*0x69a654*/
  v11 = unk_BA7A40; /*0x69a65f*/
  v12 = ScaledCollisionHeight * dbl_A2FAA0 + a2.z;// 0x69A490 target z = actor position z + 0.5 * actor vertical extent; source point is caller supplied. /*0x69a668*/
  v18.WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x69a66c*/
  v18.WorldRayCastInput.FilterInfo = 0; /*0x69a670*/
  v18.WorldRayCastOutput.RootCollidable = 0; /*0x69a674*/
  a2.z = v12; /*0x69a678*/
  memset(&v18.BroadPhaseAabbCache, 0, 0xC); /*0x69a67c*/
  v18.WorldRayCastOutput.HitFraction = 1.0; /*0x69a68c*/
  v18.unk60 = v11; /*0x69a697*/
  if ( MobileObject_GetCharProxy(v2) ) /*0x69a69f*/
  {
    v13 = *((_DWORD *)MobileObject_GetCharProxy(v2) + 0xD9); /*0x69a6af*/
    if ( v13 ) /*0x69a6b7*/
    {
      v14 = *(_DWORD *)(v13 + 8); /*0x69a6b9*/
      if ( v14 && (v15 = v14 + 0x14) != 0 ) /*0x69a6c5*/
        v16 = HIWORD(*(_DWORD *)(v15 + 0x1C)); /*0x69a6ca*/
      else
        v16 = 0; /*0x69a6d1*/
    }
    else
    {
      v16 = 0; /*0x69a6d6*/
    }
  }
  else
  {
    v16 = (unsigned __int16)(dword_B2EB3C + 1); /*0x69a6e2*/
    dword_B2EB3C = v16; /*0x69a6e7*/
    if ( !v16 ) /*0x69a6ec*/
    {
      v16 = 0xA; /*0x69a6ee*/
      dword_B2EB3C = 0xA; /*0x69a6f3*/
    }
  }
  v18.WorldRayCastInput.FilterInfo = (v16 << 0x10) | 0x1C;// TES4 authoritative: obstruction ray filter info = recovered collision identity high16 plus layer 0x1C. /*0x69a706*/
  bhkWorldRayCastData::SetCastInputFrom(&v18, &a1); /*0x69a70a*/
  bhkWorldRayCastData::SetCastInputTo(&v18, &a2); /*0x69a718*/
  return (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v5->Destructor + 0x22))(v5, &v18) == 0;// Direct bhkWorld/bhkWorldM vtable+0x88 raycast; caller inverts result so true means no obstruction between source and actor midpoint. /*0x69a4b8*/
}
