void __userpurge sub_64D530(TESObjectREFR **this@<ecx>, double a2@<st1>, TESObjectREFR *a3)
{
  TESPackage *v5; // ebx
  Atmosphere *target; // ecx
  double v7; // st7
  int v8; // eax
  TESObjectREFR *v9; // eax
  void *v10; // eax
  _DWORD *v11; // edi
  void *v12; // eax
  char v13; // al
  TESObjectCELL *v14; // ebp
  TESObjectREFR *v15; // ebx
  TESWorldSpace *WorldSpace; // eax
  TESObjectREFR *v17; // ebx
  TESWorldSpace *v18; // eax
  _DWORD v19[3]; // [esp+24h] [ebp-Ch] BYREF
  float v20; // [esp+34h] [ebp+4h]

  v5 = (TESPackage *)((int (__thiscall *)(TESObjectREFR **))LODWORD((*this)[4].member.rot.y))(this);
  if ( !*(this + 0xB) )
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[0xF].member.pos[1]))(this, a3);
  ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[0xF].member.pos[2]))(this, a3);
  target = (Atmosphere *)v5->members.target;
  if ( target )
  {
    v7 = (double)(int)sub_452A60(target);
  }
  else
  {
    sub_566DB0(v5);
    v7 = (double)v8;
    if ( v8 < 0 )
      v7 = v7 + flt_A2FC78;
  }
  v9 = *(this + 0xB);
  v20 = v7;
  if ( v9 && (a2 = v20, v20 < TesObjectREF_GetDistance(a3, v9, 0)) )
  {
    ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int, int, _DWORD, _DWORD))a3->vtbl[1].GetBaseForm)(
      a3,
      a3,
      1,
      1,
      0,
      0);
    v10 = (void *)((int (__thiscall *)(TESObjectREFR **))LODWORD((*this)[4].member.rot.y))(this);
    v11 = OblivionDynamicCast(
            v10,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
            &FleePackage `RTTI Type Descriptor',
            0);
    v12 = OblivionDynamicCast(
            *(this + 0xB),
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
    if ( v11 )
    {
      if ( v12 )
        sub_626C90(v11, (int)v12);
    }
  }
  else if ( *(this + 0xB) || (sub_566DC0(v5, flt_A30634, a2, (Actor *)a3, 0, flt_A30634), v13) )
  {
    if ( !*((_BYTE *)this + 0xD0) )
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[4].member.pos[2]))(this, a3);
  }
  else
  {
    v14 = sub_566A40((char **)v5, (Actor *)a3);
    sub_566B30(v5, (int)v19, (Actor *)a3);
    if ( *((_BYTE *)this + 0xD0) )
    {
      v15 = *this;
      WorldSpace = TESObjectREFR_GetWorldSpace(a3);
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))v15[0xB].member.super.modlist.next)(
        this,
        a3,
        v19[0],
        v19[1],
        v19[2],
        v14,
        WorldSpace);
    }
    else
    {
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*this)[6].member.rot.z))(this, a3, 0x201);
      v17 = *this;
      v18 = TESObjectREFR_GetWorldSpace(a3);
      (*(void (__thiscall **)(TESObjectREFR **, TESObjectREFR *, _DWORD *, TESObjectCELL *, TESWorldSpace *, float))v17[0xB].member.baseExtraList.members.m_presenceBitfield)(
        this,
        a3,
        v19,
        v14,
        v18,
        COERCE_FLOAT(LODWORD(v20)));
    }
  }
}
