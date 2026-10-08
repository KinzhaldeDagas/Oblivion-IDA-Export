int __thiscall sub_5D2C60(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1; /*0x5d2c64*/
  switch ( a2 ) /*0x5d2c6c*/
  {
    case 1: /*0x5d2c6c*/
      *(this + 0xA) = a3; /*0x5d2c95*/
      break; /*0x5d2c98*/
    case 2: /*0x5d2c6c*/
      *(this + 0xB) = a3; /*0x5d2c9f*/
      result = a3; /*0x5d2c9b*/
      break; /*0x5d2ca2*/
    case 3: /*0x5d2c6c*/
      *(this + 0xD) = a3; /*0x5d2c8b*/
      result = a3; /*0x5d2c87*/
      break; /*0x5d2c8e*/
    case 4: /*0x5d2c6c*/
      *(this + 0xE) = a3; /*0x5d2c81*/
      break; /*0x5d2c84*/
    case 5: /*0x5d2c6c*/
      *(this + 0xF) = a3; /*0x5d2c77*/
      result = a3; /*0x5d2c73*/
      break; /*0x5d2c7a*/
    case 6: /*0x5d2c6c*/
      *(this + 0x10) = a3; /*0x5d2ca9*/
      break; /*0x5d2cac*/
    case 7: /*0x5d2c6c*/
      *(this + 0x11) = a3; /*0x5d2cb3*/
      result = a3; /*0x5d2caf*/
      break; /*0x5d2cb6*/
    case 9: /*0x5d2c6c*/
      *(this + 0x12) = a3; /*0x5d2cbd*/
      break; /*0x5d2cbd*/
    default:
      return result;
  }
  return result; /*0x5d2c7a*/
}
