void *__thiscall std::filebuf::`scalar deleting destructor'(void *this, char a2)
{
  std::filebuf::~filebuf<char,std::char_traits<char>>((int)this); /*0x6f8be3*/
  if ( (a2 & 1) != 0 ) /*0x6f8bed*/
    FormHeapFree((unsigned int)this); /*0x6f8bf0*/
  return this; /*0x6f8bfa*/
}
