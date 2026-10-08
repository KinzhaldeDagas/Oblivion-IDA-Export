std::bad_exception *__thiscall std::bad_exception::`scalar deleting destructor'(std::bad_exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_exception::`vftable'; /*0x98ae74*/
  std::exception::~exception(this); /*0x98ae7a*/
  if ( (a2 & 1) != 0 ) /*0x98ae84*/
    FormHeapFree((unsigned int)this); /*0x98ae87*/
  return this; /*0x98ae8f*/
}
