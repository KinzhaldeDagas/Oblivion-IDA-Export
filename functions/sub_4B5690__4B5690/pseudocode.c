bool __thiscall sub_4B5690(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  int v6; // eax
  int v7; // ecx

  v3 = (TESForm *)OblivionDynamicCast( /*0x4b56a7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectBOOK `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4b56ac*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x4b56bf*/
    return 1; /*0x4b56b9*/
  v6 = *((unsigned __int8 *)this + 0x88) - LOBYTE(v4[5].member.modlist.data); /*0x4b56d8*/
  if ( v6 || (v6 = *((unsigned __int8 *)this + 0x89) - BYTE1(v4[5].member.modlist.data)) != 0 ) /*0x4b56f1*/
  {
    v7 = 1; /*0x4b56f5*/
    if ( v6 <= 0 ) /*0x4b56fa*/
      return 1; /*0x4b5706*/
  }
  else
  {
    v7 = 0; /*0x4b5709*/
  }
  return v7 != 0; /*0x4b56b5*/
}
