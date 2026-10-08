void __thiscall sub_5D8860(_DWORD *this, int a2, int a3)
{
  switch ( a2 ) /*0x5d886c*/
  {
    case 1: /*0x5d886c*/
      *(this + 0xA) = a3; /*0x5d8877*/
      break; /*0x5d887a*/
    case 2: /*0x5d886c*/
      *(this + 0xD) = a3; /*0x5d8881*/
      break; /*0x5d8884*/
    case 3: /*0x5d886c*/
      *(this + 0xB) = a3; /*0x5d88a9*/
      break; /*0x5d88ac*/
    case 4: /*0x5d886c*/
      *(this + 0xE) = a3; /*0x5d8895*/
      break; /*0x5d8898*/
    case 5: /*0x5d886c*/
      *(this + 0xF) = a3; /*0x5d889f*/
      break; /*0x5d88a2*/
    case 6: /*0x5d886c*/
      *(this + 0xC) = a3; /*0x5d888b*/
      break; /*0x5d888e*/
    case 7: /*0x5d886c*/
      *(this + 0x10) = a3; /*0x5d88bd*/
      def_5D886C(a2, a3); /*0x5d88be*/
      break; /*0x5d88be*/
    case 8: /*0x5d886c*/
      *(this + 0x11) = a3; /*0x5d88b3*/
      break; /*0x5d88b6*/
    default:
      JUMPOUT(0x5D88C0); /*0x5d88c0*/
  }
}
