char __thiscall sub_6E5620(int this, float a2, int a3, float *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp-4h]

  v5 = a2; /*0x6e5631*/
  if ( a2 == *(float *)(this + 8) ) /*0x6e5636*/
  {
    *a4 = *(float *)(this + 0x1C); /*0x6e5642*/
    return 1; /*0x6e5644*/
  }
  else
  {
    if ( *(_DWORD *)(this + 0x20) != 0xFFFF ) /*0x6e5652*/
    {
      v7 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC)); /*0x6e566e*/
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, this + 0x1C, 1, *(char **)(this + 0x18), *(_DWORD *)(this + 0x20)); /*0x6e5679*/
      v5 = a2; /*0x6e567e*/
    }
    *a4 = *(float *)(this + 0x1C); /*0x6e5689*/
    *(float *)(this + 8) = v5; /*0x6e568d*/
    return 1; /*0x6e568b*/
  }
}
