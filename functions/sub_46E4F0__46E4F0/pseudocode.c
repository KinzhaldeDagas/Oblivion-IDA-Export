void *__thiscall sub_46E4F0(_DWORD *this, TESForm *a2)
{
  void *result; // eax
  Data *OverrideFile; // eax
  TESForm *v5; // eax
  const char *v6; // eax
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  result = (void *)*(this + 1); /*0x46e4f4*/
  if ( result ) /*0x46e4f9*/
  {
    *(_DWORD *)ArgList = *(this + 1); /*0x46e508*/
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x46e50c*/
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x46e517*/
    v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x46e532*/
    result = OblivionDynamicCast( /*0x46e53b*/
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESRace `RTTI Type Descriptor',
               0);
    *(this + 1) = result; /*0x46e545*/
    if ( !result ) /*0x46e548*/
    {
      if ( a2 ) /*0x46e54c*/
      {
        if ( TESForm::GetEditorNameLen(a2) ) /*0x46e550*/
        {
          v6 = a2->vtbl->GetEditorName(a2); /*0x46e563*/
          return (void *)PrintError("Unable to find race (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v6); /*0x46e570*/
        }
        else
        {
          return (void *)PrintError( /*0x46e58c*/
                           "Unable to find race (%08X) on owner object (%08X).",
                           *(_DWORD *)ArgList,
                           a2->member.refID);
        }
      }
      else
      {
        return (void *)PrintError("Unable to find race (%08X) on unknown owner.", *(_DWORD *)ArgList); /*0x46e5a4*/
      }
    }
  }
  return result; /*0x46e579*/
}
