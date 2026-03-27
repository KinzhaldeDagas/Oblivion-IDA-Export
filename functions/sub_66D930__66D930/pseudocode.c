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
  TESObjectREFR *v18; // ecx
  TESObjectCELL *ParentCell; // esi
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
  int v36; // eax
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
  float v49; // [esp+14h] [ebp-320h] BYREF
  float v50; // [esp+18h] [ebp-31Ch]
  float v51; // [esp+1Ch] [ebp-318h]
  float v52; // [esp+20h] [ebp-314h]
  float y; // [esp+24h] [ebp-310h]
  float v54; // [esp+28h] [ebp-30Ch]
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

  v2 = this;
  v3 = 0;
  if ( !*((_DWORD *)this + 0x15E) )
    goto LABEL_12;
  v4 = *((_DWORD *)this + 0x15D);
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_DWORD *)(v4 + 8);
  v6 = v5 ? *(_DWORD *)(v5 + 0x18) : 0;
  if ( !v6 || !*(_DWORD *)(v6 + 0xC) )
    goto LABEL_12;
  *(float *)&v7 = COERCE_FLOAT(MobileObject_GetCharProxy((MobileObject *)this));
  v54 = *(float *)&v7;
  if ( *(float *)&v7 != 0.0 )
  {
    v8 = *((_DWORD *)v7 + 0xEE);
    if ( v8 == sub_65DE60(*(_DWORD **)v2[0xF].member.baseExtraList.members.m_presenceBitfield)
      && *(_DWORD *)(LODWORD(v54) + 0x3B4) == 1 )
    {
      this = v2;
LABEL_12:
      sub_66A670(this);
      return;
    }
  }
  v9 = *(float *)&v2[0x10].member.super.type + dbl_A2FC68;
  v52 = v9;
  sub_5F11F0((Actor *)v2, v9, &v58.x, &v55);
  v10 = *(_DWORD *)v2[0xF].member.baseExtraList.members.m_presenceBitfield;
  v63.WorldRayCastOutput.HitFraction = 1.0;
  v11 = stru_BA7A40;
  v63.WorldRayCastInput.EnableShapeCollectionFilter = 0;
  v63.WorldRayCastInput.FilterInfo = 0;
  v63.WorldRayCastOutput.RootCollidable = 0;
  memset(&v63.BroadPhaseAabbCache, 0, 0xC);
  v63.unk60 = v11;
  if ( v10 && (v12 = *(_DWORD *)(v10 + 8)) != 0 )
    v13 = *(_DWORD *)(v12 + 0x18);
  else
    v13 = 0;
  if ( v13 )
  {
    v14 = *(float *)(v13 + 0xC);
    v50 = v14;
  }
  else
  {
    v50 = 0.0;
    v14 = 0.0;
  }
  if ( v14 != 0.0 && (v15 = *(_DWORD *)(LODWORD(v14) + 8)) != 0 && (v16 = v15 + 0x14) != 0 )
    v17 = *(_DWORD *)(v16 + 0x1C);
  else
    LOWORD(v17) = 0;
  LOWORD(v63.WorldRayCastInput.FilterInfo) = v17;
  HIWORD(v63.WorldRayCastInput.FilterInfo) = HIWORD(sub_65ABE0(
                                                      (MobileObject *)TESDataHandler_g_PlayerRef,
                                                      (TESObjectREFR *)&v49)->vtbl);
  bhkWorldRayCastData::SetCastInputFrom(&v63, &v58);
  y = v55 * v52;
  v51 = v56 * v52;
  v49 = v52 * v57;
  v59.m128_f32[0] = y;
  v59.m128_f32[1] = v51;
  v59.m128_f32[2] = v49;
  sub_663FF0(&v63, v59.m128_f32);
  sub_538C00(v64);
  v18 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v67 = 0;
  v63.RayHitCollector2 = (hkRayHitCollector *)v64;
  v63.RayHitCollector1 = 0;
  ParentCell = TESObjectREFR_GetParentCell(v18);
  if ( TESObjectCELL_IsInterior(ParentCell) )
    v20 = sub_424180(&ParentCell->members.extraData);
  else
    v20 = (BSExtraDataVtbl *)bhkWorldM;
  if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v20->Destructor + 0x22))(v20, &v63) )
  {
    v21 = 0;
    y = 1.0;
    do
    {
      if ( v3 >= v66 )
        break;
      v48 = *(_DWORD *)(v65 + v21 + 0x20);
      v62.WorldRayCastInput.To.y = *(float *)(v65 + v21 + 0x14);
      sub_4806E0(v48);
      if ( v22 )
      {
        v23 = sub_4DC270(v22);
        if ( v23 )
        {
          if ( v23 != *(PlayerCharacter **)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[4] )
            y = v62.WorldRayCastInput.To.y;
        }
      }
      ++v3;
      v21 += 0x30;
    }
    while ( 1.0 == y );
    v49 = y * v52 - 0.0;
    v24 = v49;
    if ( v49 < 0.0 )
      v24 = 0.0;
    v52 = v24;
    if ( *(_DWORD *)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 3 )
      *(float *)&v2[0x10].member.super.type = v52;
  }
  v25 = v50;
  if ( *(_DWORD *)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 3 )
  {
    v26 = stru_BA7A40;
    v62.WorldRayCastOutput.HitFraction = 1.0;
    v62.WorldRayCastInput.EnableShapeCollectionFilter = 0;
    v62.WorldRayCastInput.FilterInfo = 0;
    v62.WorldRayCastOutput.RootCollidable = 0;
    memset(&v62.BroadPhaseAabbCache, 0, 0xC);
    v62.unk60 = v26;
    if ( v50 != 0.0 && (v27 = *(_DWORD *)(LODWORD(v50) + 8)) != 0 && (v28 = v27 + 0x14) != 0 )
      v29 = *(_DWORD *)(v28 + 0x1C);
    else
      v29 = 0;
    v62.WorldRayCastInput.FilterInfo = v29;
    bhkWorldRayCastData::SetCastInputFrom(&v62, &v58);
    v30 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[4]
                                                  + 0x154))(*(_DWORD *)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[4]);
    v31 = v30[8];
    v32 = v30[9];
    v33 = v30[0xA];
    v59.m128_u64[0] = __PAIR64__(v32, v31);
    v59.m128_i32[2] = v33;
    bhkWorldRayCastData::SetCastInputTo(&v62, (NiPoint3 *)&v59);
    if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
    {
      v34 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      if ( TESObjectCELL_IsInterior(v34) )
        v35 = sub_424180(&v34->members.extraData);
      else
        v35 = (BSExtraDataVtbl *)bhkWorldM;
      if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v35->Destructor + 0x22))(
             v35,
             &v62) )
      {
        v36 = sub_889CB0((int *)&v62);
        v37 = sub_4DC270(v36);
        if ( v37 )
        {
          if ( *(PlayerCharacter **)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[4] != v37
            && !v37->vtbl->super.super.super.IsActor((TESObjectREFR *)v37) )
          {
            goto LABEL_54;
          }
        }
      }
      v25 = v50;
    }
    if ( *(_DWORD *)&v2[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 3 )
      goto LABEL_64;
  }
  v38 = *(_DWORD *)v2[0xF].member.baseExtraList.members.m_presenceBitfield;
  if ( v38 )
  {
    v39 = *(__m128 **)(v38 + 8);
    if ( v39 )
      v61 = v39[3];
    v40 = *(__m128 **)(v38 + 8);
    if ( v40 )
      v60 = v40[2];
  }
  (*(void (__thiscall **)(float, bhkWorldRayCastData *))(*(_DWORD *)LODWORD(v25) + 0xAC))(
    COERCE_FLOAT(LODWORD(v25)),
    &v62);
  sub_88FCC0(&v59, (__m128 *)&v62, &v60);
  v59 = _mm_sub_ps(v59, v61);
  v41 = _mm_mul_ps(v59, v59);
  v61.m128_i32[0] = fsqrt(
                      _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]));
  v49 = v61.m128_f32[0] * dbl_A372E0;
  if ( flt_A73DE0 >= (double)v49 )
  {
LABEL_64:
    v42 = (float *)LODWORD(v54);
    v49 = v55 * v52;
    v43 = v49;
    v51 = v49;
    v49 = v56 * v52;
    v44 = v49;
    v50 = v49;
    v49 = v52 * v57;
    y = v51 + v58.x;
    v50 = v58.y + v50;
    v52 = v58.z + v49;
    v59.m128_f32[0] = y;
    v59.m128_f32[1] = v50;
    v59.m128_f32[2] = v52;
    if ( v54 == 0.0 )
      goto LABEL_68;
    v45 = v49;
    v49 = v43;
    v51 = v44;
    v54 = v45;
    v60.m128_f32[0] = v49;
    v60.m128_f32[1] = v51;
    v60.m128_f32[2] = v54;
    if ( v57 >= 0.0
      || (v60.m128_f32[2] = 0.0,
          v51 = sub_43F350(v60.m128_f32),
          v49 = sub_8913C0(v42),
          v49 = v49 * dbl_A372E0,
          v49 = v49 + dbl_A3F3F0,
          v49 <= (double)v51) )
    {
LABEL_68:
      sub_605DC0(*(__m128 ***)v2[0xF].member.baseExtraList.members.m_presenceBitfield, v59.m128_f32);
    }
    else
    {
      v46 = *(__m128 ***)v2[0xF].member.baseExtraList.members.m_presenceBitfield;
      v49 = v49 - v51;
      v47 = v49;
      v49 = v60.m128_f32[0] * v49;
      v51 = v60.m128_f32[1] * v47;
      v54 = v47 * v60.m128_f32[2];
      v59.m128_f32[0] = v49 + y;
      v59.m128_f32[1] = v51 + v50;
      v59.m128_f32[2] = v54 + v52;
      sub_605DC0(v46, v59.m128_f32);
    }
    goto LABEL_55;
  }
LABEL_54:
  sub_66A670(v2);
LABEL_55:
  v67 = 0xFFFFFFFF;
  sub_538C80(v64);
}
