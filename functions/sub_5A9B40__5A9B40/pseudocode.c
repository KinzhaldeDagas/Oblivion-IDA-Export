void __thiscall sub_5A9B40(_DWORD *this, int a2, int a3)
{
  switch ( a2 ) /*0x5a9b4c*/
  {
    case 9: /*0x5a9b4c*/
      *(this + 0xA) = a3; /*0x5a9b57*/
      break; /*0x5a9b5a*/
    case 0xA: /*0x5a9b4c*/
      *(this + 0xB) = a3; /*0x5a9b61*/
      break; /*0x5a9b64*/
    case 0xB: /*0x5a9b4c*/
      *(this + 0xC) = a3; /*0x5a9b6b*/
      break; /*0x5a9b6e*/
    case 0xC: /*0x5a9b4c*/
      *(this + 0xD) = a3; /*0x5a9b75*/
      break; /*0x5a9b78*/
    case 0xD: /*0x5a9b4c*/
      *(this + 0xE) = a3; /*0x5a9b7f*/
      def_5A9B4C(a2, a3); /*0x5a9b80*/
      break; /*0x5a9b80*/
    default:
      JUMPOUT(0x5A9B82); /*0x5a9b82*/
  }
}
