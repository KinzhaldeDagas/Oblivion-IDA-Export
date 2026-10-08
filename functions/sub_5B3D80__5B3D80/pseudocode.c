int __thiscall sub_5B3D80(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1; /*0x5b3d84*/
  switch ( a2 ) /*0x5b3d93*/
  {
    case 1: /*0x5b3d93*/
      *(this + 0xA) = a3; /*0x5b3d9e*/
      break; /*0x5b3da1*/
    case 0xB: /*0x5b3d93*/
      *(this + 0xB) = a3; /*0x5b3da8*/
      result = a3; /*0x5b3da4*/
      break; /*0x5b3dab*/
    case 0xC: /*0x5b3d93*/
      *(this + 0xC) = a3; /*0x5b3db2*/
      break; /*0x5b3db5*/
    case 0xD: /*0x5b3d93*/
      *(this + 0xD) = a3; /*0x5b3dbc*/
      result = a3; /*0x5b3db8*/
      break; /*0x5b3dbf*/
    case 0xE: /*0x5b3d93*/
      *(this + 0xE) = a3; /*0x5b3dc6*/
      break; /*0x5b3dc9*/
    case 0xF: /*0x5b3d93*/
      *(this + 0xF) = a3; /*0x5b3dd0*/
      result = a3; /*0x5b3dcc*/
      break; /*0x5b3dd3*/
    case 0x10: /*0x5b3d93*/
      *(this + 0x10) = a3; /*0x5b3dda*/
      break; /*0x5b3ddd*/
    case 0x11: /*0x5b3d93*/
      *(this + 0x11) = a3; /*0x5b3de4*/
      result = a3; /*0x5b3de0*/
      break; /*0x5b3de7*/
    case 0x12: /*0x5b3d93*/
      *(this + 0x12) = a3; /*0x5b3dee*/
      break; /*0x5b3df1*/
    case 0x15: /*0x5b3d93*/
      *(this + 0x13) = a3; /*0x5b3df8*/
      result = a3; /*0x5b3df4*/
      break; /*0x5b3df4*/
    default:
      return result;
  }
  return result; /*0x5b3da1*/
}
