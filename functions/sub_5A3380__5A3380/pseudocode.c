int __thiscall sub_5A3380(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1; /*0x5a3384*/
  switch ( a2 ) /*0x5a338c*/
  {
    case 1: /*0x5a338c*/
      *(this + 0xA) = a3; /*0x5a33a1*/
      break; /*0x5a33a4*/
    case 2: /*0x5a338c*/
      *(this + 0xB) = a3; /*0x5a33ab*/
      result = a3; /*0x5a33a7*/
      break; /*0x5a33ae*/
    case 3: /*0x5a338c*/
      *(this + 0xC) = a3; /*0x5a33b5*/
      break; /*0x5a33b8*/
    case 4: /*0x5a338c*/
      *(this + 0xD) = a3; /*0x5a33bf*/
      result = a3; /*0x5a33bb*/
      break; /*0x5a33c2*/
    case 5: /*0x5a338c*/
      *(this + 0xE) = a3; /*0x5a33c9*/
      break; /*0x5a33cc*/
    case 6: /*0x5a338c*/
      *(this + 0xF) = a3; /*0x5a33d3*/
      result = a3; /*0x5a33cf*/
      break; /*0x5a33d6*/
    case 7: /*0x5a338c*/
      *(this + 0x10) = a3; /*0x5a33dd*/
      break; /*0x5a33e0*/
    case 8: /*0x5a338c*/
      *(this + 0x11) = a3; /*0x5a33e7*/
      result = a3; /*0x5a33e3*/
      break; /*0x5a33e3*/
    case 0xA: /*0x5a338c*/
      *(this + 0x12) = a3; /*0x5a3397*/
      result = a3; /*0x5a3393*/
      break; /*0x5a339a*/
    default:
      return result;
  }
  return result; /*0x5a339a*/
}
