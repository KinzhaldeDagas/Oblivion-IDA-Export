void __usercall unknown_libname_145(double a1@<st1>, double a2@<st0>)
{
  _TBYTE v2; // [esp+0h] [ebp-30h]
  _TBYTE v3; // [esp+Ch] [ebp-24h]

  *(double *)&v2 = a1; /*0x9914f0*/
  *(double *)&v3 = a2; /*0x9914f3*/
  unknown_libname_133(v2, v3); /*0x9914f7*/
}
