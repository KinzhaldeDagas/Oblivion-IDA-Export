char *__thiscall sub_8ABC40(char *this, int a2, _OWORD *a3)
{
  sub_8BC8F0(this, a2, 2); /*0x8abc4a*/
  *((_DWORD *)this + 0x14) = 0; /*0x8abc51*/
  *((_DWORD *)this + 0x15) = 0; /*0x8abc54*/
  *((_DWORD *)this + 0x16) = 0x80000000; /*0x8abc5c*/
  *((_DWORD *)this + 0x17) = 0; /*0x8abc5f*/
  *((_DWORD *)this + 0x18) = 0; /*0x8abc62*/
  *((_DWORD *)this + 0x19) = 0x80000000; /*0x8abc65*/
  *((_DWORD *)this + 9) = 0xFFFFFFEC; /*0x8abc6f*/
  *(_DWORD *)this = &off_A97B90; /*0x8abc76*/
  *((_DWORD *)this + 7) = this + 0x70; /*0x8abc7f*/
  *((_OWORD *)this + 7) = *a3; /*0x8abc85*/
  *((_OWORD *)this + 8) = a3[1]; /*0x8abc8c*/
  *((_OWORD *)this + 9) = a3[2]; /*0x8abc94*/
  *((_OWORD *)this + 0xA) = a3[3]; /*0x8abc9c*/
  return this; /*0x8abca2*/
}
