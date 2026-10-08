_DWORD *__thiscall sub_926E80(_DWORD *this, _WORD *a2, _OWORD *a3, __int128 *a4, int a5, int a6)
{
  __int128 v7; // xmm0

  sub_8F5750(this, a2, 0); /*0x926e8a*/
  *this = &off_AA1858; /*0x926e9b*/
  *((_OWORD *)this + 2) = *a3; /*0x926ea8*/
  v7 = *a4; /*0x926eac*/
  *(this + 0x10) = a5; /*0x926eaf*/
  *((_OWORD *)this + 3) = v7; /*0x926eb2*/
  *(this + 0x11) = a6; /*0x926eb6*/
  return this; /*0x926ebb*/
}
