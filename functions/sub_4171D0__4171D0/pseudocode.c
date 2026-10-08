std::exception *__thiscall sub_4171D0(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::logic_error::`vftable'; /*0x4171d3*/
  if ( *((_DWORD *)this + 9) >= 0x10u ) /*0x4171dd*/
    FormHeapFree(*((_DWORD *)this + 4)); /*0x4171e3*/
  *((_DWORD *)this + 9) = 0xF; /*0x4171ed*/
  *((_DWORD *)this + 8) = 0; /*0x4171f4*/
  *((_BYTE *)this + 0x10) = 0; /*0x4171f9*/
  std::exception::~exception(this); /*0x4171fc*/
  if ( (a2 & 1) != 0 ) /*0x417206*/
    FormHeapFree((unsigned int)this); /*0x417209*/
  return this; /*0x417213*/
}
