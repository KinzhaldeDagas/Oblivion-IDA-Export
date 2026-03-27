void *__thiscall sub_52B340(UInt32 *this, TESForm *a2)
{
  Data *OverrideFile; // eax
  TESForm *v4; // eax
  void *result; // eax
  UInt32 refID; // ebx
  const char *v7; // eax
  UInt32 v8; // ebx
  const char *v9; // eax
  char ArgList[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( *(this + 3) )
  {
    *(_DWORD *)ArgList = *(this + 3);
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
    v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
    result = OblivionDynamicCast(
               v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
    *(this + 3) = (UInt32)result;
    if ( !result )
    {
      refID = a2->member.refID;
      v7 = a2->vtbl->GetEditorName(a2);
      result = (void *)PrintError(
                         "Could not find target reference (%08X) on quest (%08X) '%s'.",
                         *(_DWORD *)ArgList,
                         refID,
                         v7);
    }
  }
  else
  {
    v8 = a2->member.refID;
    v9 = a2->vtbl->GetEditorName(a2);
    result = (void *)PrintError("No reference on target for quest (%08X) '%s'.", v8, v9);
  }
  if ( this != (UInt32 *)0xFFFFFFFC )
    return (void *)sub_56A480(this + 1, a2);
  return result;
}
