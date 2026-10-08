// Constructs ExtraAction: type 0x13, default flag byte 1, null action reference.
_BYTE *__thiscall ExtraAction_ctor(_BYTE *this)
{
  *(this + 4) = 0x13; /*0x429d34*/
  *((_DWORD *)this + 2) = 0; /*0x429d38*/
  *(_DWORD *)this = &ExtraAction::`vftable'; /*0x429d3b*/
  *(this + 0xC) = 1; /*0x429d41*/
  *((_DWORD *)this + 4) = 0; /*0x429d45*/
  return this; /*0x429d48*/
}
