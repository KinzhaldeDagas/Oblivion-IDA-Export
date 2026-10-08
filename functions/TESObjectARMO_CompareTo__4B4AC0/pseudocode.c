bool __thiscall TESObjectARMO_CompareTo(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  int v6; // eax
  int v7; // ecx

  v3 = (TESForm *)OblivionDynamicCast( /*0x4b4ad7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectARMO `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4b4adc*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x4b4aef*/
    return 1; /*0x4b4ae9*/
  v6 = *((unsigned __int8 *)this + 0xE4) - LOBYTE(v4[9].member.refID); /*0x4b4b08*/
  if ( v6 || (v6 = *((unsigned __int8 *)this + 0xE5) - BYTE1(v4[9].member.refID)) != 0 ) /*0x4b4b21*/
  {
    v7 = 1; /*0x4b4b25*/
    if ( v6 <= 0 ) /*0x4b4b2a*/
      return 1; /*0x4b4b36*/
  }
  else
  {
    v7 = 0; /*0x4b4b39*/
  }
  return v7 != 0; /*0x4b4ae5*/
}
