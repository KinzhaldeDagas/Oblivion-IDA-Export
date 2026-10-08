void *__thiscall TESContainer_ItemEntry_Link(_DWORD *this, TESForm *a2)
{
  Data *OverrideFile; // eax
  TESForm *v4; // eax
  void *result; // eax
  const char *v6; // eax
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)ArgList = *(this + 1); /*0x4695e0*/
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x4695e4*/
  TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4695ef*/
  v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x46960a*/
  result = OblivionDynamicCast( /*0x469613*/
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
             0);
  *(this + 1) = result; /*0x46961d*/
  if ( !result ) /*0x469620*/
  {
    if ( a2 ) /*0x469624*/
    {
      if ( TESForm::GetEditorNameLen(a2) ) /*0x469628*/
      {
        v6 = a2->vtbl->GetEditorName(a2); /*0x46963b*/
        return (void *)PrintError( /*0x469648*/
                         "Unable to find container object (%08X) on owner object \"%s\".",
                         *(_DWORD *)ArgList,
                         v6);
      }
      else
      {
        return (void *)PrintError( /*0x469664*/
                         "Unable to find container object (%08X) on owner object (%08X).",
                         *(_DWORD *)ArgList,
                         a2->member.refID);
      }
    }
    else
    {
      return (void *)PrintError("Unable to find container object (%08X) on unknown owner.", *(_DWORD *)ArgList); /*0x46967c*/
    }
  }
  return result; /*0x469650*/
}
