void __thiscall sub_66D930(TESObjectREFR *this, int a2)
{
  TESObjectREFR *v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  bhkCharacterProxy *v7; // eax
  int v8; // esi
  double v9; // st7
  int v10; // eax
  hkVector4 v11; // xmm0
  int v12; // eax
  int v13; // eax
  float v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  PlayerCharacter *v18; // ecx
  TESObjectCELL *DwordAtOffset40; // esi
  BSExtraDataVtbl *v20; // eax
  int v21; // esi
  int v22; // eax
  PlayerCharacter *v23; // eax
  double v24; // st7
  float v25; // esi
  hkVector4 v26; // xmm0
  int v27; // eax
  int v28; // eax
  UInt32 v29; // eax
  _DWORD *v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  __int32 v33; // eax
  TESObjectCELL *v34; // esi
  BSExtraDataVtbl *v35; // eax
  NiAVObject *HitNiObject; // eax
  PlayerCharacter *v37; // eax
  int v38; // eax
  __m128 *v39; // ecx
  __m128 *v40; // eax
  __m128 v41; // xmm0
  float *v42; // esi
  double v43; // st6
  double v44; // st5
  double v45; // rt0
  __m128 **v46; // ecx
  double v47; // st7
  int v48; // [esp-4h] [ebp-338h]
  float Radius; // [esp+14h] [ebp-320h] BYREF
  float v50; // [esp+18h] [ebp-31Ch]
  float v51; // [esp+1Ch] [ebp-318h]
  float v52; // [esp+20h] [ebp-314h]
  float y; // [esp+24h] [ebp-310h]
  float *v54; // [esp+28h] [ebp-30Ch]
  float v55; // [esp+2Ch] [ebp-308h] BYREF
  float v56; // [esp+30h] [ebp-304h]
  float v57; // [esp+34h] [ebp-300h]
  NiPoint3 v58; // [esp+38h] [ebp-2FCh] BYREF
  __m128 v59; // [esp+44h] [ebp-2F0h] BYREF
  __m128 v60; // [esp+54h] [ebp-2E0h] BYREF
  __m128 v61; // [esp+64h] [ebp-2D0h]
  bhkWorldRayCastData v62; // [esp+74h] [ebp-2C0h] BYREF
  bhkWorldRayCastData v63; // [esp+F4h] [ebp-240h] BYREF
  float v64[4]; // [esp+174h] [ebp-1C0h] BYREF
  int v65; // [esp+184h] [ebp-1B0h]
  int v66; // [esp+188h] [ebp-1ACh]
  unsigned int v67; // [esp+330h] [ebp-4h]

  v2 = this; /*0x66d970*/
  v3 = 0; /*0x66d972*/
  if ( !*((_DWORD *)this + 0x15E) ) /*0x66d974*/
    goto LABEL_12; /*0x66d974*/
  v4 = *((_DWORD *)this + 0x15D); /*0x66d97c*/
  if ( !v4 ) /*0x66d984*/
    goto LABEL_12; /*0x66d984*/
  v5 = *(_DWORD *)(v4 + 8); /*0x66d986*/
  v6 = v5 ? *(_DWORD *)(v5 + 0x18) : 0;
  if ( !v6 || !*(_DWORD *)(v6 + 0xC) ) /*0x66d998*/
    goto LABEL_12; /*0x66d99b*/
  *(float *)&v7 = COERCE_FLOAT(MobileObject_GetCharProxy((MobileObject *)this)); /*0x66d99d*/
  v54 = (float *)v7; /*0x66d9a4*/
  if ( *(float *)&v7 != 0.0 ) /*0x66d9a8*/
  {
    v8 = *((_DWORD *)v7 + 0xEE); /*0x66d9b0*/
    if ( v8 == sub_65DE60(*(_DWORD **)v2[0xF].member.baseExtraList.members.m_presenceBitfield) /*0x66d9ca*/
      && *((_DWORD *)v54 + 0xED) == 1 )
    {
      this = v2; /*0x66d9cc*/
LABEL_12:
      sub_66A670(this); /*0x66d9ce*/
      return; /*0x66d9f6*/
    }
  }
  v9 = *(float *)&v2[0x10].member.super.type + dbl_A2FC68; /*0x66da03*/
  v52 = v9; /*0x66da11*/
  sub_5F11F0((MobileObject *)v2, v9, &v58.x, &v55); /*0x66da15*/
  v10 = *(_DWORD *)v2[0xF].member.baseExtraList.members.m_presenceBitfield; /*0x66da1c*/
  v63.WorldRayCastOutput.HitFraction = 1.0; /*0x66da22*/
  v11 = unk_BA7A40; /*0x66da2b*/
  v63.WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x66da32*/
  v63.WorldRayCastInput.FilterInfo = 0; /*0x66da3a*/
  v63.WorldRayCastOutput.RootCollidable = 0; /*0x66da41*/
  memset(&v63.BroadPhaseAabbCache, 0, 0xC); /*0x66da48*/
  v63.unk60 = v11; /*0x66da5d*/
  if ( v10 && (v12 = *(_DWORD *)(v10 + 8)) != 0 ) /*0x66da6c*/
    v13 = *(_DWORD *)(v12 + 0x18); /*0x66da6e*/
  else
    v13 = 0; /*0x66da73*/
  if ( v13 ) /*0x66da77*/
  {
    v14 = *(float *)(v13 + 0xC); /*0x66da79*/
    v50 = v14; /*0x66da7c*/
  }
  else
  {
    v50 = 0.0; /*0x66da82*/
    v14 = 0.0; /*0x66da86*/
  }
  if ( v14 != 0.0 && (v15 = *(_DWORD *)(LODWORD(v14) + 8)) != 0 && (v16 = v15 + 0x14) != 0 ) /*0x66da98*/
    v17 = *(_DWORD *)(v16 + 0x1C); /*0x66da9a*/
  else
    LOWORD(v17) = 0; /*0x66da9f*/
  LOWORD(v63.WorldRayCastInput.FilterInfo) = v17; /*0x66dac9*/
  HIWORD(v63.WorldRayCastInput.FilterInfo) = HIWORD(MobileObject_GetCollisionFilterInfo( /*0x66dac9*/
                                                      (MobileObject *)reference,
                                                      (TESObjectREFR *)&Radius)->vtbl);
  bhkWorldRayCastData::SetCastInputFrom(&v63, &v58); /*0x66dad0*/
  y = v55 * v52; /*0x66daef*/
  v51 = v56 * v52; /*0x66daf9*/
  Radius = v52 * v57; /*0x66db01*/
  v59.m128_f32[0] = y; /*0x66db09*/
  v59.m128_f32[1] = v51; /*0x66db11*/
  v59.m128_f32[2] = Radius; /*0x66db19*/
  sub_663FF0(&v63, v59.m128_f32); /*0x66db1d*/
  sub_538C00(v64); /*0x66db29*/
  v18 = reference; /*0x66db2e*/
  v67 = 0; /*0x66db3b*/
  v63.RayHitCollector2 = (hkRayHitCollector *)v64; /*0x66db42*/
  v63.RayHitCollector1 = 0; /*0x66db49*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v18); /*0x66db55*/
  if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x66db59*/
    v20 = sub_424180(&DwordAtOffset40->members.extraData); /*0x66db65*/
  else
    v20 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x66db6c*/
  if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v20->Destructor + 0x22))(v20, &v63) ) /*0x66db83*/
  {
    v21 = 0; /*0x66db8f*/
    y = 1.0; /*0x66db91*/
    do /*0x66dbf2*/
    {
      if ( v3 >= v66 ) /*0x66db9c*/
        break; /*0x66db9c*/
      v48 = *(_DWORD *)(v65 + v21 + 0x20); /*0x66dbad*/
      v62.WorldRayCastInput.To.y = *(float *)(v65 + v21 + 0x14); /*0x66dbae*/
      sub_4806E0(v48); /*0x66dbb5*/
      if ( v22 ) /*0x66dbbf*/
      {
        v23 = sub_4DC270(v22); /*0x66dbc2*/
        if ( v23 ) /*0x66dbcc*/
        {
          if ( v23 != *(PlayerCharacter **)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[4] ) /*0x66dbd4*/
            y = v62.WorldRayCastInput.To.y; /*0x66dbdd*/
        }
      }
      ++v3; /*0x66dbe3*/
      v21 += 0x30; /*0x66dbea*/
    }
    while ( 1.0 == y ); /*0x66dbf2*/
    Radius = y * v52 - 0.0; /*0x66dc02*/
    v24 = Radius; /*0x66dc0e*/
    if ( Radius < 0.0 ) /*0x66dc13*/
      v24 = 0.0; /*0x66dc17*/
    v52 = v24; /*0x66dc1b*/
    if ( *(_DWORD *)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 3 ) /*0x66dc26*/
      *(float *)&v2[0x10].member.super.type = v52; /*0x66dc2c*/
  }
  v25 = v50; /*0x66dc39*/
  if ( *(_DWORD *)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 3 ) /*0x66dc3d*/
  {
    v26 = unk_BA7A40; /*0x66dc47*/
    v62.WorldRayCastOutput.HitFraction = 1.0; /*0x66dc4e*/
    v62.WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x66dc55*/
    v62.WorldRayCastInput.FilterInfo = 0; /*0x66dc5d*/
    v62.WorldRayCastOutput.RootCollidable = 0; /*0x66dc64*/
    memset(&v62.BroadPhaseAabbCache, 0, 0xC); /*0x66dc6b*/
    v62.unk60 = v26; /*0x66dc80*/
    if ( v50 != 0.0 && (v27 = *(_DWORD *)(LODWORD(v50) + 8)) != 0 && (v28 = v27 + 0x14) != 0 ) /*0x66dc96*/
      v29 = *(_DWORD *)(v28 + 0x1C); /*0x66dc98*/
    else
      v29 = 0; /*0x66dc9d*/
    v62.WorldRayCastInput.FilterInfo = v29; /*0x66dc9f*/
    bhkWorldRayCastData::SetCastInputFrom(&v62, &v58); /*0x66dcaf*/
    v30 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[4] /*0x66dcc2*/
                                                  + 0x154))(*(_DWORD *)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[4]);
    v31 = v30[8]; /*0x66dcc4*/
    v32 = v30[9]; /*0x66dcc7*/
    v33 = v30[0xA]; /*0x66dcca*/
    v59.m128_u64[0] = __PAIR64__(v32, v31); /*0x66dccd*/
    v59.m128_i32[2] = v33; /*0x66dcde*/
    bhkWorldRayCastData::SetCastInputTo(&v62, (NiPoint3 *)&v59); /*0x66dce2*/
    if ( Shared_GetDwordAtOffset40(reference) ) /*0x66dced*/
    {
      v34 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x66dd05*/
      if ( TESObjectCELL_IsInterior(v34) ) /*0x66dd09*/
        v35 = sub_424180(&v34->members.extraData); /*0x66dd15*/
      else
        v35 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x66dd1c*/
      if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v35->Destructor + 0x22))( /*0x66dd30*/
             v35,
             &v62) )
      {
        HitNiObject = bhkWorldRayCastData_GetHitNiObject((int *)&v62); /*0x66dd3a*/
        v37 = sub_4DC270((int)HitNiObject); /*0x66dd40*/
        if ( v37 ) /*0x66dd4a*/
        {
          if ( *(PlayerCharacter **)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[4] != v37 /*0x66dd5e*/
            && !v37->vtbl->super.super.super.IsActor((TESObjectREFR *)v37) )
          {
            goto LABEL_54; /*0x66dd62*/
          }
        }
      }
      v25 = v50; /*0x66dd87*/
    }
    if ( *(_DWORD *)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 3 ) /*0x66dd92*/
      goto LABEL_64; /*0x66dd92*/
  }
  v38 = *(_DWORD *)v2[0xF].member.baseExtraList.members.m_presenceBitfield; /*0x66dd98*/
  if ( v38 ) /*0x66dda0*/
  {
    v39 = *(__m128 **)(v38 + 8); /*0x66dda2*/
    if ( v39 ) /*0x66dda7*/
      v61 = v39[3]; /*0x66ddad*/
    v40 = *(__m128 **)(v38 + 8); /*0x66ddb6*/
    if ( v40 ) /*0x66ddbb*/
      v60 = v40[2]; /*0x66ddc1*/
  }
  (*(void (__thiscall **)(float, bhkWorldRayCastData *))(*(_DWORD *)LODWORD(v25) + 0xAC))( /*0x66ddd5*/
    COERCE_FLOAT(LODWORD(v25)),
    &v62);
  hkTransform_TransformPosition(&v59, (__m128 *)&v62, &v60); /*0x66dde5*/
  v59 = _mm_sub_ps(v59, v61); /*0x66ddf4*/
  v41 = _mm_mul_ps(v59, v59); /*0x66ddf9*/
  v61.m128_i32[0] = fsqrt( /*0x66de13*/
                      _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]));
  Radius = v61.m128_f32[0] * dbl_A372E0; /*0x66de23*/
  if ( flt_A73DE0 >= (double)Radius ) /*0x66de36*/
  {
LABEL_64:
    v42 = v54; /*0x66de40*/
    Radius = v55 * v52; /*0x66de50*/
    v43 = Radius; /*0x66de54*/
    v51 = Radius; /*0x66de58*/
    Radius = v56 * v52; /*0x66de62*/
    v44 = Radius; /*0x66de66*/
    v50 = Radius; /*0x66de6a*/
    Radius = v52 * v57; /*0x66de78*/
    y = v51 + v58.x; /*0x66de8c*/
    v50 = v58.y + v50; /*0x66de98*/
    v52 = v58.z + Radius; /*0x66dea4*/
    v59.m128_f32[0] = y; /*0x66deac*/
    v59.m128_f32[1] = v50; /*0x66deb4*/
    v59.m128_f32[2] = v52; /*0x66debc*/
    if ( *(float *)&v54 == 0.0 ) /*0x66dec0*/
      goto LABEL_68; /*0x66dec0*/
    v45 = Radius; /*0x66dec6*/
    Radius = v43; /*0x66dec8*/
    v51 = v44; /*0x66decc*/
    *(float *)&v54 = v45; /*0x66ded0*/
    v60.m128_f32[0] = Radius; /*0x66ded8*/
    v60.m128_f32[1] = v51; /*0x66dee0*/
    v60.m128_f32[2] = *(float *)&v54; /*0x66dee8*/
    if ( v57 >= 0.0 /*0x66df44*/
      || (v60.m128_f32[2] = 0.0,
          v51 = Vector3_NormalizeInPlace(v60.m128_f32),
          Radius = bhkCharacterController_GetRadius(v42),
          Radius = Radius * dbl_A372E0,
          Radius = Radius + dbl_A3F3F0,
          Radius <= (double)v51) )
    {
LABEL_68:
      sub_605DC0(*(__m128 ***)v2[0xF].member.baseExtraList.members.m_presenceBitfield, v59.m128_f32); /*0x66dfbc*/
    }
    else
    {
      v46 = *(__m128 ***)v2[0xF].member.baseExtraList.members.m_presenceBitfield; /*0x66df48*/
      Radius = Radius - v51; /*0x66df53*/
      v47 = Radius; /*0x66df63*/
      Radius = v60.m128_f32[0] * Radius; /*0x66df65*/
      v51 = v60.m128_f32[1] * v47; /*0x66df6f*/
      *(float *)&v54 = v47 * v60.m128_f32[2]; /*0x66df77*/
      v59.m128_f32[0] = Radius + y; /*0x66df83*/
      v59.m128_f32[1] = v51 + v50; /*0x66df8f*/
      v59.m128_f32[2] = *(float *)&v54 + v52; /*0x66df9b*/
      sub_605DC0(v46, v59.m128_f32); /*0x66df9f*/
    }
    goto LABEL_55; /*0x66dfa4*/
  }
LABEL_54:
  sub_66A670(v2); /*0x66dd64*/
LABEL_55:
  v67 = 0xFFFFFFFF; /*0x66dd6b*/
  sub_538C80(v64); /*0x66dd7d*/
}
