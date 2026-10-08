int __thiscall sub_5BD990(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5bd990*/
  switch ( a2 ) /*0x5bd997*/
  {
    case 3: /*0x5bd997*/
      *(this + 0xA) = a3; /*0x5bd99d*/
      return a3; /*0x5bd999*/
    case 4: /*0x5bd997*/
      *(this + 0xB) = a3; /*0x5bd9ac*/
      break;
    case 5: /*0x5bd997*/
      *(this + 0xC) = a3; /*0x5bd9bb*/
      return a3; /*0x5bd9b7*/
    case 7: /*0x5bd997*/
      *(this + 0xD) = a3; /*0x5bd9ca*/
      break;
    case 8: /*0x5bd997*/
      *(this + 0xE) = a3; /*0x5bd9d9*/
      return a3; /*0x5bd9d5*/
  }
  return result; /*0x5bd9a0*/
}
