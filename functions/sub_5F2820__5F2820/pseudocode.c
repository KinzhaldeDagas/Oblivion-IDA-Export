// Oblivion actor line-of-sight query used by detection, combat reach, tactical refresh, and ray-cast script paths. Performs cell/world-space and Havok visibility tests and can report the viewed actor segment through the output parameter. Fallout corroborates the Actor::LineOfSight family name only.
char __userpurge Actor_LineOfSight@<al>(
        Actor *this@<ecx>,
        double st7_0@<st0>,
        char arg0,
        TESObjectREFR *a3,
        char a5,
        _DWORD *a6,
        char a7)
{
  TESObjectREFR *v7; // ebx
  int v9; // edi
  double v10; // st4
  float v12; // eax
  float v13; // edx
  double v14; // st6
  TESWorldSpace *WorldSpace; // eax
  TESForm *v16; // eax
  float v17; // ebx
  float v18; // edx
  float v19; // edi
  void (__thiscall *Unk_57)(UInt32); // eax
  int v21; // eax
  double v22; // st6
  TESObjectCELL *v23; // eax
  TESObjectCELL *v24; // eax
  double v25; // st7
  TESObjectCELL *v26; // edi
  __m128 v27; // xmm0
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // ecx
  hkBroadPhaseAabbCache *v31; // edx
  unsigned int v32; // eax
  hkBroadPhaseAabbCache *v33; // ebx
  int v34; // eax
  CombatController *(__thiscall *GetCombatController)(Actor *); // edx
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  int v39; // esi
  NiAVObject *v40; // eax
  _DWORD *v41; // ecx
  bool v42; // zf
  char v43; // [esp+33h] [ebp-199h]
  float v44; // [esp+34h] [ebp-198h]
  float v45; // [esp+34h] [ebp-198h]
  float v46; // [esp+34h] [ebp-198h]
  float v47; // [esp+34h] [ebp-198h]
  TESObjectCELL *DwordAtOffset40; // [esp+38h] [ebp-194h]
  TESObjectCELL *v49; // [esp+38h] [ebp-194h]
  TESObjectCELL *v50; // [esp+38h] [ebp-194h]
  PlayerCharacter *v51; // [esp+40h] [ebp-18Ch]
  NiPoint3 v52; // [esp+48h] [ebp-184h] BYREF
  NiPoint3 a2; // [esp+54h] [ebp-178h] BYREF
  TESObjectREFR v54; // [esp+60h] [ebp-16Ch] BYREF
  __m128 v55; // [esp+BCh] [ebp-110h] BYREF
  __m128 v56; // [esp+CCh] [ebp-100h]
  bhkWorldRayCastData v57; // [esp+DCh] [ebp-F0h] BYREF
  int v58[28]; // [esp+15Ch] [ebp-70h] BYREF

  v7 = a3; /*0x5f2860*/
  v43 = 0; /*0x5f2872*/
  v51 = 0; /*0x5f2877*/
  if ( !a3 || !a3->vtbl->GetNiNode(a3) || a3->vtbl->IsDead(a3, 0) && this->vtbl->IsInCombat(this, 1) ) /*0x5f28b7*/
    return 0; /*0x5f28bb*/
  v9 = dword_B14904 - 5; /*0x5f28d7*/
  v10 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x5f28de*/
  this->members.super.process->unk010 = this->members.super.process->unk010 + v10;// MEF v30 line-of-sight proof: EAX is loaded directly from Actor/ESI +0x58 immediately before the guarded fld [eax+0x10] at 0x005F28D4. /*0x5f28e4*/
  if ( Double_To_SInt32(st7_0) < 0x14 ) /*0x5f28f3*/
    v9 = dword_B148FC; /*0x5f28f5*/
  if ( unk_B333BC > v9 ) /*0x5f2901*/
  {
    if ( (this == (Actor *)reference || this->vtbl->IsInCombat(this, 1)) && unk_B3B914 > g_iMaxHiPerfCombatCount_Combat ) /*0x5f292d*/
    {
      if ( a6 ) /*0x5f2939*/
        *a6 = 1; /*0x5f293b*/
      return 1; /*0x5f2943*/
    }
    return 0; /*0x5f2e48*/
  }
  if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>))a3->vtbl->IsActor)(a3, st7_0) ) /*0x5f2952*/
    v51 = (PlayerCharacter *)a3; /*0x5f2958*/
  if ( !arg0 ) /*0x5f2960*/
    return ((int (__thiscall *)(LowProcess *, Actor *, PlayerCharacter *))this->members.super.process->Unk_70)( /*0x5f2979*/
             this->members.super.process,
             this,
             v51);
  if ( a6 ) /*0x5f2984*/
    *a6 = 3; /*0x5f2986*/
  sub_4121A0( /*0x5f299d*/
    a3->member.pos,
    (float *)&v54.member.baseExtraList.members.m_presenceBitfield[4],
    this->members.super.super.pos);
  v44 = Vector3_CalculateHeadingRadiansXY((float *)&v54.member.baseExtraList.members.m_presenceBitfield[4]); /*0x5f29af*/
  sub_683D80((int)this, v44, (float *)v54.member.baseExtraList.members.m_presenceBitfield); /*0x5f29c7*/
  v45 = 1.0 / v10; /*0x5f29cc*/
  v46 = fabs(v45); /*0x5f29d9*/
  if ( v46 >= dbl_A6E750 && !a7 ) /*0x5f29f2*/
    return v43; /*0x5f2e46*/
  if ( !unk_B3B77C ) /*0x5f29ff*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5f2a1f*/
    if ( !DwordAtOffset40 ) /*0x5f2a23*/
      return 0; /*0x5f2a23*/
    v12 = this->members.super.super.pos[0]; /*0x5f2a30*/
    v13 = this->members.super.super.pos[2]; /*0x5f2a33*/
    v52.y = this->members.super.super.pos[1]; /*0x5f2a36*/
    v52.x = v12; /*0x5f2a3a*/
    v52.z = v13; /*0x5f2a3e*/
    if ( a5 ) /*0x5f2a44*/
      v14 = sub_5E40C0(this); /*0x5f2a46*/
    else
      v14 = Actor_GetScaledCollisionHeight(this) * dbl_A31C70; /*0x5f2a52*/
    v52.z = v14 + v52.z; /*0x5f2a60*/
    if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x5f2a64*/
    {
      v16 = (TESForm *)DwordAtOffset40; /*0x5f2a98*/
    }
    else
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(DwordAtOffset40); /*0x5f2a73*/
      v16 = sub_44A270((TESWorldSpace **)g_TESDataHandler, v52.x, v52.y, WorldSpace, 0); /*0x5f2a91*/
    }
    if ( TESObjectCELL_IsProcessLevel_LowHigh((TESObjectCELL *)v16, 1) ) /*0x5f2aa5*/
    {
      bhkWorldRayCastData::Init(&v57); /*0x5f2ab9*/
      if ( !a3->vtbl->IsMobileObject(a3) ) /*0x5f2ad0*/
        v7 = 0; /*0x5f2ad6*/
      SpecificItemCollector_InitForRaycast((float *)v58, 0x1A, v7); /*0x5f2ae4*/
      v17 = a3->member.pos[0]; /*0x5f2ae9*/
      v18 = a3->member.pos[1]; /*0x5f2aeb*/
      v19 = a3->member.pos[2]; /*0x5f2aee*/
      v58[0x1B] = 0; /*0x5f2af3*/
      v57.RayHitCollector2 = 0; /*0x5f2b01*/
      v57.RayHitCollector1 = (hkRayHitCollector *)v58; /*0x5f2b0c*/
      a2.x = v17; /*0x5f2b1b*/
      a2.y = v18; /*0x5f2b1f*/
      a2.z = v19; /*0x5f2b23*/
      bhkWorldRayCastData::SetCastInputFrom(&v57, &v52); /*0x5f2b27*/
      MobileObject_GetCollisionFilterInfo((MobileObject *)this, &v54); /*0x5f2b33*/
      Unk_57 = a3->vtbl->Unk_57; /*0x5f2b42*/
      v57.WorldRayCastInput.FilterInfo = (int)v54.vtbl & 0xFFFF0000 | 0x1A; /*0x5f2b51*/
      *(double *)&v54.member.super.type = *(float *)(((int (__thiscall *)(TESObjectREFR *, TESForm::ModReferenceList *))Unk_57)( /*0x5f2b66*/
                                                       a3,
                                                       &v54.member.super.modlist)
                                                   + 8);
      v21 = ((int (__thiscall *)(TESObjectREFR *, TESForm **))a3->vtbl->Unk_56)(a3, &v54.member.baseForm); /*0x5f2b77*/
      v22 = *(double *)&v54.member.super.type - *(float *)(v21 + 8); /*0x5f2b7c*/
      v54.member.super.modlist.data = (Data *)1; /*0x5f2b82*/
      v54.member.super.modlist.next = (TESForm::ModReferenceList *)2; /*0x5f2b8a*/
      v47 = v22; /*0x5f2b92*/
      v54.member.childCell.GetChildCell = 0; /*0x5f2b96*/
      *(float *)&v54.member.baseForm = kHeadBodyNormalMatchRadius; /*0x5f2ba4*/
      v54.member.rot.x = flt_A41328; /*0x5f2bae*/
      v54.member.rot.y = flt_A41304; /*0x5f2bb8*/
      v23 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5f2bbc*/
      if ( v23 ) /*0x5f2bc3*/
      {
        sub_4440C0(v23); /*0x5f2bcb*/
        v49 = v24; /*0x5f2be2*/
        v25 = v47 * dbl_A2FAA0 + a2.z; /*0x5f2bea*/
        *(NiPoint3 *)&v54.member.rot.z = v52; /*0x5f2bee*/
        v54.member.scale = a2.y; /*0x5f2bf6*/
        v54.member.baseExtraList.vtbl = (void **)LODWORD(a2.y); /*0x5f2bfd*/
        *(float *)&v54.member.baseExtraList.members.m_data = v25; /*0x5f2c1f*/
        v54.member.pos[2] = v17; /*0x5f2c2e*/
        *(float *)&v54.member.niNode = v19; /*0x5f2c35*/
        *(float *)&v54.member.parentCell = v17; /*0x5f2c3c*/
        sub_8B8800(&v54.member.rot.z, 3, 0xC, (int)&v55); /*0x5f2c43*/
        v26 = v49; /*0x5f2c58*/
        v27 = 0; /*0x5f2c5c*/
        v27.m128_f32[0] = flt_A56118; /*0x5f2c5f*/
        v55 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v55); /*0x5f2c6d*/
        v56 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v56); /*0x5f2c8c*/
        if ( v49 ) /*0x5f2c94*/
        {
          v49->vtbl->Unk_16((TESForm *)v49); /*0x5f2c9d*/
          v28 = ((int (__thiscall *)(TESObjectCELL *))v49->vtbl->Unk_16)(v49); /*0x5f2ca6*/
        }
        else
        {
          v28 = 0; /*0x5f2caa*/
        }
        v29 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 0x64) + 0x3C))(*(_DWORD *)(v28 + 0x64)); /*0x5f2cb4*/
        *(_DWORD *)&v54.member.super.type = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x5f2cc6*/
        v30 = *(_DWORD **)(*(_DWORD *)&v54.member.super.type + 0x19C); /*0x5f2cca*/
        if ( !v30 ) /*0x5f2cd2*/
          v30 = (_DWORD *)unk_BA7D9C; /*0x5f2cd4*/
        v31 = (hkBroadPhaseAabbCache *)v30[8]; /*0x5f2cda*/
        v32 = (v29 + 0x10) & 0xFFFFFFF0; /*0x5f2ce0*/
        if ( (unsigned int)v31 + v32 > v30[0xB] ) /*0x5f2ce9*/
        {
          v50 = (TESObjectCELL *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v30 + 0xC))(v30, v32); /*0x5f2cfe*/
          v33 = (hkBroadPhaseAabbCache *)v50; /*0x5f2d02*/
        }
        else
        {
          v30[8] = (char *)v31 + v32; /*0x5f2ceb*/
          v33 = v31; /*0x5f2cee*/
          v50 = (TESObjectCELL *)v31; /*0x5f2cf0*/
        }
        if ( v26 ) /*0x5f2d06*/
          v34 = ((int (__thiscall *)(TESObjectCELL *))v26->vtbl->Unk_16)(v26); /*0x5f2d0f*/
        else
          v34 = 0; /*0x5f2d13*/
        (*(void (__thiscall **)(_DWORD, __m128 *, hkBroadPhaseAabbCache *))(**(_DWORD **)(v34 + 0x64) + 0x40))( /*0x5f2d26*/
          *(_DWORD *)(v34 + 0x64),
          &v55,
          v33);
        if ( v26 ) /*0x5f2d2a*/
          v26->vtbl->Unk_16((TESForm *)v26); /*0x5f2d33*/
        GetCombatController = this->vtbl->GetCombatController; /*0x5f2d3b*/
        *(float *)&v54.member.super.refID = a2.z; /*0x5f2d41*/
        v57.BroadPhaseAabbCache = v33; /*0x5f2d45*/
        v36 = 1; /*0x5f2d4e*/
        v37 = (int)GetCombatController(this); /*0x5f2d53*/
        if ( v51 == reference /*0x5f2d93*/
          || this == (Actor *)reference
          || v37 && (unsigned __int8)CombatMode_IsRangedWeaponMode(*(_DWORD *)(v37 + 0x70))
          || v51
          && (v38 = (int)v51->vtbl->super.GetCombatController((Actor *)v51)) != 0
          && (unsigned __int8)CombatMode_IsRangedWeaponMode(*(_DWORD *)(v38 + 0x70)) )
        {
          v36 = 3; /*0x5f2d9f*/
        }
        v39 = 0; /*0x5f2da4*/
        while ( 1 ) /*0x5f2dc8*/
        {
          a2.z = *((float *)&v54.member.baseForm + v39) * v47 + *(float *)&v54.member.super.refID; /*0x5f2dc8*/
          bhkWorldRayCastData::SetCastInputTo(&v57, &a2); /*0x5f2dcc*/
          ++unk_B333BC; /*0x5f2dd1*/
          v40 = TES::CastRay(MEMORY[0xB333A0], &v57); /*0x5f2de6*/
          if ( !v40 || sub_4DC270((int)v40) == (PlayerCharacter *)a3 ) /*0x5f2dfc*/
            break; /*0x5f2dfc*/
          if ( ++v39 >= v36 ) /*0x5f2e03*/
            goto LABEL_65; /*0x5f2e03*/
        }
        v43 = 1; /*0x5f2e0d*/
        if ( a6 ) /*0x5f2e12*/
          *a6 = *((_DWORD *)&v54.member.super.modlist.data + v39); /*0x5f2e18*/
LABEL_65:
        v41 = *(_DWORD **)(*(_DWORD *)&v54.member.super.type + 0x19C); /*0x5f2e1a*/
        if ( !v41 ) /*0x5f2e26*/
          v41 = (_DWORD *)unk_BA7D9C; /*0x5f2e28*/
        v42 = v50 == (TESObjectCELL *)v41[0xA]; /*0x5f2e32*/
        v41[8] = v50; /*0x5f2e35*/
        if ( v42 ) /*0x5f2e38*/
          (*(void (__thiscall **)(_DWORD *, TESObjectCELL *))(*v41 + 0x10))(v41, v50); /*0x5f2e40*/
      }
    }
    return v43; /*0x5f2e40*/
  }
  if ( a6 ) /*0x5f2a07*/
    *a6 = 2; /*0x5f2a09*/
  return 1; /*0x5f2e4a*/
}
