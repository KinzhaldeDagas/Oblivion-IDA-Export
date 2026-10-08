int __thiscall sub_8D2830(int this)
{
  double v1; // st7
  double v2; // st7
  int result; // eax
  double v4; // st7

  v1 = *(float *)(this + 0x10); /*0x8d2833*/
  *(_DWORD *)(this + 0x10) = *(_DWORD *)(this + 4); /*0x8d2836*/
  *(float *)(this + 4) = v1; /*0x8d2839*/
  v2 = *(float *)(this + 0x20); /*0x8d283f*/
  *(_DWORD *)(this + 0x20) = *(_DWORD *)(this + 8); /*0x8d2842*/
  *(float *)(this + 8) = v2; /*0x8d2845*/
  result = *(_DWORD *)(this + 0x18); /*0x8d2848*/
  v4 = *(float *)(this + 0x24); /*0x8d284b*/
  *(_DWORD *)(this + 0x24) = result; /*0x8d284e*/
  *(float *)(this + 0x18) = v4; /*0x8d2851*/
  return result; /*0x8d2854*/
}
