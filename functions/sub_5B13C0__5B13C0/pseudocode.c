void __thiscall sub_5B13C0(_DWORD *this, int a2, int a3)
{
  switch ( a2 ) /*0x5b13cc*/
  {
    case 9: /*0x5b13cc*/
      *(this + 0xA) = a3; /*0x5b13d7*/
      break; /*0x5b13da*/
    case 0xA: /*0x5b13cc*/
      *(this + 0xB) = a3; /*0x5b13e1*/
      break; /*0x5b13e4*/
    case 0xB: /*0x5b13cc*/
      *(this + 0xC) = a3; /*0x5b13eb*/
      break; /*0x5b13ee*/
    case 0xC: /*0x5b13cc*/
      *(this + 0xD) = a3; /*0x5b13f5*/
      def_5B13CC(a2, a3); /*0x5b13f6*/
      break; /*0x5b13f6*/
    default:
      JUMPOUT(0x5B13F8); /*0x5b13f8*/
  }
}
