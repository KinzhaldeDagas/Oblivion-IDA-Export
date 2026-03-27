TESForm *__thiscall sub_56A140(_DWORD *this, TESForm *a2)
{
  Data *OverrideFile; // eax
  TESForm *result; // eax
  const char *v5; // eax
  TESForm *v6; // eax
  const char *v7; // eax
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)ArgList = *(this + 1);
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
  if ( *(_BYTE *)this )
  {
    result = (TESForm *)(*(unsigned __int8 *)this - 1);
    if ( *(_BYTE *)this == 1 )
    {
      result = TESForm_LookupByFormID(*(UInt32 *)ArgList);
      *(this + 1) = result;
      if ( !result )
      {
        if ( a2 )
        {
          if ( TESForm::GetEditorNameLen(a2) )
          {
            v5 = a2->vtbl->GetEditorName(a2);
            return (TESForm *)PrintError(
                                "Unable to find Package Target Object (%08X) on owner object \"%s\".",
                                *(_DWORD *)ArgList,
                                v5);
          }
          else
          {
            return (TESForm *)PrintError(
                                "Unable to find Package Target Object (%08X) on owner object (%08X).",
                                *(_DWORD *)ArgList,
                                a2->member.refID);
          }
        }
        else
        {
          return (TESForm *)PrintError(
                              "Unable to find Package Target Object (%08X) on unknown owner.",
                              *(_DWORD *)ArgList);
        }
      }
    }
  }
  else
  {
    v6 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
    result = (TESForm *)OblivionDynamicCast(
                          v6,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
    *(this + 1) = result;
    if ( !result )
    {
      if ( a2 )
      {
        if ( TESForm::GetEditorNameLen(a2) )
        {
          v7 = a2->vtbl->GetEditorName(a2);
          return (TESForm *)PrintError(
                              "Unable to find Package Target Reference (%08X) on owner object \"%s\".",
                              *(_DWORD *)ArgList,
                              v7);
        }
        else
        {
          return (TESForm *)PrintError(
                              "Unable to find Package Target Reference (%08X) on owner object (%08X).",
                              *(_DWORD *)ArgList,
                              a2->member.refID);
        }
      }
      else
      {
        return (TESForm *)PrintError(
                            "Unable to find Package Target Reference (%08X) on unknown owner.",
                            *(_DWORD *)ArgList);
      }
    }
  }
  return result;
}
