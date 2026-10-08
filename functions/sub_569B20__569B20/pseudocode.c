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

  if ( *(_BYTE *)this != 5 ) /*0x569b27*/
  {
    *(_DWORD *)ArgList = *(this + 2); /*0x569b39*/
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x569b3d*/
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x569b48*/
    if ( *(_BYTE *)this ) /*0x569b4d*/
    {
      if ( *(_BYTE *)this != 1 ) /*0x569b5f*/
      {
        if ( *(_BYTE *)this != 4 ) /*0x569b64*/
          return; /*0x569b64*/
        v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x569b6f*/
        if ( v4 ) /*0x569b79*/
        {
          if ( *(_BYTE *)this == 4 ) /*0x569b7e*/
            *(this + 2) = v4; /*0x569b85*/
          return; /*0x569b8a*/
        }
        if ( TESForm::GetEditorNameLen(a2) ) /*0x569b8f*/
        {
          v5 = a2->vtbl->GetEditorName(a2); /*0x569ba2*/
          PrintError("Unable to find Package Location Object (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v5); /*0x569baf*/
        }
        else
        {
          PrintError( /*0x569bcd*/
            "Unable to find Package Location Object (%08X) on owner object (%08X).",
            *(_DWORD *)ArgList,
            a2->member.refID);
        }
        v6 = *(_BYTE *)this == 4; /*0x569bb7*/
        goto LABEL_26; /*0x569bba*/
      }
      v7 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x569bf0*/
      v8 = OblivionDynamicCast( /*0x569bf9*/
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectCELL `RTTI Type Descriptor',
             0);
      if ( v8 ) /*0x569c03*/
      {
        if ( *(_BYTE *)this == 1 ) /*0x569c08*/
          *(this + 2) = v8; /*0x569c0f*/
        return; /*0x569c14*/
      }
      if ( TESForm::GetEditorNameLen(a2) ) /*0x569c19*/
      {
        v9 = a2->vtbl->GetEditorName(a2); /*0x569c2c*/
        PrintError("Unable to find Package Location Cell (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v9); /*0x569c39*/
      }
      else
      {
        PrintError( /*0x569c57*/
          "Unable to find Package Location Cell (%08X) on owner object (%08X).",
          *(_DWORD *)ArgList,
          a2->member.refID);
      }
      v6 = *(_BYTE *)this == 1; /*0x569c41*/
LABEL_26:
      if ( v6 ) /*0x569cd7*/
        *(this + 2) = 0; /*0x569cd9*/
      return; /*0x569cd9*/
    }
    v10 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x569c77*/
    v11 = OblivionDynamicCast( /*0x569c80*/
            v10,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
            0);
    if ( !v11 ) /*0x569c8a*/
    {
      if ( TESForm::GetEditorNameLen(a2) ) /*0x569c9c*/
      {
        v12 = a2->vtbl->GetEditorName(a2); /*0x569cb5*/
        PrintError("Unable to find Package Location Reference (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v12); /*0x569cbc*/
      }
      else
      {
        PrintError( /*0x569ccc*/
          "Unable to find Package Location Reference (%08X) on owner object (%08X).",
          *(_DWORD *)ArgList,
          a2->member.refID);
      }
      v6 = *(_BYTE *)this == 0; /*0x569cd4*/
      goto LABEL_26; /*0x569cd4*/
    }
    if ( !*(_BYTE *)this ) /*0x569c8c*/
      *(this + 2) = v11; /*0x569c92*/
  }
}
