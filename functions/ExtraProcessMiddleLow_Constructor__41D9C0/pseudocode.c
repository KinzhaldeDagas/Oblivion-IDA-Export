_BYTE *__thiscall ExtraProcessMiddleLow_Constructor(_BYTE *this)
{
  *(this + 4) = 0xD; /*0x41d9c4*/
  *((_DWORD *)this + 2) = 0; /*0x41d9c8*/
  *(_DWORD *)this = &ExtraProcessMiddleLow::`vftable'; /*0x41d9cb*/
  *((_DWORD *)this + 3) = 0; /*0x41d9d1*/
  return this; /*0x41d9d4*/
}
