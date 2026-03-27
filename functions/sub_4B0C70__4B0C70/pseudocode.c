void __thiscall sub_4B0C70(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  void *v4; // eax
  const char *v5; // eax
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)this + 0x54, this);
    if ( *((_DWORD *)this + 0x23) )
    {
      *(_DWORD *)ArgList = *((_DWORD *)this + 0x23);
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
      v4 = OblivionDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0x23) = v4;
      if ( !v4 )
      {
        v5 = this->vtbl->GetEditorName(this);
        PrintError("Unable to find sound (%08X) on object '%s'.", *(_DWORD *)ArgList, v5);
      }
    }
    TESForm_SetIsLinked(this, 1);
  }
}
