int __thiscall sub_5D3FB0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 2; /*0x5d3fb4*/
  switch ( a2 ) /*0x5d3fc7*/
  {
    case 2: /*0x5d3fc7*/
      *(this + 0xC) = a3; /*0x5d3fd2*/
      break; /*0x5d3fd5*/
    case 3: /*0x5d3fc7*/
      *(this + 0xD) = a3; /*0x5d3fdc*/
      result = a3; /*0x5d3fd8*/
      break; /*0x5d3fdf*/
    case 6: /*0x5d3fc7*/
      *(this + 0xE) = a3; /*0x5d3fe6*/
      break; /*0x5d3fe9*/
    case 7: /*0x5d3fc7*/
      *(this + 0xF) = a3; /*0x5d3ff0*/
      result = a3; /*0x5d3fec*/
      break; /*0x5d3ff3*/
    case 8: /*0x5d3fc7*/
      *(this + 0x10) = a3; /*0x5d3ffa*/
      break; /*0x5d3ffd*/
    case 9: /*0x5d3fc7*/
      *(this + 0x11) = a3; /*0x5d4004*/
      result = a3; /*0x5d4000*/
      break; /*0x5d4007*/
    case 0xA: /*0x5d3fc7*/
      *(this + 0x12) = a3; /*0x5d400e*/
      break; /*0x5d4011*/
    case 0xB: /*0x5d3fc7*/
      *(this + 0x14) = a3; /*0x5d4022*/
      break; /*0x5d4025*/
    case 0xC: /*0x5d3fc7*/
      *(this + 0x13) = a3; /*0x5d4018*/
      result = a3; /*0x5d4014*/
      break; /*0x5d401b*/
    case 0xE: /*0x5d3fc7*/
      *(this + 0x15) = a3; /*0x5d402c*/
      result = a3; /*0x5d4028*/
      break; /*0x5d402f*/
    case 0xF: /*0x5d3fc7*/
      *(this + 0x16) = a3; /*0x5d4036*/
      break; /*0x5d4039*/
    case 0x14: /*0x5d3fc7*/
      *(this + 0x17) = a3; /*0x5d4040*/
      result = a3; /*0x5d403c*/
      break; /*0x5d4043*/
    case 0x16: /*0x5d3fc7*/
      *(this + 0x18) = a3; /*0x5d404a*/
      break; /*0x5d404d*/
    case 0x19: /*0x5d3fc7*/
      *(this + 0x1A) = a3; /*0x5d4054*/
      result = a3; /*0x5d4050*/
      break; /*0x5d4057*/
    case 0x1A: /*0x5d3fc7*/
      *(this + 0x19) = a3; /*0x5d405e*/
      break; /*0x5d405e*/
    default:
      return result;
  }
  return result; /*0x5d3fd5*/
}
