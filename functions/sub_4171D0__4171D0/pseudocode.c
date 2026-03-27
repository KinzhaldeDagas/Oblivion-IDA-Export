std::exception *__thiscall sub_4171D0(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  if ( *((_DWORD *)this + 9) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 4));
  *((_DWORD *)this + 9) = 0xF;
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 0x10) = 0;
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
