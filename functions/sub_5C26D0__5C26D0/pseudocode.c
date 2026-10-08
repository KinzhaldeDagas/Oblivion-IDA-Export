int __thiscall sub_5C26D0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5c26d0*/
  switch ( a2 ) /*0x5c26d7*/
  {
    case 1: /*0x5c26d7*/
      *(this + 0xA) = a3; /*0x5c26dd*/
      return a3; /*0x5c26d9*/
    case 2: /*0x5c26d7*/
      *(this + 0xB) = a3; /*0x5c26ec*/
      break;
    case 0x14: /*0x5c26d7*/
      *(this + 0xD) = a3; /*0x5c26fb*/
      return a3; /*0x5c26f7*/
    case 0x15: /*0x5c26d7*/
      *(this + 0xE) = a3; /*0x5c270a*/
      break;
    case 0xA: /*0x5c26d7*/
      *(this + 0xC) = a3; /*0x5c2719*/
      return a3; /*0x5c2715*/
    case 0x5A: /*0x5c26d7*/
      *(this + 0xF) = a3; /*0x5c2728*/
      break;
  }
  return result; /*0x5c26e0*/
}
