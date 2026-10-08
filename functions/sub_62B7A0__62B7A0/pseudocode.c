void __userpurge sub_62B7A0(
        TESObjectREFR **this@<ecx>,
        double a2@<st1>,
        double a3@<st2>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  char *v6; // eax
  TESPackage *v7; // ebx
  char *v8; // ebp
  Atmosphere *target; // ecx
  double PointerAtOffset08; // st7
  int v12; // eax
  TESObjectREFR *v13; // eax
  int v14; // edi
  char v15; // al
  BSExtraDataVtbl *v16; // ebp
  int v17; // ebx
  TESWorldSpace *WorldSpace; // eax
  ActorAnimData *v19; // eax
  int v20; // ebx
  TESWorldSpace *v21; // eax
  ActorAnimData *v22; // eax
  int v23; // [esp+14h] [ebp-20h]
  float v24[3]; // [esp+28h] [ebp-Ch] BYREF
  float v25; // [esp+38h] [ebp+4h]

  v6 = (char *)((int (__usercall *)@<eax>(TESObjectREFR **@<ecx>, double@<st0>))LODWORD((*this)[4].member.rot.y))( /*0x62b7b1*/
                 this,
                 a4);
  v7 = (TESPackage *)v6; /*0x62b7b3*/
  v8 = 0; /*0x62b7b5*/
  if ( v6 ) /*0x62b7b9*/
  {
    if ( v6[0x20] == 0x10 ) /*0x62b7bf*/
    {
      v8 = v6; /*0x62b7c3*/
      sub_626DE0(v6); /*0x62b7c5*/
    }
  }
  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))a5->vtbl[1].super.CopyFrom)(a5) ) /*0x62b7d8*/
  {
    v23 = 1; /*0x62b7de*/
LABEL_36:
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*this)[4].member.rot.z))(this, a5, v23); /*0x62b9fd*/
    return; /*0x62ba08*/
  }
  if ( !*(this + 0xB) ) /*0x62b7e5*/
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[0xF].member.pos[1]))(this, a5); /*0x62b7f6*/
  ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[0xF].member.pos[2]))(this, a5); /*0x62b803*/
  target = (Atmosphere *)v7->members.target; /*0x62b805*/
  if ( target ) /*0x62b80a*/
  {
    PointerAtOffset08 = (double)(int)Shared_GetPointerAtOffset08(target); /*0x62b815*/
  }
  else
  {
    sub_566DB0(v7); /*0x62b81d*/
    PointerAtOffset08 = (double)v12; /*0x62b828*/
    if ( v12 < 0 ) /*0x62b82c*/
      PointerAtOffset08 = PointerAtOffset08 + flt_A2FC78; /*0x62b82e*/
  }
  v13 = *(this + 0xB); /*0x62b834*/
  v25 = PointerAtOffset08; /*0x62b837*/
  if ( v13 && (a2 = v25, v25 > TesObjectREF_GetDistance(a5, v13, 0)) ) /*0x62b854*/
  {
    ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int, int, _DWORD, _DWORD))a5->vtbl[1].GetBaseForm)( /*0x62b869*/
      a5,
      a5,
      1,
      1,
      0,
      0);
    v14 = 0; /*0x62b86b*/
    if ( *(this + 0xB) ) /*0x62b86d*/
    {
      if ( (*(this + 0xB))->vtbl->IsActor(*(this + 0xB)) ) /*0x62b87d*/
        v14 = (int)*(this + 0xB); /*0x62b883*/
    }
    if ( v8 ) /*0x62b888*/
    {
      if ( v14 ) /*0x62b890*/
        sub_626C90(v8, v14); /*0x62b899*/
    }
  }
  else if ( *(this + 0xB) /*0x62b8c8*/
         || (sub_566DC0(v7, kTerrainLODQuadRayDirectionZ, a2, a3, (Actor *)a5, 0, kTerrainLODQuadRayDirectionZ), v15) )
  {
    if ( *((_BYTE *)this + 0xD0) ) /*0x62b98c*/
    {
      if ( *(this + 0xB) /*0x62b9f5*/
        && (*(this + 0xB))->vtbl->IsActor(*(this + 0xB))
        && !((unsigned __int8 (__thiscall *)(_DWORD, int))(*(this + 0xB))->vtbl[1].GetSleepState)(*(this + 0xB), 1) )
      {
        v23 = 3; /*0x62b9fb*/
        goto LABEL_36; /*0x62b9fb*/
      }
    }
    else
    {
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[4].member.pos[2]))(this, a5); /*0x62b9a0*/
      v22 = a5->vtbl->GetAnimData(a5); /*0x62b9ac*/
      if ( v22 ) /*0x62b9b0*/
      {
        if ( ActorAnimData_IsIdleInactive(v22) ) /*0x62b9b4*/
          ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))(*this)->member.baseExtraList.members.m_data)( /*0x62b9c5*/
            this,
            a5);
      }
    }
  }
  else
  {
    v16 = sub_566A40((char **)v7, (Actor *)a5); /*0x62b8d6*/
    sub_566B30(v7, v24, (Actor *)a5); /*0x62b8e0*/
    if ( *((_BYTE *)this + 0xD0) ) /*0x62b8e5*/
    {
      v17 = (int)*this; /*0x62b8f0*/
      WorldSpace = TESObjectREFR_GetWorldSpace(a5); /*0x62b8f2*/
      (*(void (__thiscall **)(TESObjectREFR **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, BSExtraDataVtbl *, TESWorldSpace *))(v17 + 0x3DC))( /*0x62b91b*/
        this,
        a5,
        LODWORD(v24[0]),
        LODWORD(v24[1]),
        LODWORD(v24[2]),
        v16,
        WorldSpace);
    }
    else
    {
      v19 = a5->vtbl->GetAnimData(a5); /*0x62b92f*/
      if ( v19 ) /*0x62b933*/
      {
        if ( !ActorAnimData_IsIdleInactive(v19) ) /*0x62b937*/
          ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))(*this)[0x10].member.super.modlist.next)(this, a5); /*0x62b94b*/
      }
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*this)[6].member.rot.z))(this, a5, 0x201); /*0x62b95d*/
      v20 = (int)*this; /*0x62b963*/
      v21 = TESObjectREFR_GetWorldSpace(a5); /*0x62b96b*/
      (*(void (__thiscall **)(TESObjectREFR **, TESObjectREFR *, float *, BSExtraDataVtbl *, TESWorldSpace *, float))(v20 + 0x414))( /*0x62b980*/
        this,
        a5,
        v24,
        v16,
        v21,
        COERCE_FLOAT(LODWORD(v25)));
    }
  }
}
