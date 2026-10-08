int __thiscall sub_6E5130(float *this, _DWORD *a2, _DWORD **a3)
{
  int result; // eax

  sub_6ED2B0(this, (int)a2, a3); /*0x6e513e*/
  a2[7] = *((_DWORD *)this + 7); /*0x6e5146*/
  a2[8] = *((_DWORD *)this + 8); /*0x6e514c*/
  result = *((_DWORD *)this + 9); /*0x6e514f*/
  a2[9] = result; /*0x6e5152*/
  a2[0xA] = *((_DWORD *)this + 0xA); /*0x6e5158*/
  return result; /*0x6e515b*/
}
