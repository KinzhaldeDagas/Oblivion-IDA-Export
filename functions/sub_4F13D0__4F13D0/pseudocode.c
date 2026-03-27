TESForm *__thiscall sub_4F13D0(TESForm *this, void *arg0)
{
  TESForm *result; // eax
  TESForm *v4; // edi
  int data; // eax
  TESWorldSpace *v6; // ecx
  TESWaterForm *WaterFormParents; // eax
  int v8; // ecx
  UInt32 *p_refID; // eax
  _DWORD *v10; // ecx
  TESFormVtbl *vtbl; // edx
  void (__thiscall *ClearComponentReferences)(BaseFormComponent *); // ecx
  unsigned int v13; // eax
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // edx
  void (__thiscall *v15)(BaseFormComponent *, BaseFormComponent *); // ebx
  NiTMap_TESCELL *v16; // ecx
  NiTMap_Entry_TESCELL *v17; // [esp+8h] [ebp-8h] BYREF
  int a2; // [esp+Ch] [ebp-4h] BYREF

  result = (TESForm *)OblivionDynamicCast(
                        arg0,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESWorldSpace `RTTI Type Descriptor',
                        0);
  v4 = result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, result);
    *((_BYTE *)this + 0x5C) = v4[3].member.modlist.next;
    *((_DWORD *)this + 0x1F) = *(_DWORD *)&v4[5].member.type;
    if ( *(_DWORD *)&v4[5].member.type )
      data = sub_4EF7A0(*(_DWORD *)&v4[5].member.type);
    else
      data = (int)v4[3].member.modlist.data;
    *((_DWORD *)this + 0x16) = data;
    v6 = *(TESWorldSpace **)&v4[5].member.type;
    if ( v6 )
    {
      WaterFormParents = TESWorldSpace::GetWaterFormParents(v6);
    }
    else
    {
      WaterFormParents = (TESWaterForm *)v4[5].member.flags;
      if ( !WaterFormParents )
        WaterFormParents = TESDataHandler_g_DefaultWater;
    }
    *((_DWORD *)this + 0x20) = WaterFormParents;
    v8 = *(_DWORD *)&v4[5].member.type;
    if ( v8 )
      p_refID = (UInt32 *)sub_4EF1B0(v8);
    else
      p_refID = &v4[5].member.refID;
    *((_DWORD *)this + 0x21) = *p_refID;
    *((_DWORD *)this + 0x22) = p_refID[1];
    *((_DWORD *)this + 0x23) = p_refID[2];
    v10 = *((_DWORD **)this + 0xC);
    *((_DWORD *)this + 0x24) = p_refID[3];
    *((_DWORD *)this + 0x25) = *(_DWORD *)&v4[6].member.type;
    NiTMap_Clear(v10);
    vtbl = v4[2].vtbl;
    ClearComponentReferences = vtbl->super.ClearComponentReferences;
    v13 = 0;
    if ( ClearComponentReferences )
    {
      CopyFromBase = vtbl->super.CopyFromBase;
      v15 = CopyFromBase;
      while ( !*(_DWORD *)v15 )
      {
        ++v13;
        v15 = (void (__thiscall *)(BaseFormComponent *, BaseFormComponent *))((char *)v15 + 4);
        if ( v13 >= (unsigned int)ClearComponentReferences )
          goto LABEL_16;
      }
      result = *((TESForm **)CopyFromBase + v13);
    }
    else
    {
LABEL_16:
      result = 0;
    }
    v17 = (NiTMap_Entry_TESCELL *)result;
    if ( result )
    {
      do
      {
        v16 = (NiTMap_TESCELL *)v4[2].vtbl;
        arg0 = 0;
        sub_452600(v16, &v17, (void **)&a2, (TESObjectCELL **)&arg0);
        result = (TESForm *)NiTMap_SetAt(*((_DWORD **)this + 0xC), a2, (int)arg0);
      }
      while ( v17 );
    }
  }
  return result;
}
