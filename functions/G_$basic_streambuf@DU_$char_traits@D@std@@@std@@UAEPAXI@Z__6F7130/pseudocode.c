LPCRITICAL_SECTION *__thiscall std::streambuf::`scalar deleting destructor'(LPCRITICAL_SECTION *this, char a2)
{
  std::streambuf::~streambuf<char,std::char_traits<char>>(this); /*0x6f7133*/
  if ( (a2 & 1) != 0 ) /*0x6f713d*/
    FormHeapFree((unsigned int)this); /*0x6f7140*/
  return this; /*0x6f714a*/
}
