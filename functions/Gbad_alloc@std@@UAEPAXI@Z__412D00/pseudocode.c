std::bad_alloc *__thiscall std::bad_alloc::`scalar deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable'; /*0x412d03*/
  std::exception::~exception(this); /*0x412d09*/
  if ( (a2 & 1) != 0 ) /*0x412d13*/
    FormHeapFree((unsigned int)this); /*0x412d16*/
  return this; /*0x412d20*/
}
