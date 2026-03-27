std::exception *__thiscall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
