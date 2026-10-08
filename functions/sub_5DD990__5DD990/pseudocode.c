int __thiscall sub_5DD990(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5dd990*/
  switch ( a2 ) /*0x5dd997*/
  {
    case 1: /*0x5dd997*/
      *(this + 0xA) = a3; /*0x5dd99d*/
      return a3; /*0x5dd999*/
    case 2: /*0x5dd997*/
      *(this + 0xB) = a3; /*0x5dd9ac*/
      break;
    case 3: /*0x5dd997*/
      *(this + 0xC) = a3; /*0x5dd9bb*/
      return a3; /*0x5dd9b7*/
    case 4: /*0x5dd997*/
      *(this + 0xD) = a3; /*0x5dd9ca*/
      break;
    case 5: /*0x5dd997*/
      *(this + 0xE) = a3; /*0x5dd9d9*/
      return a3; /*0x5dd9d5*/
    case 6: /*0x5dd997*/
      *(this + 0xF) = a3; /*0x5dd9e8*/
      break;
    case 7: /*0x5dd997*/
      *(this + 0x10) = a3; /*0x5dd9f7*/
      return a3; /*0x5dd9f3*/
    case 8: /*0x5dd997*/
      *(this + 0x11) = a3; /*0x5dda06*/
      break;
  }
  return result; /*0x5dd9a0*/
}
