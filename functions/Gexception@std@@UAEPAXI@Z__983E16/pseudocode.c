std::exception *__thiscall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  std::exception::~exception(this); /*0x983e19*/
  if ( (a2 & 1) != 0 ) /*0x983e23*/
    FormHeapFree((unsigned int)this); /*0x983e26*/
  return this; /*0x983e2e*/
}
