void *__thiscall sub_46E220(_DWORD *this, TESForm *a2)
{
  void *result; // eax
  Data *OverrideFile; // eax
  TESForm *v5; // eax
  const char *v6; // eax
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  result = (void *)*(this + 1); /*0x46e224*/
  if ( result ) /*0x46e229*/
  {
    *(_DWORD *)ArgList = *(this + 1); /*0x46e238*/
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x46e23c*/
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x46e247*/
    v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x46e262*/
    result = OblivionDynamicCast( /*0x46e26b*/
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &IngredientItem `RTTI Type Descriptor',
               0);
    *(this + 1) = result; /*0x46e275*/
    if ( !result ) /*0x46e278*/
    {
      if ( a2 ) /*0x46e27c*/
      {
        if ( TESForm::GetEditorNameLen(a2) ) /*0x46e280*/
        {
          v6 = a2->vtbl->GetEditorName(a2); /*0x46e293*/
          return (void *)PrintError("Unable to find ingredient (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v6); /*0x46e2a0*/
        }
        else
        {
          return (void *)PrintError( /*0x46e2bc*/
                           "Unable to find ingredient (%08X) on owner object (%08X).",
                           *(_DWORD *)ArgList,
                           a2->member.refID);
        }
      }
      else
      {
        return (void *)PrintError("Unable to find ingredient (%08X) on unknown owner.", *(_DWORD *)ArgList); /*0x46e2d4*/
      }
    }
  }
  return result; /*0x46e2a9*/
}
