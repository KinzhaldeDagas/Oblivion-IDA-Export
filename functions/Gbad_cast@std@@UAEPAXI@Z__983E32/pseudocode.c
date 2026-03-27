std::bad_cast *__thiscall std::bad_cast::`scalar deleting destructor'(std::bad_cast *this, char a2)
{
  *(_DWORD *)this = &std::bad_cast::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
