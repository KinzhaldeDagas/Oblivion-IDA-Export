std::bad_exception *__thiscall std::bad_exception::`scalar deleting destructor'(std::bad_exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
