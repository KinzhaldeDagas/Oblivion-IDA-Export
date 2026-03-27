void __userpurge sub_62B7A0(TESObjectREFR **this@<ecx>, double a2@<st1>, TESObjectREFR *a3)
{
  char *v4; // eax
  TESPackage *v5; // ebx
  char *v6; // ebp
  Atmosphere *target; // ecx
  double v9; // st7
  int v10; // eax
  TESObjectREFR *v11; // eax
  int v12; // edi
  char v13; // al
  TESObjectCELL *v14; // ebp
  TESObjectREFR *v15; // ebx
  TESWorldSpace *WorldSpace; // eax
  ActorAnimData *v17; // eax
  TESObjectREFR *v18; // ebx
  TESWorldSpace *v19; // eax
  ActorAnimData *v20; // eax
  int v21; // [esp+14h] [ebp-20h]
  _DWORD v22[3]; // [esp+28h] [ebp-Ch] BYREF
  float v23; // [esp+38h] [ebp+4h]

  v4 = (char *)((int (__thiscall *)(TESObjectREFR **))LODWORD((*this)[4].member.rot.y))(this);
  v5 = (TESPackage *)v4;
  v6 = 0;
  if ( v4 )
  {
    if ( v4[0x20] == 0x10 )
    {
      v6 = v4;
      sub_626DE0(v4);
    }
  }
  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))a3->vtbl[1].super.CopyFrom)(a3) )
  {
    v21 = 1;
LABEL_36:
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*this)[4].member.rot.z))(this, a3, v21);
    return;
  }
  if ( !*(this + 0xB) )
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[0xF].member.pos[1]))(this, a3);
  ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[0xF].member.pos[2]))(this, a3);
  target = (Atmosphere *)v5->members.target;
  if ( target )
  {
    v9 = (double)(int)sub_452A60(target);
  }
  else
  {
    sub_566DB0(v5);
    v9 = (double)v10;
    if ( v10 < 0 )
      v9 = v9 + flt_A2FC78;
  }
  v11 = *(this + 0xB);
  v23 = v9;
  if ( v11 && (a2 = v23, v23 > TesObjectREF_GetDistance(a3, v11, 0)) )
  {
    ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int, int, _DWORD, _DWORD))a3->vtbl[1].GetBaseForm)(
      a3,
      a3,
      1,
      1,
      0,
      0);
    v12 = 0;
    if ( *(this + 0xB) )
    {
      if ( (*(this + 0xB))->vtbl->IsActor(*(this + 0xB)) )
        v12 = (int)*(this + 0xB);
    }
    if ( v6 )
    {
      if ( v12 )
        sub_626C90(v6, v12);
    }
  }
  else if ( *(this + 0xB) || (sub_566DC0(v5, flt_A30634, a2, (Actor *)a3, 0, flt_A30634), v13) )
  {
    if ( *((_BYTE *)this + 0xD0) )
    {
      if ( *(this + 0xB)
        && (*(this + 0xB))->vtbl->IsActor(*(this + 0xB))
        && !((unsigned __int8 (__thiscall *)(_DWORD, int))(*(this + 0xB))->vtbl[1].GetSleepState)(*(this + 0xB), 1) )
      {
        v21 = 3;
        goto LABEL_36;
      }
    }
    else
    {
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[4].member.pos[2]))(this, a3);
      v20 = a3->vtbl->GetAnimData(a3);
      if ( v20 )
      {
        if ( sub_472EA0(v20) )
          ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))(*this)->member.baseExtraList.members.m_data)(
            this,
            a3);
      }
    }
  }
  else
  {
    v14 = sub_566A40((char **)v5, (Actor *)a3);
    sub_566B30(v5, (int)v22, (Actor *)a3);
    if ( *((_BYTE *)this + 0xD0) )
    {
      v15 = *this;
      WorldSpace = TESObjectREFR_GetWorldSpace(a3);
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))v15[0xB].member.super.modlist.next)(
        this,
        a3,
        v22[0],
        v22[1],
        v22[2],
        v14,
        WorldSpace);
    }
    else
    {
      v17 = a3->vtbl->GetAnimData(a3);
      if ( v17 )
      {
        if ( !sub_472EA0(v17) )
          ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))(*this)[0x10].member.super.modlist.next)(this, a3);
      }
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*this)[6].member.rot.z))(this, a3, 0x201);
      v18 = *this;
      v19 = TESObjectREFR_GetWorldSpace(a3);
      (*(void (__thiscall **)(TESObjectREFR **, TESObjectREFR *, _DWORD *, TESObjectCELL *, TESWorldSpace *, float))v18[0xB].member.baseExtraList.members.m_presenceBitfield)(
        this,
        a3,
        v22,
        v14,
        v19,
        COERCE_FLOAT(LODWORD(v23)));
    }
  }
}
