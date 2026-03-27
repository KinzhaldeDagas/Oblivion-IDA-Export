void __thiscall sub_4E1FD0(TESObjectCELL **this)
{
  int v2; // eax
  char v3; // al
  NiObject *v4; // eax
  NiObject *v5; // edi
  int Destructor; // ebp
  NiObject *v7; // eax
  int v8; // esi
  ExtraDataList *v9; // esi
  BSExtraDataVtbl *v10; // eax
  int v11; // eax
  TESObjectCELL *v12; // ecx
  int v13; // eax

  v2 = (int)*(this + 0x10);
  if ( v2 )
  {
    v3 = *(_BYTE *)(v2 + 0x26);
    if ( v3 != 6 && v3 != 5 )
      return;
  }
  v4 = (NiObject *)((int (__thiscall *)(TESObjectCELL **))(*this)[3].members.objectList.next)(this);
  v5 = v4;
  Destructor = (int)v4;
  if ( !v4 )
    return;
  v7 = NiRTTI_Cast(&stru_B35408, v4);
  if ( !v7 )
  {
    v8 = (int)v5->__vftable->Unk_02(v5);
    if ( !(*(unsigned __int8 (__thiscall **)(TESObjectCELL **))(*this)[4].members.extraData.members.m_presenceBitfield)(this)
      && !sub_4A05E0((int)v5) )
    {
      if ( v8 )
      {
        if ( *(_WORD *)(v8 + 0xB6) )
        {
          if ( sub_405790(v8, 0) )
          {
            Destructor = sub_405790(v8, 0);
            if ( !sub_4A05E0(Destructor) && *(_WORD *)(v8 + 0xB6) > 1u )
            {
              if ( sub_405790(v8, 1u) )
                Destructor = sub_405790(v8, 1u);
            }
          }
        }
      }
    }
LABEL_17:
    if ( Destructor )
    {
      v9 = (ExtraDataList *)*(this + 0x10);
      if ( v9 )
      {
        if ( TESObjectCELL_IsInterior(*(this + 0x10)) )
          v10 = sub_424180(v9 + 2);
        else
          v10 = (BSExtraDataVtbl *)bhkWorldM;
        if ( v10 )
        {
          (*((void (__thiscall **)(BSExtraDataVtbl *, int, NiObject *))v10->Destructor + 0x25))(v10, Destructor, v5);
          if ( ((unsigned int)*(this + 2) & 0x100) != 0 )
          {
            sub_88CF90(v5, 1u, 1, 1);
            *(this + 2) = (TESObjectCELL *)((unsigned int)*(this + 2) & 0xFFFFFEFF);
          }
          sub_4D8F20(this, v5);
        }
      }
      return;
    }
    goto LABEL_26;
  }
  if ( HIWORD(v7[0x16].members.m_uiRefCount) )
  {
    Destructor = (int)v7[0x16].__vftable->super.Destructor;
    goto LABEL_17;
  }
LABEL_26:
  v11 = (int)v5->__vftable->GetType(v5);
  if ( v11 )
  {
    while ( (BSStringT *)v11 != &BSTreeNode )
    {
      v11 = *(_DWORD *)(v11 + 4);
      if ( !v11 )
        return;
    }
    v12 = *(this + 0x10);
    if ( v12 )
    {
      sub_4440C0(v12);
      if ( v13 )
        (*(void (__thiscall **)(int, NiObject *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 0x90))(
          v13,
          v5,
          0,
          0,
          0,
          0);
    }
  }
}
