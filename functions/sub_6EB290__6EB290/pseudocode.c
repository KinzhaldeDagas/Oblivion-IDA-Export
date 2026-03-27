int __thiscall sub_6EB290(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x44u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6CC4E0(v3);
    *(_DWORD *)v4 = &NiBlendColorInterpolator::`vftable';
    *(_DWORD *)(v4 + 0x30) = dword_B24FD4;
    *(_DWORD *)(v4 + 0x34) = dword_B24FD8;
    *(_DWORD *)(v4 + 0x38) = dword_B24FDC;
    *(_DWORD *)(v4 + 0x3C) = dword_B24FE0;
    *(_BYTE *)(v4 + 0x40) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6CD3D0(this, v4, a2);
  *(float *)(v4 + 0x30) = *(this + 0xC);
  *(float *)(v4 + 0x34) = *(this + 0xD);
  *(float *)(v4 + 0x38) = *(this + 0xE);
  *(float *)(v4 + 0x3C) = *(this + 0xF);
  *(_BYTE *)(v4 + 0x40) = *((_BYTE *)this + 0x40);
  return v4;
}
