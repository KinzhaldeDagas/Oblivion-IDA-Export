void __thiscall std::filebuf::~filebuf<char,std::char_traits<char>>(int this)
{
  *(_DWORD *)this = &std::filebuf::`vftable'; /*0x6f8b98*/
  if ( *(_BYTE *)(this + 0x48) ) /*0x6f8b9e*/
    sub_6F83E0((_DWORD *)this); /*0x6f8bac*/
  std::streambuf::~streambuf<char,std::char_traits<char>>((LPCRITICAL_SECTION *)this); /*0x6f8bbb*/
}
