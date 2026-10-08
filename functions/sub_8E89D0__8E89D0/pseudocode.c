_DWORD *__thiscall sub_8E89D0(_WORD *this, int a2, int a3)
{
  sub_9156C0(this); /*0x8e89d3*/
  *(_DWORD *)this = &off_A9AC24; /*0x8e89de*/
  *((_DWORD *)this + 4) = 0; /*0x8e89e5*/
  *((_DWORD *)this + 5) = 0; /*0x8e89e8*/
  *((_DWORD *)this + 6) = 0x80000000; /*0x8e89f3*/
  sub_8E88A0((const void **)this, a2, a3, 0); /*0x8e89fa*/
  return this; /*0x8e8a01*/
}
