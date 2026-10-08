// Compare TESForm components, then compare exactly the fixed 0x34-byte TESClass DATA payload at +0x38. No additional major/minor storage participates.
bool __thiscall TESClass_CompareTo(TESClass *this, TESForm *other)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  unsigned int v6; // eax
  TESForm::FormFlags *p_flags; // ecx
  AttributeActorValue *attributes; // edx
  int v9; // esi
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  int v18; // eax

  v3 = (TESForm *)OblivionDynamicCast( /*0x51bf27*/
                    other,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESClass `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x51bf2c*/
  if ( !v3 || TESForm_CompareAllComponentsTo((TESForm *)this, v3) ) /*0x51bf3f*/
    return 1; /*0x51bf39*/
  v6 = 0x34; /*0x51bf48*/
  p_flags = &v4[2].member.flags; /*0x51bf4d*/
  attributes = this->members.attributes; /*0x51bf50*/
  do /*0x51bf65*/
  {
    if ( *attributes != *p_flags ) /*0x51bf57*/
      goto LABEL_8; /*0x51bf57*/
    v6 -= 4; /*0x51bf59*/
    ++p_flags; /*0x51bf5c*/
    ++attributes; /*0x51bf5f*/
  }
  while ( v6 >= 4 ); /*0x51bf65*/
  if ( !v6 ) /*0x51bf69*/
  {
LABEL_17:
    v18 = 0; /*0x51bfd0*/
    return v18 != 0; /*0x51bfd0*/
  }
LABEL_8:
  v9 = *(unsigned __int8 *)attributes - *(unsigned __int8 *)p_flags; /*0x51bf6b*/
  if ( !v9 ) /*0x51bf73*/
  {
    v10 = v6 - 1; /*0x51bf75*/
    v11 = (unsigned __int8 *)p_flags + 1; /*0x51bf78*/
    v12 = (unsigned __int8 *)attributes + 1; /*0x51bf7b*/
    if ( !v10 ) /*0x51bf80*/
      goto LABEL_17; /*0x51bf80*/
    v9 = *v12 - *v11; /*0x51bf88*/
    if ( !v9 ) /*0x51bf8a*/
    {
      v13 = v10 - 1; /*0x51bf8c*/
      v14 = v11 + 1; /*0x51bf8f*/
      v15 = v12 + 1; /*0x51bf92*/
      if ( !v13 ) /*0x51bf97*/
        goto LABEL_17; /*0x51bf97*/
      v9 = *v15 - *v14; /*0x51bf9f*/
      if ( !v9 ) /*0x51bfa1*/
      {
        v16 = v14 + 1; /*0x51bfa6*/
        v17 = v15 + 1; /*0x51bfa9*/
        if ( v13 == 1 ) /*0x51bfae*/
          goto LABEL_17; /*0x51bfae*/
        v9 = *v17 - *v16; /*0x51bfb6*/
        if ( !v9 ) /*0x51bfb8*/
          goto LABEL_17; /*0x51bfb8*/
      }
    }
  }
  v18 = 1; /*0x51bfbc*/
  if ( v9 <= 0 ) /*0x51bfc1*/
    return 1; /*0x51bfcd*/
  return v18 != 0; /*0x51bf35*/
}
