std::bad_cast *__thiscall std::bad_cast::`scalar deleting destructor'(std::bad_cast *this, char a2)
{
  *(_DWORD *)this = &std::bad_cast::`vftable'; /*0x983e35*/
  std::exception::~exception(this); /*0x983e3b*/
  if ( (a2 & 1) != 0 ) /*0x983e45*/
    FormHeapFree((unsigned int)this); /*0x983e48*/
  return this; /*0x983e50*/
}
