void __thiscall sub_4E1FD0(ExtraDataList **this)
{
  int v2; // eax
  char v3; // al
  NiObject *v4; // eax
  NiObjectNET *v5; // edi
  NiAVObject *ChildAtIndex; // ebp
  NiObject *v7; // eax
  NiNode *v8; // esi
  ExtraDataList *v9; // esi
  BSExtraDataVtbl *v10; // eax
  NiRTTI *v11; // eax
  TESObjectCELL *v12; // ecx
  int v13; // eax

  v2 = (int)*(this + 0x10); /*0x4e1fd3*/
  if ( v2 ) /*0x4e1fd8*/
  {
    v3 = *(_BYTE *)(v2 + 0x26); /*0x4e1fda*/
    if ( v3 != 6 && v3 != 5 ) /*0x4e1fe3*/
      return; /*0x4e1fe3*/
  }
  v4 = (NiObject *)((int (__thiscall *)(ExtraDataList **))(*this)[0x11].vtbl)(this); /*0x4e1ff3*/
  v5 = (NiObjectNET *)v4; /*0x4e1ff5*/
  ChildAtIndex = (NiAVObject *)v4; /*0x4e1ff9*/
  if ( !v4 ) /*0x4e1ffb*/
    return; /*0x4e1ffb*/
  v7 = NiRTTI_Cast((BSStringT *)&stru_B35408, v4); /*0x4e2008*/
  if ( !v7 ) /*0x4e2012*/
  {
    v8 = (NiNode *)(*((int (__thiscall **)(NiObjectNET *))v5->vtbl + 2))(v5); /*0x4e2037*/
    if ( !((unsigned __int8 (__thiscall *)(ExtraDataList **))(*this)[0x14].vtbl)(this) && !sub_4A05E0((int)v5) ) /*0x4e2048*/
    {
      if ( v8 ) /*0x4e2056*/
      {
        if ( v8->members.children.end ) /*0x4e2058*/
        {
          if ( NiNode_GetChildAtIndex(v8, 0) ) /*0x4e2064*/
          {
            ChildAtIndex = NiNode_GetChildAtIndex(v8, 0); /*0x4e2076*/
            if ( !sub_4A05E0((int)ChildAtIndex) && v8->members.children.end > 1u ) /*0x4e208d*/
            {
              if ( NiNode_GetChildAtIndex(v8, 1u) ) /*0x4e2093*/
                ChildAtIndex = NiNode_GetChildAtIndex(v8, 1u); /*0x4e20a5*/
            }
          }
        }
      }
    }
LABEL_17:
    if ( ChildAtIndex ) /*0x4e20a9*/
    {
      v9 = *(this + 0x10); /*0x4e20ab*/
      if ( v9 ) /*0x4e20b0*/
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)*(this + 0x10)) ) /*0x4e20b8*/
          v10 = sub_424180(v9 + 2); /*0x4e20c4*/
        else
          v10 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4e20cb*/
        if ( v10 ) /*0x4e20d2*/
        {
          (*((void (__thiscall **)(BSExtraDataVtbl *, NiAVObject *, NiObjectNET *))v10->Destructor + 0x25))( /*0x4e20e4*/
            v10,
            ChildAtIndex,
            v5);
          if ( ((unsigned int)*(this + 2) & 0x100) != 0 ) /*0x4e20ed*/
          {
            sub_88CF90(v5, 1u, 1, 1); /*0x4e20f6*/
            *(this + 2) = (ExtraDataList *)((unsigned int)*(this + 2) & 0xFFFFFEFF); /*0x4e20fe*/
          }
          sub_4D8F20(this, v5); /*0x4e2108*/
        }
      }
      return; /*0x4e2111*/
    }
    goto LABEL_26; /*0x4e20a9*/
  }
  if ( HIWORD(v7[0x16].members.m_uiRefCount) ) /*0x4e2014*/
  {
    ChildAtIndex = (NiAVObject *)v7[0x16].__vftable->super.Destructor; /*0x4e2028*/
    goto LABEL_17; /*0x4e202a*/
  }
LABEL_26:
  v11 = (NiRTTI *)(*((int (__thiscall **)(NiObjectNET *))v5->vtbl + 1))(v5); /*0x4e2112*/
  if ( v11 ) /*0x4e211d*/
  {
    while ( v11 != &MEMORY[0xB3A02C] ) /*0x4e2125*/
    {
      v11 = v11->parent; /*0x4e2127*/
      if ( !v11 ) /*0x4e212c*/
        return; /*0x4e212c*/
    }
    v12 = (TESObjectCELL *)*(this + 0x10); /*0x4e2133*/
    if ( v12 ) /*0x4e2138*/
    {
      sub_4440C0(v12); /*0x4e213a*/
      if ( v13 ) /*0x4e2141*/
        (*(void (__thiscall **)(int, NiObjectNET *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 0x90))( /*0x4e2156*/
          v13,
          v5,
          0,
          0,
          0,
          0);
    }
  }
}
