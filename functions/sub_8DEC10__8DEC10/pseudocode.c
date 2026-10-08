_WORD *__thiscall sub_8DEC10(_WORD *this)
{
  *(this + 3) = 1; /*0x8dec12*/
  *(_DWORD *)this = &off_A9A524; /*0x8dec18*/
  *((_DWORD *)this + 2) = 0x42040000; /*0x8dec1e*/
  *((_DWORD *)this + 3) = 0x427C0000; /*0x8dec25*/
  return this; /*0x8dec2c*/
}
