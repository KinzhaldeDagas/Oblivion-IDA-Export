void *__thiscall TESContainer_ItemEntry_Link(_DWORD *this, TESForm *a2)
{
  Data *OverrideFile; // eax
  TESForm *v4; // eax
  void *result; // eax
  const char *v6; // eax
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)ArgList = *(this + 1);
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
  v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
  result = OblivionDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
             0);
  *(this + 1) = result;
  if ( !result )
  {
    if ( a2 )
    {
      if ( TESForm::GetEditorNameLen(a2) )
      {
        v6 = a2->vtbl->GetEditorName(a2);
        return (void *)PrintError(
                         "Unable to find container object (%08X) on owner object \"%s\".",
                         *(_DWORD *)ArgList,
                         v6);
      }
      else
      {
        return (void *)PrintError(
                         "Unable to find container object (%08X) on owner object (%08X).",
                         *(_DWORD *)ArgList,
                         a2->member.refID);
      }
    }
    else
    {
      return (void *)PrintError("Unable to find container object (%08X) on unknown owner.", *(_DWORD *)ArgList);
    }
  }
  return result;
}
