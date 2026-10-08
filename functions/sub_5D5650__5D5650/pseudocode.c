void __thiscall sub_5D5650(_DWORD *this, int a2, int a3)
{
  switch ( a2 ) /*0x5d565c*/
  {
    case 1: /*0x5d565c*/
      *(this + 0xA) = a3; /*0x5d5667*/
      break; /*0x5d566a*/
    case 2: /*0x5d565c*/
      *(this + 0xB) = a3; /*0x5d567b*/
      break; /*0x5d567e*/
    case 3: /*0x5d565c*/
      *(this + 0xC) = a3; /*0x5d5671*/
      break; /*0x5d5674*/
    case 4: /*0x5d565c*/
      *(this + 0xD) = a3; /*0x5d5685*/
      break; /*0x5d5688*/
    case 5: /*0x5d565c*/
      *(this + 0xE) = a3; /*0x5d568f*/
      def_5D565C(a2, a3); /*0x5d5690*/
      break; /*0x5d5690*/
    default:
      JUMPOUT(0x5D5692); /*0x5d5692*/
  }
}
