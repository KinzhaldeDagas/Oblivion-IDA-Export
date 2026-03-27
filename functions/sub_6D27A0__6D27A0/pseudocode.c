int __thiscall sub_6D27A0(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x34u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6CC4E0(v3);
    *(_DWORD *)v4 = &NiBlendFloatInterpolator::`vftable';
    *(float *)(v4 + 0x30) = flt_A7C6B0;
  }
  else
  {
    v4 = 0;
  }
  sub_6CD3D0(this, v4, a2);
  *(float *)(v4 + 0x30) = *(this + 0xC);
  return v4;
}
