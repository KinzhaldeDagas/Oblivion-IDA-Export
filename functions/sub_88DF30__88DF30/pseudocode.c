unsigned int __thiscall sub_88DF30(int this)
{
  unsigned int v1; // edx
  unsigned int result; // eax
  double v3; // st7

  v1 = *(_DWORD *)(this + 0xA4);
  for ( result = 0; result < v1; ++result )
    *(_DWORD *)(*(_DWORD *)(this + 0xA0) + 4 * result) = 0;
  v3 = flt_A6D2D8;
  *(_DWORD *)(this + 0xB4) = 0;
  *(float *)(this + 0xB8) = v3;
  *(_DWORD *)(this + 0xBC) = 0;
  *(float *)(this + 0xC0) = v3;
  *(_DWORD *)(this + 0xC4) = 0;
  *(float *)(this + 0xC8) = v3;
  *(_DWORD *)(this + 0xCC) = 0;
  *(float *)(this + 0xD0) = v3;
  *(_DWORD *)(this + 0xD4) = 0;
  *(float *)(this + 0xD8) = v3;
  *(_DWORD *)(this + 0xDC) = 0;
  *(float *)(this + 0xE0) = v3;
  *(_DWORD *)(this + 0xE4) = 0;
  *(float *)(this + 0xE8) = v3;
  *(_DWORD *)(this + 0xEC) = 0;
  *(float *)(this + 0xF0) = v3;
  *(_DWORD *)(this + 0xF4) = 0;
  *(float *)(this + 0xF8) = v3;
  return result;
}
