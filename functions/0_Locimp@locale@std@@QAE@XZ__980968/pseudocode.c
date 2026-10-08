std::locale::_Locimp *__thiscall std::locale::_Locimp::_Locimp(std::locale::_Locimp *this, char a2)
{
  *((_DWORD *)this + 1) = 1; /*0x980979*/
  *((_DWORD *)this + 2) = 0; /*0x980985*/
  *((_DWORD *)this + 3) = 0; /*0x980988*/
  *((_DWORD *)this + 4) = 0; /*0x98098b*/
  *(_DWORD *)this = &std::locale::_Locimp::`vftable'; /*0x980999*/
  *((_BYTE *)this + 0x14) = a2; /*0x98099f*/
  sub_414750((OB_stString28_010201A0 *)((char *)this + 0x18), "*"); /*0x9809a2*/
  return this; /*0x9809a9*/
}
