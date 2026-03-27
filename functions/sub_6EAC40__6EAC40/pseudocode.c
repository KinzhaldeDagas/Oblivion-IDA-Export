int __thiscall sub_6EAC40(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x40u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6CC4E0(v3);
    *(_DWORD *)v4 = &NiBlendPoint3Interpolator::`vftable';
    *(_DWORD *)(v4 + 0x30) = dword_B24FC8;
    *(_DWORD *)(v4 + 0x34) = dword_B24FCC;
    *(_DWORD *)(v4 + 0x38) = dword_B24FD0;
    *(_BYTE *)(v4 + 0x3C) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6CD3D0(this, v4, a2);
  *(float *)(v4 + 0x30) = *(this + 0xC);
  *(float *)(v4 + 0x34) = *(this + 0xD);
  *(float *)(v4 + 0x38) = *(this + 0xE);
  *(_BYTE *)(v4 + 0x3C) = *((_BYTE *)this + 0x3C);
  return v4;
}
