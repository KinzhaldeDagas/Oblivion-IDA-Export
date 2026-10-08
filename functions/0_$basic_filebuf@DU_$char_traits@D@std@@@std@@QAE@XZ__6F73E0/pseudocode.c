_DWORD *__thiscall std::filebuf::filebuf(_DWORD *this, int a2)
{
  std::streambuf::streambuf(this); /*0x6f73e3*/
  *this = &std::filebuf::`vftable'; /*0x6f73ea*/
  *((_BYTE *)this + 0x48) = 0; /*0x6f73f0*/
  *((_BYTE *)this + 0x41) = 0; /*0x6f73f4*/
  sub_6F6F40(this); /*0x6f73f8*/
  if ( a2 ) /*0x6f7403*/
  {
    *(this + 4) = a2 + 8; /*0x6f7408*/
    *(this + 5) = a2 + 8; /*0x6f740b*/
    *(this + 8) = a2; /*0x6f7411*/
    *(this + 9) = a2; /*0x6f7414*/
    *(this + 0xC) = a2 + 4; /*0x6f7417*/
    *(this + 0xD) = a2 + 4; /*0x6f741a*/
  }
  *(this + 0x13) = a2; /*0x6f741d*/
  *(this + 0x11) = *(_DWORD *)&destination[0x100]; /*0x6f7425*/
  *(this + 0xF) = 0; /*0x6f7428*/
  return this; /*0x6f7431*/
}
