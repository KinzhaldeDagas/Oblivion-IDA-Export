char __thiscall sub_6E60E0(int this, float a2, int a3, float *a4)
{
  double v5; // st7
  int v7; // eax
  float v8; // [esp+20h] [ebp-4h]

  v5 = a2; /*0x6e60f1*/
  if ( a2 == *(float *)(this + 8) ) /*0x6e60f6*/
  {
    *a4 = *(float *)(this + 0x1C); /*0x6e6102*/
    return 1; /*0x6e6104*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x20); /*0x6e610a*/
    if ( v7 != 0xFFFF ) /*0x6e6112*/
    {
      v8 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC)); /*0x6e613e*/
      sub_6E7470( /*0x6e6149*/
        *(_DWORD **)(this + 0x14),
        v8,
        this + 0x1C,
        1,
        *(_DWORD *)(this + 0x18),
        v7,
        *(float *)(this + 0x24),
        *(float *)(this + 0x28));
      v5 = a2; /*0x6e614e*/
    }
    *a4 = *(float *)(this + 0x1C); /*0x6e6159*/
    *(float *)(this + 8) = v5; /*0x6e615d*/
    return 1; /*0x6e615b*/
  }
}
