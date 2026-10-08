int __thiscall std::_String_const_iterator<char,std::char_traits<char>,std::allocator<char>>::operator*(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx

  if ( *this != 0xFFFFFFFE ) /*0x6f7158*/
  {
    if ( !*this ) /*0x6f7153*/
      _invalid_parameter_noinfo(); /*0x6f715e*/
    v2 = *this; /*0x6f7163*/
    if ( *(_DWORD *)(*this + 0x18) < 0x10u ) /*0x6f7169*/
      v3 = v2 + 4; /*0x6f7170*/
    else
      v3 = *(_DWORD *)(v2 + 4); /*0x6f716b*/
    if ( *(this + 1) >= (unsigned int)(v3 + *(_DWORD *)(v2 + 0x14)) ) /*0x6f717b*/
      _invalid_parameter_noinfo(); /*0x6f717d*/
  }
  return *(this + 1); /*0x6f7185*/
}
