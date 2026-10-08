char *__thiscall sub_8ECFC0(char *this, int a2, _OWORD *a3, int a4)
{
  sub_8ABC40(this, a2, a3); /*0x8ecfcf*/
  *(_DWORD *)this = &off_A9AFFC; /*0x8ecfd8*/
  *((_DWORD *)this + 0x48) = 0; /*0x8ecfe0*/
  *((_DWORD *)this + 0x49) = 0; /*0x8ecfe6*/
  *((_DWORD *)this + 0x4A) = 0x80000000; /*0x8ecfec*/
  *((_DWORD *)this + 0xC) = a4; /*0x8ecff6*/
  return this; /*0x8ecffb*/
}
