int __thiscall sub_8EAB30(int this, int a2)
{
  double v3; // st6
  double v4; // st7
  int v5; // ecx

  v3 = *(float *)(this + 0xF0); /*0x8eab52*/
  v4 = *(float *)(this + 0xF4); /*0x8eab52*/
  v5 = *(_DWORD *)(this + 0xF8); /*0x8eab54*/
  *(_OWORD *)a2 = 0; /*0x8eab5b*/
  *(_OWORD *)(a2 + 0x10) = 0; /*0x8eab5e*/
  *(_OWORD *)(a2 + 0x20) = 0; /*0x8eab62*/
  *(float *)a2 = v3; /*0x8eab66*/
  *(float *)(a2 + 0x14) = v4; /*0x8eab68*/
  *(_DWORD *)(a2 + 0x28) = v5; /*0x8eab6b*/
  return a2; /*0x8eab6e*/
}
