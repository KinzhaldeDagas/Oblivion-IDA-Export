void __thiscall TESScriptableForm_Link(int this, TESForm *a2)
{                                               // The linked guard makes this routine process only the first SCRI call in one load; later SCRI chunks still overwrite the stored candidate in their record loader but skip linking.
  Data *OverrideFile; // eax
  TESForm *v4; // eax
  void *v5; // eax
  const char *v6; // eax
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 8) ) /*0x46f024*/
  {
    if ( *(_DWORD *)(this + 4) ) /*0x46f02e*/
    {
      *(_DWORD *)ArgList = *(_DWORD *)(this + 4); /*0x46f042*/
      OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x46f046*/
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x46f051*/
      v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x46f06c*/
      v5 = OblivionDynamicCast( /*0x46f075*/
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &Script `RTTI Type Descriptor',
             0);
      *(_DWORD *)(this + 4) = v5; /*0x46f07f*/
      if ( !v5 ) /*0x46f082*/
      {
        if ( a2 ) /*0x46f086*/
        {
          if ( TESForm::GetEditorNameLen(a2) ) /*0x46f08a*/
          {
            v6 = a2->vtbl->GetEditorName(a2); /*0x46f09d*/
            PrintError("Unable to find script (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v6); /*0x46f0aa*/
          }
          else
          {
            PrintError("Unable to find script (%08X) on owner object (%08X).", *(_DWORD *)ArgList, a2->member.refID); /*0x46f0ca*/
          }
          *(_BYTE *)(this + 8) = 1; /*0x46f0b3*/
          return; /*0x46f0b9*/
        }
        PrintError("Unable to find script (%08X) on unknown owner.", *(_DWORD *)ArgList); /*0x46f0e6*/
      }
    }
    *(_BYTE *)(this + 8) = 1; /*0x46f0ef*/
  }
}
