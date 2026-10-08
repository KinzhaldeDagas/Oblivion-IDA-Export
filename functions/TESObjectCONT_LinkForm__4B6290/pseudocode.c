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

  if ( (this->member.flags & 8) == 0 ) /*0x4b629c*/
  {
    TESScriptableForm_Link((int)this + 0x58, this); /*0x4b62a6*/
    TESContainer_LinkComponent((_BYTE *)this + 0x24, this); /*0x4b62af*/
    *(_DWORD *)ArgList = *((_DWORD *)this + 0x1C); /*0x4b62b9*/
    if ( *(_DWORD *)ArgList ) /*0x4b62bd*/
    {
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4b62c3*/
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4b62ce*/
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4b62e9*/
      v4 = OblivionDynamicCast( /*0x4b62f2*/
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0x1C) = v4; /*0x4b62fc*/
      if ( !v4 ) /*0x4b62ff*/
      {
        v5 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID); /*0x4b630f*/
        PrintError("Could not find open sound (%08X) for container '%s' (%08X).", *(_DWORD *)ArgList, v5, v10); /*0x4b631c*/
      }
    }
    *(_DWORD *)ArgList = *((_DWORD *)this + 0x1D); /*0x4b6329*/
    if ( *(_DWORD *)ArgList ) /*0x4b632d*/
    {
      v6 = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4b6333*/
      TESForm_ResolveFormID((UInt32 *)ArgList, v6); /*0x4b633e*/
      v7 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4b6359*/
      v8 = OblivionDynamicCast( /*0x4b6362*/
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0x1D) = v8; /*0x4b636c*/
      if ( !v8 ) /*0x4b636f*/
      {
        v9 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID); /*0x4b637f*/
        PrintError("Could not find open sound (%08X) for container '%s' (%08X).", *(_DWORD *)ArgList, v9, v11); /*0x4b638c*/
      }
    }
    TESForm_SetIsLinked(this, 1); /*0x4b6398*/
  }
}
