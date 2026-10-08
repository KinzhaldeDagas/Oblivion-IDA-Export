_DWORD *__thiscall sub_411F60(_DWORD *this, char a2, char a3)
{
  *(this + 1) = 0; /*0x411f68*/
  *(this + 2) = 0; /*0x411f6b*/
  *(this + 3) = 0; /*0x411f6e*/
  *(this + 4) = 0; /*0x411f71*/
  *(this + 5) = 0; /*0x411f74*/
  *(this + 6) = 0; /*0x411f77*/
  *(this + 7) = 0; /*0x411f7a*/
  *(this + 8) = 0; /*0x411f7d*/
  *((_BYTE *)this + 0x24) = a2; /*0x411f80*/
  *this = &IntSeenData::`vftable'; /*0x411f87*/
  *((_BYTE *)this + 0x25) = a3; /*0x411f8d*/
  *(this + 0xA) = 0; /*0x411f90*/
  return this; /*0x411f93*/
}
