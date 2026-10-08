char __stdcall sub_453A90(_BYTE *a1, TESForm *form, unsigned int changeFlags, char a4, char a5)
{
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // eax
  char v9[316]; // [esp+24h] [ebp-140h] BYREF

  *a1 = 0; /*0x453ac2*/
  if ( form ) /*0x453ac5*/
    changeFlags = SaveLoad_NormalizeFormChangeFlags(form, changeFlags); /*0x453ad5*/
  if ( !a5 ) /*0x453aec*/
  {
    if ( form ) /*0x453af0*/
      form->vtbl->GetSaveSize(form, 0); /*0x453afc*/
  }
  OblivionDynamicCast( /*0x453b14*/
    form,
    0,
    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
    0);
  v5 = OblivionDynamicCast( /*0x453b40*/
         form,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MobileObject `RTTI Type Descriptor',
         0);
  OblivionDynamicCast( /*0x453b42*/
    form,
    0,
    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
    &Actor `RTTI Type Descriptor',
    0);
  if ( !v5 ) /*0x453b50*/
    JUMPOUT(0x453D14); /*0x453d14*/
  v6 = v5[0x16]; /*0x453b56*/
  v7 = 0xFFFFFFFF; /*0x453b59*/
  if ( v6 ) /*0x453b5e*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x453b65*/
  switch ( v7 )
  {
    case 0xFFFFFFFF:
      if ( !a4 ) /*0x453b7e*/
        JUMPOUT(0x453C33); /*0x453c33*/
      _sprintf(v9, "Process Level: None\r\n");
      return def_453B6F(form, (__int16)a1, (int)form, changeFlags, a4, a5);
    case 0:
      JUMPOUT(0x453CE3); /*0x453ce3*/
    case 1:
      JUMPOUT(0x453CB2); /*0x453cb2*/
    case 2:
      JUMPOUT(0x453C81); /*0x453c81*/
    case 3:
      JUMPOUT(0x453C50); /*0x453c50*/
    default:
      JUMPOUT(0x453B96); /*0x453b96*/
  }
}
