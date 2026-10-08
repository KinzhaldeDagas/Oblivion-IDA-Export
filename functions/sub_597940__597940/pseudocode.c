void __thiscall sub_597940(_DWORD *this, int a2, int a3)
{
  switch ( a2 ) /*0x59794c*/
  {
    case 0xB: /*0x59794c*/
      *(this + 0xA) = a3; /*0x597957*/
      break; /*0x59795a*/
    case 0xC: /*0x59794c*/
      *(this + 0xB) = a3; /*0x597961*/
      break; /*0x597964*/
    case 0xD: /*0x59794c*/
      *(this + 0xC) = a3; /*0x59796b*/
      break; /*0x59796e*/
    case 0xE: /*0x59794c*/
      *(this + 0xD) = a3; /*0x597975*/
      break; /*0x597978*/
    case 0xF: /*0x59794c*/
      *(this + 0xE) = a3; /*0x59797f*/
      def_59794C(a2, a3); /*0x597980*/
      break; /*0x597980*/
    default:
      JUMPOUT(0x597982); /*0x597982*/
  }
}
