_BYTE *__thiscall sub_42A2E0(_BYTE *this, int a2)
{
  *(this + 4) = 0x11; /*0x42a2e6*/
  *((_DWORD *)this + 2) = 0; /*0x42a2ea*/
  *(_DWORD *)this = &ExtraPersistentCell::`vftable'; /*0x42a2f1*/
  *((_DWORD *)this + 3) = a2; /*0x42a2f7*/
  return this; /*0x42a2fa*/
}
