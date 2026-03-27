int __thiscall sub_6D2EC0(float *this, int a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x18u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6EC220(v3);
    *(_DWORD *)v4 = &NiFloatInterpolator::`vftable';
    *(float *)(v4 + 0xC) = flt_A7C6B0;
    *(_DWORD *)(v4 + 0x10) = 0;
    *(_DWORD *)(v4 + 0x14) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6D2D50(this, v4, a2);
  return v4;
}
