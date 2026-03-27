void __thiscall TESObjectCONT_LinkForm(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  void *v4; // eax
  const char *v5; // eax
  Data *v6; // eax
  TESForm *v7; // eax
  void *v8; // eax
  const char *v9; // eax
  int v10; // [esp+0h] [ebp-Ch]
  int v11; // [esp+0h] [ebp-Ch]
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)this + 0x58, this);
    TESContainer_LinkComponent((_BYTE *)this + 0x24, this);
    *(_DWORD *)ArgList = *((_DWORD *)this + 0x1C);
    if ( *(_DWORD *)ArgList )
    {
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
      v4 = OblivionDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0x1C) = v4;
      if ( !v4 )
      {
        v5 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID);
        PrintError("Could not find open sound (%08X) for container '%s' (%08X).", *(_DWORD *)ArgList, v5, v10);
      }
    }
    *(_DWORD *)ArgList = *((_DWORD *)this + 0x1D);
    if ( *(_DWORD *)ArgList )
    {
      v6 = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgList, v6);
      v7 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
      v8 = OblivionDynamicCast(
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0x1D) = v8;
      if ( !v8 )
      {
        v9 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID);
        PrintError("Could not find open sound (%08X) for container '%s' (%08X).", *(_DWORD *)ArgList, v9, v11);
      }
    }
    TESForm_SetIsLinked(this, 1);
  }
}
