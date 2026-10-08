void __usercall unknown_libname_135(double a1@<st1>, double a2@<st0>)
{
  _TBYTE v2; // [esp+0h] [ebp-2Ch]
  _TBYTE v3; // [esp+Ch] [ebp-20h]

  *(double *)&v2 = a1; /*0x9912c9*/
  *(double *)&v3 = a2; /*0x9912cc*/
  unknown_libname_133(v2, v3); /*0x9912d0*/
}
