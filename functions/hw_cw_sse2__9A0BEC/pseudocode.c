int __fastcall __hw_cw_sse2(int a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // edx

  result = 0; /*0x9a0bec*/
  if ( (a2 & 0x10) != 0 ) /*0x9a0bf1*/
    result = 0x80; /*0x9a0bf3*/
  if ( (a2 & 8) != 0 ) /*0x9a0c03*/
    result |= 0x200u; /*0x9a0c05*/
  if ( (a2 & 4) != 0 ) /*0x9a0c0a*/
    result |= 0x400u; /*0x9a0c0c*/
  if ( (a2 & 2) != 0 ) /*0x9a0c14*/
    result |= 0x800u; /*0x9a0c16*/
  if ( (a2 & 1) != 0 ) /*0x9a0c1e*/
    result |= 0x1000u; /*0x9a0c20*/
  if ( (a2 & 0x80000) != 0 ) /*0x9a0c30*/
    result |= 0x100u; /*0x9a0c32*/
  v3 = a2 & 0x300; /*0x9a0c3b*/
  if ( (a2 & 0x300) != 0 ) /*0x9a0c3d*/
  {
    switch ( v3 ) /*0x9a0c41*/
    {
      case 0x100: /*0x9a0c41*/
        result |= 0x2000u; /*0x9a0c59*/
        break;
      case 0x200: /*0x9a0c41*/
        result |= 0x4000u; /*0x9a0c52*/
        break;
      case 0x300: /*0x9a0c41*/
        result |= 0x6000u; /*0x9a0c4b*/
        break;
    }
  }
  v4 = a2 & 0x3000000; /*0x9a0c64*/
  switch ( v4 ) /*0x9a0c6e*/
  {
    case 0x1000000: /*0x9a0c6e*/
      return result | 0x8040; /*0x9a0c86*/
    case 0x2000000: /*0x9a0c6e*/
      return result | 0x40; /*0x9a0c82*/
    case 0x3000000: /*0x9a0c6e*/
      return result | 0x8000; /*0x9a0c7c*/
  }
  return result; /*0x9a0c81*/
}
