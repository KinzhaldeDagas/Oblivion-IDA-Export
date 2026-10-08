void __thiscall sub_4143E0(std::exception *this)
{
  *(_DWORD *)this = &std::logic_error::`vftable'; /*0x4143e3*/
  if ( *((_DWORD *)this + 9) >= 0x10u ) /*0x4143ed*/
    FormHeapFree(*((_DWORD *)this + 4)); /*0x4143f3*/
  *((_DWORD *)this + 9) = 0xF; /*0x4143fd*/
  *((_DWORD *)this + 8) = 0; /*0x414404*/
  *((_BYTE *)this + 0x10) = 0; /*0x414407*/
  std::exception::~exception(this); /*0x41440d*/
}
