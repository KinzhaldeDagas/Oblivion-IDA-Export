int __usercall _hw_cw@<eax>(int a1@<ebx>)
{
  int result; // eax
  int v2; // ecx

  result = (a1 & 0x10) != 0; /*0x9a0b65*/
  if ( (a1 & 8) != 0 ) /*0x9a0b69*/
    result |= 4u; /*0x9a0b6b*/
  if ( (a1 & 4) != 0 ) /*0x9a0b71*/
    result |= 8u; /*0x9a0b73*/
  if ( (a1 & 2) != 0 ) /*0x9a0b79*/
    result |= 0x10u; /*0x9a0b7b*/
  if ( (a1 & 1) != 0 ) /*0x9a0b81*/
    result |= 0x20u; /*0x9a0b83*/
  if ( (a1 & 0x80000) != 0 ) /*0x9a0b8c*/
    result |= 2u; /*0x9a0b8e*/
  v2 = a1 & 0x300; /*0x9a0b98*/
  if ( (a1 & 0x300) != 0 ) /*0x9a0ba0*/
  {
    switch ( v2 ) /*0x9a0ba8*/
    {
      case 0x100: /*0x9a0ba8*/
        result |= 0x400u; /*0x9a0bc0*/
        break;
      case 0x200: /*0x9a0ba8*/
        result |= 0x800u; /*0x9a0bb9*/
        break;
      case 0x300: /*0x9a0ba8*/
        result |= 0xC00u; /*0x9a0bb2*/
        break;
    }
  }
  if ( (a1 & 0x30000) != 0 ) /*0x9a0bcd*/
  {
    if ( (a1 & 0x30000) == 0x10000 ) /*0x9a0bd5*/
      result |= 0x200u; /*0x9a0bd7*/
  }
  else
  {
    result |= 0x300u; /*0x9a0bdb*/
  }
  if ( (a1 & 0x40000) != 0 ) /*0x9a0be4*/
    return result | 0x1000; /*0x9a0be6*/
  return result; /*0x9a0beb*/
}
