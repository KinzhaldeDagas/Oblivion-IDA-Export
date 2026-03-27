int __usercall unknown_libname_192@<eax>(int a1@<ebp>, double a2@<st0>)
{
  double v2; // st6
  __int16 v3; // fps
  bool v4; // c0
  char v5; // c2
  bool v6; // c3
  int result; // eax
  __int16 v8; // fps
  bool v11; // c0
  char v12; // c2
  bool v13; // c3
  __int16 v14; // fps
  double v15; // st6
  bool v16; // c0
  char v17; // c2
  bool v18; // c3

  v2 = fabs(a2);
  v4 = *(double *)&tbyte_B31CEE < v2;
  v5 = 0;
  v6 = *(double *)&tbyte_B31CEE == v2;
  *(_WORD *)(a1 - 0xA0) = v3;
  if ( (*(_BYTE *)(a1 - 0x9F) & 0x41) != 0 )
    return unknown_libname_192_::ExpArgOutOfRange(a1, v3, a2);
  _ST6 = a2;
  __asm { frndint }
  v11 = _ST6 < 0.0;
  v12 = 0;
  v13 = _ST6 == 0.0;
  *(_WORD *)(a1 - 0xA0) = v8;
  v15 = a2 - _ST6;
  v16 = v15 < 0.0;
  v17 = 0;
  v18 = v15 == 0.0;
  *(_WORD *)(a1 - 0xA0) = v14;
  return result;
}
