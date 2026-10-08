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

  if ( *(this + 3) ) /*0x52b34a*/
  {
    *(_DWORD *)ArgList = *(this + 3); /*0x52b355*/
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x52b359*/
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x52b364*/
    v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x52b37f*/
    result = OblivionDynamicCast( /*0x52b388*/
               v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
    *(this + 3) = (UInt32)result; /*0x52b392*/
    if ( !result ) /*0x52b395*/
    {
      refID = a2->member.refID; /*0x52b39f*/
      v7 = a2->vtbl->GetEditorName(a2); /*0x52b3a4*/
      result = (void *)PrintError( /*0x52b3b2*/
                         "Could not find target reference (%08X) on quest (%08X) '%s'.",
                         *(_DWORD *)ArgList,
                         refID,
                         v7);
    }
  }
  else
  {
    v8 = a2->member.refID; /*0x52b3c4*/
    v9 = a2->vtbl->GetEditorName(a2); /*0x52b3c7*/
    result = (void *)PrintError("No reference on target for quest (%08X) '%s'.", v8, v9); /*0x52b3d0*/
  }
  if ( this != (UInt32 *)0xFFFFFFFC ) /*0x52b3dd*/
    return (void *)sub_56A480(this + 1, a2); /*0x52b3e0*/
  return result; /*0x52b3e5*/
}
