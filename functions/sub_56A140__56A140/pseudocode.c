TESForm *__thiscall sub_56A140(_DWORD *this, TESForm *a2)
{
  Data *OverrideFile; // eax
  TESForm *result; // eax
  const char *v5; // eax
  TESForm *v6; // eax
  const char *v7; // eax
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)ArgList = *(this + 1); /*0x56a150*/
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x56a154*/
  TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x56a15f*/
  if ( *(_BYTE *)this ) /*0x56a164*/
  {
    result = (TESForm *)(*(unsigned __int8 *)this - 1); /*0x56a173*/
    if ( *(_BYTE *)this == 1 ) /*0x56a176*/
    {
      result = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x56a181*/
      *(this + 1) = result; /*0x56a18b*/
      if ( !result ) /*0x56a18e*/
      {
        if ( a2 ) /*0x56a196*/
        {
          if ( TESForm::GetEditorNameLen(a2) ) /*0x56a19a*/
          {
            v5 = a2->vtbl->GetEditorName(a2); /*0x56a1ad*/
            return (TESForm *)PrintError( /*0x56a1ba*/
                                "Unable to find Package Target Object (%08X) on owner object \"%s\".",
                                *(_DWORD *)ArgList,
                                v5);
          }
          else
          {
            return (TESForm *)PrintError( /*0x56a1d6*/
                                "Unable to find Package Target Object (%08X) on owner object (%08X).",
                                *(_DWORD *)ArgList,
                                a2->member.refID);
          }
        }
        else
        {
          return (TESForm *)PrintError( /*0x56a1ee*/
                              "Unable to find Package Target Object (%08X) on unknown owner.",
                              *(_DWORD *)ArgList);
        }
      }
    }
  }
  else
  {
    v6 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x56a20f*/
    result = (TESForm *)OblivionDynamicCast( /*0x56a218*/
                          v6,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
    *(this + 1) = result; /*0x56a222*/
    if ( !result ) /*0x56a225*/
    {
      if ( a2 ) /*0x56a229*/
      {
        if ( TESForm::GetEditorNameLen(a2) ) /*0x56a22d*/
        {
          v7 = a2->vtbl->GetEditorName(a2); /*0x56a240*/
          return (TESForm *)PrintError( /*0x56a24d*/
                              "Unable to find Package Target Reference (%08X) on owner object \"%s\".",
                              *(_DWORD *)ArgList,
                              v7);
        }
        else
        {
          return (TESForm *)PrintError( /*0x56a269*/
                              "Unable to find Package Target Reference (%08X) on owner object (%08X).",
                              *(_DWORD *)ArgList,
                              a2->member.refID);
        }
      }
      else
      {
        return (TESForm *)PrintError( /*0x56a281*/
                            "Unable to find Package Target Reference (%08X) on unknown owner.",
                            *(_DWORD *)ArgList);
      }
    }
  }
  return result; /*0x56a1c2*/
}
