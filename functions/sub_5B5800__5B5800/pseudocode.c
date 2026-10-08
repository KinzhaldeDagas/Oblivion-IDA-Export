int __thiscall sub_5B5800(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5b5800*/
  switch ( a2 ) /*0x5b5807*/
  {
    case 2: /*0x5b5807*/
      *(this + 0xA) = a3; /*0x5b580d*/
      return a3; /*0x5b5809*/
    case 3: /*0x5b5807*/
      *(this + 0xC) = a3; /*0x5b581c*/
      break;
    case 4: /*0x5b5807*/
      *(this + 0xD) = a3; /*0x5b582b*/
      return a3; /*0x5b5827*/
    case 5: /*0x5b5807*/
      *(this + 0xE) = a3; /*0x5b583a*/
      break;
    case 6: /*0x5b5807*/
      *(this + 0xF) = a3; /*0x5b5849*/
      return a3; /*0x5b5845*/
    case 7: /*0x5b5807*/
      *(this + 0x10) = a3; /*0x5b5858*/
      break;
    case 8: /*0x5b5807*/
      *(this + 0x11) = a3; /*0x5b5867*/
      return a3; /*0x5b5863*/
  }
  return result; /*0x5b5810*/
}
