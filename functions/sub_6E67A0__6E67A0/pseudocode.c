int __thiscall sub_6E67A0(float *this, _DWORD *a2, _DWORD **a3)
{
  int result; // eax

  sub_6ED2B0(this, (int)a2, a3); /*0x6e67ae*/
  a2[7] = *((_DWORD *)this + 7); /*0x6e67b6*/
  a2[8] = *((_DWORD *)this + 8); /*0x6e67bc*/
  result = *((_DWORD *)this + 9); /*0x6e67bf*/
  a2[9] = result; /*0x6e67c2*/
  a2[0xA] = *((_DWORD *)this + 0xA); /*0x6e67c8*/
  a2[0xB] = *((_DWORD *)this + 0xB); /*0x6e67ce*/
  return result; /*0x6e67d1*/
}
