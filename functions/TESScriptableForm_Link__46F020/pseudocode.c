void __thiscall TESScriptableForm_Link(int this, TESForm *a2)
{
  Data *OverrideFile; // eax
  TESForm *v4; // eax
  void *v5; // eax
  const char *v6; // eax
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 8) )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      *(_DWORD *)ArgList = *(_DWORD *)(this + 4);
      OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
      v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
      v5 = OblivionDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &Script `RTTI Type Descriptor',
             0);
      *(_DWORD *)(this + 4) = v5;
      if ( !v5 )
      {
        if ( a2 )
        {
          if ( TESForm::GetEditorNameLen(a2) )
          {
            v6 = a2->vtbl->GetEditorName(a2);
            PrintError("Unable to find script (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v6);
          }
          else
          {
            PrintError("Unable to find script (%08X) on owner object (%08X).", *(_DWORD *)ArgList, a2->member.refID);
          }
          *(_BYTE *)(this + 8) = 1;
          return;
        }
        PrintError("Unable to find script (%08X) on unknown owner.", *(_DWORD *)ArgList);
      }
    }
    *(_BYTE *)(this + 8) = 1;
  }
}
