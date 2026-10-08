int __thiscall sub_5BD5B0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5bd5b0*/
  switch ( a2 ) /*0x5bd5b7*/
  {
    case 2: /*0x5bd5b7*/
      *(this + 0xA) = a3; /*0x5bd5bd*/
      return a3; /*0x5bd5b9*/
    case 5: /*0x5bd5b7*/
      *(this + 0xB) = a3; /*0x5bd5cc*/
      break;
    case 6: /*0x5bd5b7*/
      *(this + 0xC) = a3; /*0x5bd5db*/
      return a3; /*0x5bd5d7*/
    case 7: /*0x5bd5b7*/
      *(this + 0xD) = a3; /*0x5bd5ea*/
      break;
    case 8: /*0x5bd5b7*/
      *(this + 0xE) = a3; /*0x5bd5f9*/
      return a3; /*0x5bd5f5*/
    case 9: /*0x5bd5b7*/
      *(this + 0xF) = a3; /*0x5bd608*/
      break;
  }
  return result; /*0x5bd5c0*/
}
