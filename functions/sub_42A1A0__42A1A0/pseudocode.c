_DWORD *__thiscall sub_42A1A0(_DWORD *this, int a2, int a3, int a4, char a5, char a6)
{
  *(this + 3) = a2; /*0x42a1aa*/
  *(this + 4) = a3; /*0x42a1b1*/
  *(this + 5) = a4; /*0x42a1b8*/
  *((_BYTE *)this + 4) = 0x1F; /*0x42a1bf*/
  *(this + 2) = 0; /*0x42a1c3*/
  *this = &ExtraPackage::`vftable'; /*0x42a1ca*/
  *((_BYTE *)this + 0x18) = a5; /*0x42a1d0*/
  *((_BYTE *)this + 0x19) = a6; /*0x42a1d3*/
  return this; /*0x42a1d6*/
}
