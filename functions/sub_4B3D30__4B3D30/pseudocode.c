void __thiscall sub_4B3D30(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  void *v4; // eax
  const char *v5; // eax
  int v6; // [esp-4h] [ebp-Ch]
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 ) /*0x4b3d3c*/
  {
    TESScriptableForm_Link((int)(this + 3), this); /*0x4b3d46*/
    *(_DWORD *)ArgList = *((_DWORD *)this + 0x15); /*0x4b3d50*/
    if ( *(_DWORD *)ArgList ) /*0x4b3d54*/
    {
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4b3d5a*/
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4b3d65*/
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4b3d80*/
      v4 = OblivionDynamicCast( /*0x4b3d89*/
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0x15) = v4; /*0x4b3d93*/
      if ( !v4 ) /*0x4b3d96*/
      {
        v5 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID); /*0x4b3da6*/
        PrintError("Could not find open sound (%08X) for activator '%s' (%08X).", *(_DWORD *)ArgList, v5, v6); /*0x4b3db3*/
      }
    }
    TESForm_SetIsLinked(this, 1); /*0x4b3dbf*/
  }
}
