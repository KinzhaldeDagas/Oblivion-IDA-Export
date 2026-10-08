void __thiscall sub_4B0C70(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  void *v4; // eax
  const char *v5; // eax
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 ) /*0x4b0c7c*/
  {
    TESScriptableForm_Link((int)this + 0x54, this); /*0x4b0c86*/
    if ( *((_DWORD *)this + 0x23) ) /*0x4b0c8b*/
    {
      *(_DWORD *)ArgList = *((_DWORD *)this + 0x23); /*0x4b0c99*/
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4b0c9d*/
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4b0ca8*/
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4b0cc3*/
      v4 = OblivionDynamicCast( /*0x4b0ccc*/
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0x23) = v4; /*0x4b0cd6*/
      if ( !v4 ) /*0x4b0cdc*/
      {
        v5 = this->vtbl->GetEditorName(this); /*0x4b0ce8*/
        PrintError("Unable to find sound (%08X) on object '%s'.", *(_DWORD *)ArgList, v5); /*0x4b0cf5*/
      }
    }
    TESForm_SetIsLinked(this, 1); /*0x4b0d01*/
  }
}
