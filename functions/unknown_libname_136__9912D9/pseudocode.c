void __usercall unknown_libname_136(double a1@<st1>, double a2@<st0>)
{
  _TBYTE v2; // [esp+0h] [ebp-2Ch]
  _TBYTE v3; // [esp+Ch] [ebp-20h]

  *(double *)&v3 = a1; /*0x9912dc*/
  *(double *)&v2 = a2; /*0x9912e0*/
  unknown_libname_133(v2, v3); /*0x9912e3*/
}
