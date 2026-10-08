char *__thiscall sub_957FD0(char *this, _DWORD *a2)
{
  char *v3; // esi

  v3 = this + 8; /*0x957fd4*/
  *((_WORD *)this + 3) = 1; /*0x957fdb*/
  *(_DWORD *)this = &off_AA3588; /*0x957fe1*/
  sub_9438E0((_DWORD *)this + 2, 0); /*0x957fe7*/
  *(_DWORD *)v3 = *a2; /*0x957ff2*/
  *((_DWORD *)v3 + 1) = a2[1]; /*0x957ff7*/
  *((_DWORD *)v3 + 2) = a2[2]; /*0x957ffd*/
  *((_DWORD *)v3 + 3) = a2[3]; /*0x958003*/
  *((_DWORD *)v3 + 4) = a2[4]; /*0x958009*/
  *((_DWORD *)v3 + 5) = a2[5]; /*0x958012*/
  return this; /*0x958011*/
}
