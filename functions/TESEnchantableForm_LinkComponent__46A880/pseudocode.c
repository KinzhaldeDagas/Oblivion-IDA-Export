char __thiscall TESEnchantableForm_LinkComponent(_DWORD *this, TESForm *a2)
{
  void *v3; // eax
  Data *OverrideFile; // eax
  TESForm *v6; // eax
  const char *v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // ebx
  UInt32 refID; // ebp
  const char *v11; // eax
  const char *v12; // eax
  int v14; // [esp-14h] [ebp-1Ch]
  const char *v15; // [esp-10h] [ebp-18h]
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF
  TESForm *v17; // [esp+Ch] [ebp+4h]

  v3 = (void *)*(this + 1); /*0x46a884*/
  if ( v3 ) /*0x46a889*/
  {
    *(_DWORD *)ArgList = *(this + 1); /*0x46a896*/
    if ( a2 ) /*0x46a89a*/
    {
      OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x46a8a0*/
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x46a8ab*/
    }
    v6 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x46a8c6*/
    v3 = OblivionDynamicCast( /*0x46a8cf*/
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &EnchantmentItem `RTTI Type Descriptor',
           0);
    *(this + 1) = v3; /*0x46a8d9*/
    if ( !v3 ) /*0x46a8dc*/
    {
      if ( a2 ) /*0x46a8e0*/
      {
        if ( TESForm::GetEditorNameLen(a2) ) /*0x46a8e4*/
        {
          v7 = a2->vtbl->GetEditorName(a2); /*0x46a8f7*/
          LOBYTE(v3) = PrintError("Unable to find enchanting (%08X) on owner object \"%s\".", *(_DWORD *)ArgList, v7); /*0x46a904*/
        }
        else
        {
          LOBYTE(v3) = PrintError( /*0x46a91c*/
                         "Unable to find enchanting (%08X) on owner object (%08X).",
                         *(_DWORD *)ArgList,
                         a2->member.refID);
        }
      }
      else
      {
        LOBYTE(v3) = PrintError("Unable to find enchanting (%08X) on unknown owner.", *(_DWORD *)ArgList); /*0x46a930*/
      }
    }
    v8 = (_DWORD *)*(this + 1); /*0x46a938*/
    if ( v8 ) /*0x46a93d*/
    {
      if ( a2 ) /*0x46a941*/
      {
        LOBYTE(v3) = sub_4190C0(v8, a2); /*0x46a944*/
        if ( !(_BYTE)v3 ) /*0x46a94b*/
        {
          v9 = (_DWORD *)*(this + 1); /*0x46a954*/
          v17 = (TESForm *)v9[3]; /*0x46a958*/
          refID = a2->member.refID; /*0x46a963*/
          v11 = a2->vtbl->GetEditorName(a2); /*0x46a968*/
          v12 = (const char *)(*(int (__thiscall **)(_DWORD *, UInt32, const char *))(*v9 + 0xD4))(v9, refID, v11); /*0x46a976*/
          LOBYTE(v3) = PrintError( /*0x46a983*/
                         "Enchanting (%08X) '%s' has invalid cast type or magic effect for object (%08X) '%s'.",
                         v17,
                         v12,
                         v14,
                         v15);
          *(this + 1) = 0; /*0x46a98c*/
        }
      }
    }
  }
  return (char)v3; /*0x46a995*/
}
