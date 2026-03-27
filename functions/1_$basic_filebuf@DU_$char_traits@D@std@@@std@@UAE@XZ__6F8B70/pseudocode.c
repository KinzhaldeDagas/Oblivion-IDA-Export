int __thiscall std::filebuf::~filebuf<char,std::char_traits<char>>(int this)
{
  *(_DWORD *)this = &std::filebuf::`vftable';
  if ( *(_BYTE *)(this + 0x48) )
    sub_6F83E0((_DWORD *)this);
  return std::streambuf::~streambuf<char,std::char_traits<char>>((int **)this);
}
