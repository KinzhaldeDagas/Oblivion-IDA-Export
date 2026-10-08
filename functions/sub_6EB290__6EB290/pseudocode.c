int __thiscall sub_6EB290(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x44u); /*0x6eb2b7*/
  v4 = (int)v3; /*0x6eb2bc*/
  if ( v3 ) /*0x6eb2cf*/
  {
    sub_6CC4E0(v3); /*0x6eb2d3*/
    *(_DWORD *)v4 = &NiBlendColorInterpolator::`vftable'; /*0x6eb2d8*/
    *(_DWORD *)(v4 + 0x30) = dword_B24FD4; /*0x6eb2e3*/
    *(_DWORD *)(v4 + 0x34) = dword_B24FD8; /*0x6eb2ec*/
    *(_DWORD *)(v4 + 0x38) = dword_B24FDC; /*0x6eb2f5*/
    *(_DWORD *)(v4 + 0x3C) = dword_B24FE0; /*0x6eb2fd*/
    *(_BYTE *)(v4 + 0x40) = 0; /*0x6eb300*/
  }
  else
  {
    v4 = 0; /*0x6eb306*/
  }
  sub_6CD3D0(this, v4, a2); /*0x6eb318*/
  *(float *)(v4 + 0x30) = *(this + 0xC); /*0x6eb320*/
  *(float *)(v4 + 0x34) = *(this + 0xD); /*0x6eb326*/
  *(float *)(v4 + 0x38) = *(this + 0xE); /*0x6eb32c*/
  *(float *)(v4 + 0x3C) = *(this + 0xF); /*0x6eb332*/
  *(_BYTE *)(v4 + 0x40) = *((_BYTE *)this + 0x40); /*0x6eb338*/
  return v4; /*0x6eb33d*/
}
