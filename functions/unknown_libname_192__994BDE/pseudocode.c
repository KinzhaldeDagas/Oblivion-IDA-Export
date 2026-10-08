double __usercall unknown_libname_192@<st0>(int a1@<ebp>, double a2@<st0>, char a3@<ch>)
{
  double v3; // st6
  __int16 v4; // fps
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  __int16 v8; // fps
  bool v11; // c0
  char v12; // c2
  bool v13; // c3
  double v14; // rt0
  __int16 v17; // fps
  double v18; // st6
  bool v19; // c0
  char v20; // c2
  bool v21; // c3

  v3 = fabs(a2); /*0x994be0*/
  v5 = *(double *)&tbyte_B31CEE < v3; /*0x994be8*/
  v6 = 0; /*0x994be8*/
  v7 = *(double *)&tbyte_B31CEE == v3; /*0x994be8*/
  *(_WORD *)(a1 - 0xA0) = v4; /*0x994bea*/
  if ( (*(_BYTE *)(a1 - 0x9F) & 0x41) != 0 ) /*0x994bf9*/
    return unknown_libname_192_::ExpArgOutOfRange(a1, v4, a2, a3); /*0x994bf9*/
  _ST6 = a2; /*0x994bfb*/
  __asm { frndint } /*0x994bfd*/
  v11 = _ST6 < 0.0; /*0x994bff*/
  v12 = 0; /*0x994bff*/
  v13 = _ST6 == 0.0; /*0x994bff*/
  *(_WORD *)(a1 - 0xA0) = v8; /*0x994c01*/
  v14 = _ST6; /*0x994c0f*/
  v18 = a2 - v14; /*0x994c11*/
  v19 = v18 < 0.0; /*0x994c13*/
  v20 = 0; /*0x994c13*/
  v21 = v18 == 0.0; /*0x994c13*/
  *(_WORD *)(a1 - 0xA0) = v17; /*0x994c15*/
  return v14; /*0x994c20*/
}
