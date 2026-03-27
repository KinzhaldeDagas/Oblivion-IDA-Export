char __userpurge sub_5F2820@<al>(
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
  char v38; // al
  int v39; // eax
  char v40; // al
  int v41; // esi
  NiNode *v42; // eax
  _DWORD *v43; // ecx
  bool v44; // zf
  char v45; // [esp+33h] [ebp-199h]
  float v46; // [esp+34h] [ebp-198h]
  float v47; // [esp+34h] [ebp-198h]
  float v48; // [esp+34h] [ebp-198h]
  float v49; // [esp+34h] [ebp-198h]
  TESObjectCELL *ParentCell; // [esp+38h] [ebp-194h]
  TESObjectCELL *v51; // [esp+38h] [ebp-194h]
  TESObjectCELL *v52; // [esp+38h] [ebp-194h]
  PlayerCharacter *v53; // [esp+40h] [ebp-18Ch]
  NiPoint3 v54; // [esp+48h] [ebp-184h] BYREF
  NiPoint3 a2; // [esp+54h] [ebp-178h] BYREF
  TESObjectREFR v56; // [esp+60h] [ebp-16Ch] BYREF
  __m128 v57; // [esp+BCh] [ebp-110h] BYREF
  __m128 v58; // [esp+CCh] [ebp-100h]
  bhkWorldRayCastData v59; // [esp+DCh] [ebp-F0h] BYREF
  int v60[28]; // [esp+15Ch] [ebp-70h] BYREF

  v7 = a3;
  v45 = 0;
  v53 = 0;
  if ( !a3 || !a3->vtbl->GetNiNode(a3) || a3->vtbl->IsDead(a3, 0) && this->vtbl->IsInCombat(this, 1) )
    return 0;
  v9 = dword_B14904 - 5;
  v10 = flt_B33E9C;
  this->members.super.process->unk010 = this->members.super.process->unk010 + v10;
  if ( Double_To_SInt32(st7_0) < 0x14 )
    v9 = dword_B148FC;
  if ( dword_B333BC > v9 )
  {
    if ( (this == (Actor *)TESDataHandler_g_PlayerRef || this->vtbl->IsInCombat(this, 1)) && dword_B3B914 > dword_B148E4 )
    {
      if ( a6 )
        *a6 = 1;
      return 1;
    }
    return 0;
  }
  if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>))a3->vtbl->IsActor)(a3, st7_0) )
    v53 = (PlayerCharacter *)a3;
  if ( !arg0 )
    return ((int (__thiscall *)(LowProcess *, Actor *, PlayerCharacter *))this->members.super.process->Unk_70)(
             this->members.super.process,
             this,
             v53);
  if ( a6 )
    *a6 = 3;
  sub_4121A0(
    a3->member.pos,
    (float *)&v56.member.baseExtraList.members.m_presenceBitfield[4],
    this->members.super.super.pos);
  v46 = sub_683CB0((float *)&v56.member.baseExtraList.members.m_presenceBitfield[4]);
  sub_683D80((int)this, v46, (int)v56.member.baseExtraList.members.m_presenceBitfield);
  v47 = 1.0 / v10;
  v48 = fabs(v47);
  if ( v48 >= dbl_A6E750 && !a7 )
    return v45;
  if ( !byte_B3B77C )
  {
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    if ( !ParentCell )
      return 0;
    v12 = this->members.super.super.pos[0];
    v13 = this->members.super.super.pos[2];
    v54.y = this->members.super.super.pos[1];
    v54.x = v12;
    v54.z = v13;
    if ( a5 )
      v14 = sub_5E40C0(this);
    else
      v14 = sub_5E0660(this) * dbl_A31C70;
    v54.z = v14 + v54.z;
    if ( TESObjectCELL_IsInterior(ParentCell) )
    {
      v16 = (TESForm *)ParentCell;
    }
    else
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(ParentCell);
      v16 = sub_44A270((TESWorldSpace **)TESDataHandler, v54.x, v54.y, WorldSpace, 0);
    }
    if ( TESObjectCELL_IsProcessLevel_LowHigh((TESObjectCELL *)v16, 1) )
    {
      bhkWorldRayCastData::Init(&v59);
      if ( !a3->vtbl->IsMobileObject(a3) )
        v7 = 0;
      sub_535A00((float *)v60, 0x1A, v7);
      v17 = a3->member.pos[0];
      v18 = a3->member.pos[1];
      v19 = a3->member.pos[2];
      v60[0x1B] = 0;
      v59.RayHitCollector2 = 0;
      v59.RayHitCollector1 = (hkRayHitCollector *)v60;
      a2.x = v17;
      a2.y = v18;
      a2.z = v19;
      bhkWorldRayCastData::SetCastInputFrom(&v59, &v54);
      sub_65ABE0(this, &v56);
      Unk_57 = a3->vtbl->Unk_57;
      v59.WorldRayCastInput.FilterInfo = (int)v56.vtbl & 0xFFFF0000 | 0x1A;
      *(double *)&v56.member.super.type = *(float *)(((int (__thiscall *)(TESObjectREFR *, TESForm::ModReferenceList *))Unk_57)(
                                                       a3,
                                                       &v56.member.super.modlist)
                                                   + 8);
      v21 = ((int (__thiscall *)(TESObjectREFR *, TESForm **))a3->vtbl->Unk_56)(a3, &v56.member.baseForm);
      v22 = *(double *)&v56.member.super.type - *(float *)(v21 + 8);
      v56.member.super.modlist.data = (Data *)1;
      v56.member.super.modlist.next = (TESForm::ModReferenceList *)2;
      v49 = v22;
      v56.member.childCell.GetChildCell = 0;
      *(float *)&v56.member.baseForm = flt_A3D65C;
      v56.member.rot.x = flt_A41328;
      v56.member.rot.y = flt_A41304;
      v23 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      if ( v23 )
      {
        sub_4440C0(v23);
        v51 = v24;
        v25 = v49 * dbl_A2FAA0 + a2.z;
        *(NiPoint3 *)&v56.member.rot.z = v54;
        v56.member.scale = a2.y;
        v56.member.baseExtraList.vtbl = (void **)LODWORD(a2.y);
        *(float *)&v56.member.baseExtraList.members.m_data = v25;
        v56.member.pos[2] = v17;
        *(float *)&v56.member.niNode = v19;
        *(float *)&v56.member.parentCell = v17;
        sub_8B8800(&v56.member.rot.z, 3, 0xC, (int)&v57);
        v26 = v51;
        v27 = 0;
        v27.m128_f32[0] = flt_A56118;
        v57 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v57);
        v58 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v58);
        if ( v51 )
        {
          v51->vtbl->Unk_16((TESForm *)v51);
          v28 = ((int (__thiscall *)(TESObjectCELL *))v51->vtbl->Unk_16)(v51);
        }
        else
        {
          v28 = 0;
        }
        v29 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 0x64) + 0x3C))(*(_DWORD *)(v28 + 0x64));
        *(_DWORD *)&v56.member.super.type = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
        v30 = *(_DWORD **)(*(_DWORD *)&v56.member.super.type + 0x19C);
        if ( !v30 )
          v30 = (_DWORD *)dword_BA7D9C;
        v31 = (hkBroadPhaseAabbCache *)v30[8];
        v32 = (v29 + 0x10) & 0xFFFFFFF0;
        if ( (unsigned int)v31 + v32 > v30[0xB] )
        {
          v52 = (TESObjectCELL *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v30 + 0xC))(v30, v32);
          v33 = (hkBroadPhaseAabbCache *)v52;
        }
        else
        {
          v30[8] = (char *)v31 + v32;
          v33 = v31;
          v52 = (TESObjectCELL *)v31;
        }
        if ( v26 )
          v34 = ((int (__thiscall *)(TESObjectCELL *))v26->vtbl->Unk_16)(v26);
        else
          v34 = 0;
        (*(void (__thiscall **)(_DWORD, __m128 *, hkBroadPhaseAabbCache *))(**(_DWORD **)(v34 + 0x64) + 0x40))(
          *(_DWORD *)(v34 + 0x64),
          &v57,
          v33);
        if ( v26 )
          v26->vtbl->Unk_16((TESForm *)v26);
        GetCombatController = this->vtbl->GetCombatController;
        *(float *)&v56.member.super.refID = a2.z;
        v59.BroadPhaseAabbCache = v33;
        v36 = 1;
        v37 = (int)GetCombatController(this);
        if ( v53 == TESDataHandler_g_PlayerRef
          || this == (Actor *)TESDataHandler_g_PlayerRef
          || v37 && (sub_612690(*(_DWORD *)(v37 + 0x70)), v38)
          || v53
          && (v39 = (int)v53->vtbl->super.GetCombatController((Actor *)v53)) != 0
          && (sub_612690(*(_DWORD *)(v39 + 0x70)), v40) )
        {
          v36 = 3;
        }
        v41 = 0;
        while ( 1 )
        {
          a2.z = *((float *)&v56.member.baseForm + v41) * v49 + *(float *)&v56.member.super.refID;
          bhkWorldRayCastData::SetCastInputTo(&v59, &a2);
          ++dword_B333BC;
          v42 = TES::CastRay(TES, &v59);
          if ( !v42 || sub_4DC270((int)v42) == (PlayerCharacter *)a3 )
            break;
          if ( ++v41 >= v36 )
            goto LABEL_65;
        }
        v45 = 1;
        if ( a6 )
          *a6 = *((_DWORD *)&v56.member.super.modlist.data + v41);
LABEL_65:
        v43 = *(_DWORD **)(*(_DWORD *)&v56.member.super.type + 0x19C);
        if ( !v43 )
          v43 = (_DWORD *)dword_BA7D9C;
        v44 = v52 == (TESObjectCELL *)v43[0xA];
        v43[8] = v52;
        if ( v44 )
          (*(void (__thiscall **)(_DWORD *, TESObjectCELL *))(*v43 + 0x10))(v43, v52);
      }
    }
    return v45;
  }
  if ( a6 )
    *a6 = 2;
  return 1;
}
