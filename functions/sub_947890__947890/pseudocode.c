_DWORD *__thiscall sub_947890(_DWORD *this, char a2)
{
  _DWORD *v3; // edi

  v3 = this + 8; /*0x947894*/
  *this = &off_AA2A04; /*0x947897*/
  *(this + 2) = &off_AA29EC; /*0x94789d*/
  *(this + 8) = &off_AA29B8; /*0x9478a4*/
  sub_8A77D0((LPCRITICAL_SECTION *)unk_BA7DA0, (int)(this + 8)); /*0x9478b1*/
  *v3 = &off_AA2984; /*0x9478bb*/
  *(this + 2) = &off_A9D1C0; /*0x9478c1*/
  *this = &hkBaseObject::`vftable'; /*0x9478c8*/
  if ( (a2 & 1) != 0 ) /*0x9478ce*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9478e0*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x9478e3*/
}
