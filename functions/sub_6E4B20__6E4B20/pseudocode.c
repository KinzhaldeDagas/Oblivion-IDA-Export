int __thiscall sub_6E4B20(float *this, int a2, _DWORD **a3)
{
  int result; // eax

  sub_6ED2B0(this, a2, a3); /*0x6e4b30*/
  qmemcpy((void *)(a2 + 0x1C), this + 7, 0x28u); /*0x6e4b40*/
  result = *((_DWORD *)this + 0x11); /*0x6e4b4f*/
  *(_DWORD *)(a2 + 0x44) = result; /*0x6e4b53*/
  return result; /*0x6e4b4b*/
}
