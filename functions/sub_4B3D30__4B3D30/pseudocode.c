void __thiscall sub_4B3D30(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  void *v4; // eax
  const char *v5; // eax
  int v6; // [esp-4h] [ebp-Ch]
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)(this + 3), this);
    *(_DWORD *)ArgList = *((_DWORD *)this + 0x15);
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
      *((_DWORD *)this + 0x15) = v4;
      if ( !v4 )
      {
        v5 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID);
        PrintError("Could not find open sound (%08X) for activator '%s' (%08X).", *(_DWORD *)ArgList, v5, v6);
      }
    }
    TESForm_SetIsLinked(this, 1);
  }
}
