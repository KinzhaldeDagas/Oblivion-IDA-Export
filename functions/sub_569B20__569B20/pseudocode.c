void __thiscall sub_569B20(_DWORD *this, TESForm *a2)
{
  Data *OverrideFile; // eax
  TESForm *v4; // eax
  const char *v5; // eax
  bool v6; // zf
  TESForm *v7; // eax
  void *v8; // eax
  const char *v9; // eax
  TESForm *v10; // eax
  void *v11; // eax
  const char *v12; // [esp-8h] [ebp-10h]
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( *(_BYTE *)this != 5 )
  {
    *(_DWORD *)ArgList = *(this + 2);
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
    if ( *(_BYTE *)this )
    {
      if ( *(_BYTE *)this != 1 )
      {
        if ( *(_BYTE *)this != 4 )
          return;
        v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        if ( v4 )
        {
          if ( *(_BYTE *)this == 4 )
            *(this + 2) = v4;
          return;
        }
        if ( TESForm::GetEditorNameLen(a2) )
        {
          v5 = a2->vtbl->GetEditorName(a2);
          PrintError("Unable to find Package Location Object (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v5);
        }
        else
        {
          PrintError(
            "Unable to find Package Location Object (%08X) on owner object (%08X).",
            *(_DWORD *)ArgList,
            a2->member.refID);
        }
        v6 = *(_BYTE *)this == 4;
        goto LABEL_26;
      }
      v7 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
      v8 = OblivionDynamicCast(
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectCELL `RTTI Type Descriptor',
             0);
      if ( v8 )
      {
        if ( *(_BYTE *)this == 1 )
          *(this + 2) = v8;
        return;
      }
      if ( TESForm::GetEditorNameLen(a2) )
      {
        v9 = a2->vtbl->GetEditorName(a2);
        PrintError("Unable to find Package Location Cell (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v9);
      }
      else
      {
        PrintError(
          "Unable to find Package Location Cell (%08X) on owner object (%08X).",
          *(_DWORD *)ArgList,
          a2->member.refID);
      }
      v6 = *(_BYTE *)this == 1;
LABEL_26:
      if ( v6 )
        *(this + 2) = 0;
      return;
    }
    v10 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
    v11 = OblivionDynamicCast(
            v10,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
            0);
    if ( !v11 )
    {
      if ( TESForm::GetEditorNameLen(a2) )
      {
        v12 = a2->vtbl->GetEditorName(a2);
        PrintError("Unable to find Package Location Reference (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v12);
      }
      else
      {
        PrintError(
          "Unable to find Package Location Reference (%08X) on owner object (%08X).",
          *(_DWORD *)ArgList,
          a2->member.refID);
      }
      v6 = *(_BYTE *)this == 0;
      goto LABEL_26;
    }
    if ( !*(_BYTE *)this )
      *(this + 2) = v11;
  }
}
