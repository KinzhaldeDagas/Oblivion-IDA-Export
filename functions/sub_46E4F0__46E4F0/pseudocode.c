void *__thiscall sub_46E4F0(_DWORD *this, TESForm *a2)
{
  void *result; // eax
  Data *OverrideFile; // eax
  TESForm *v5; // eax
  const char *v6; // eax
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  result = (void *)*(this + 1);
  if ( result )
  {
    *(_DWORD *)ArgList = *(this + 1);
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
    v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
    result = OblivionDynamicCast(
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESRace `RTTI Type Descriptor',
               0);
    *(this + 1) = result;
    if ( !result )
    {
      if ( a2 )
      {
        if ( TESForm::GetEditorNameLen(a2) )
        {
          v6 = a2->vtbl->GetEditorName(a2);
          return (void *)PrintError("Unable to find race (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v6);
        }
        else
        {
          return (void *)PrintError(
                           "Unable to find race (%08X) on owner object (%08X).",
                           *(_DWORD *)ArgList,
                           a2->member.refID);
        }
      }
      else
      {
        return (void *)PrintError("Unable to find race (%08X) on unknown owner.", *(_DWORD *)ArgList);
      }
    }
  }
  return result;
}
