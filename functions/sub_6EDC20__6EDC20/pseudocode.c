_DWORD *__thiscall sub_6EDC20(_DWORD *this, _DWORD *a2)
{
  sub_552160(this, a2); /*0x6edc4e*/
  *(this + 0xC) = 0xF; /*0x6edc5e*/
  *(this + 0xB) = 0; /*0x6edc65*/
  *((_BYTE *)this + 0x1C) = 0; /*0x6edc6d*/
  OB_stString28_AssignSubstring_010201A0( /*0x6edc70*/
    (OB_stString28_010201A0 *)(this + 6),
    (const OB_stString28_010201A0 *)(a2 + 6),
    0,
    0xFFFFFFFF);
  return this; /*0x6edc77*/
}
