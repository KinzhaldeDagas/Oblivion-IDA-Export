char __thiscall sub_478290(void **this, signed int a2)
{
  char v2; // bl
  int v3; // edi
  void **i; // esi
  _BYTE *v5; // eax

  if ( a2 < 6 ) /*0x478298*/
    return 0; /*0x478298*/
  if ( a2 > 7 ) /*0x47829d*/
  {
    if ( a2 == 8 ) /*0x4782a2*/
    {
      v2 = 2; /*0x4782a4*/
      goto LABEL_6; /*0x4782a9*/
    }
    return 0; /*0x4782f4*/
  }
  v2 = 1; /*0x4782ab*/
LABEL_6:
  v3 = 0; /*0x4782b0*/
  for ( i = this + 0x13; ; i += 4 ) /*0x4782b4*/
  {
    v5 = OblivionDynamicCast( /*0x4782c8*/
           *i,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESBipedModelForm `RTTI Type Descriptor',
           0);
    if ( v5 ) /*0x4782d2*/
    {
      if ( ((unsigned __int8)v2 & v5[6]) != 0 ) /*0x4782d7*/
        break; /*0x4782d7*/
    }
    if ( ++v3 >= 0x10 ) /*0x4782e2*/
      return 0; /*0x4782e9*/
  }
  return 1; /*0x4782e8*/
}
