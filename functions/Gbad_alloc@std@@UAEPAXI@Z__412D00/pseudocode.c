std::bad_alloc *__thiscall std::bad_alloc::`scalar deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
