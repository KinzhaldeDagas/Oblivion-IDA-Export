_DWORD *__thiscall sub_926E80(_DWORD *this, _WORD *a2, _OWORD *a3, __int128 *a4, int a5, int a6)
{
  __int128 v7; // xmm0

  sub_8F5750(this, a2, 0);
  *this = &off_AA1858;
  *((_OWORD *)this + 2) = *a3;
  v7 = *a4;
  *(this + 0x10) = a5;
  *((_OWORD *)this + 3) = v7;
  *(this + 0x11) = a6;
  return this;
}
