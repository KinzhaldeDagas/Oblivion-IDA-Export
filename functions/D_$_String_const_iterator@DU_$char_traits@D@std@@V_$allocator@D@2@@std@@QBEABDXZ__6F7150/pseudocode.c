int __thiscall std::_String_const_iterator<char,std::char_traits<char>,std::allocator<char>>::operator*(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx

  if ( *this != 0xFFFFFFFE )
  {
    if ( !*this )
      _invalid_parameter_noinfo();
    v2 = *this;
    if ( *(_DWORD *)(*this + 0x18) < 0x10u )
      v3 = v2 + 4;
    else
      v3 = *(_DWORD *)(v2 + 4);
    if ( *(this + 1) >= (unsigned int)(v3 + *(_DWORD *)(v2 + 0x14)) )
      _invalid_parameter_noinfo();
  }
  return *(this + 1);
}
