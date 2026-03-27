int __thiscall sub_6E4B20(float *this, int a2, _DWORD **a3)
{
  int result; // eax

  sub_6ED2B0(this, a2, a3);
  qmemcpy((void *)(a2 + 0x1C), this + 7, 0x28u);
  result = *((_DWORD *)this + 0x11);
  *(_DWORD *)(a2 + 0x44) = result;
  return result;
}
