int __thiscall sub_5C0530(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5c0530*/
  switch ( a2 ) /*0x5c0537*/
  {
    case 1: /*0x5c0537*/
      *(this + 0xA) = a3; /*0x5c053d*/
      return a3; /*0x5c0539*/
    case 2: /*0x5c0537*/
      *(this + 0xB) = a3; /*0x5c054c*/
      break;
    case 3: /*0x5c0537*/
      *(this + 0xC) = a3; /*0x5c055b*/
      return a3; /*0x5c0557*/
    case 4: /*0x5c0537*/
      *(this + 0xD) = a3; /*0x5c056a*/
      break;
    case 6: /*0x5c0537*/
      *(this + 0xE) = a3; /*0x5c0579*/
      return a3; /*0x5c0575*/
    case 7: /*0x5c0537*/
      *(this + 0xF) = a3; /*0x5c0588*/
      break;
  }
  return result; /*0x5c0540*/
}
