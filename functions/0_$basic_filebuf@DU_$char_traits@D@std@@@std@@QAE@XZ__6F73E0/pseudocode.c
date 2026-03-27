_DWORD *__thiscall std::filebuf::filebuf(_DWORD *this, int a2)
{
  std::streambuf::streambuf(this);
  *this = &std::filebuf::`vftable';
  *((_BYTE *)this + 0x48) = 0;
  *((_BYTE *)this + 0x41) = 0;
  sub_6F6F40(this);
  if ( a2 )
  {
    *(this + 4) = a2 + 8;
    *(this + 5) = a2 + 8;
    *(this + 8) = a2;
    *(this + 9) = a2;
    *(this + 0xC) = a2 + 4;
    *(this + 0xD) = a2 + 4;
  }
  *(this + 0x13) = a2;
  *(this + 0x11) = dword_B3F16C;
  *(this + 0xF) = 0;
  return this;
}
