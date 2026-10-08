bool __thiscall sub_4B4780(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  int v6; // eax
  int v7; // ecx

  v3 = (TESForm *)OblivionDynamicCast( /*0x4b4797*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectAPPA `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4b479c*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x4b47af*/
    return 1; /*0x4b47a9*/
  v6 = *((unsigned __int8 *)this + 0x78) - LOBYTE(v4[5].vtbl); /*0x4b47c0*/
  if ( v6 ) /*0x4b47c2*/
  {
    v7 = 1; /*0x4b47c6*/
    if ( v6 <= 0 ) /*0x4b47cb*/
      return 1; /*0x4b47d7*/
  }
  else
  {
    v7 = 0; /*0x4b47da*/
  }
  return v7 != 0; /*0x4b47a5*/
}
