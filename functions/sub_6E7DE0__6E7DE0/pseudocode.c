int __thiscall sub_6E7DE0(_BYTE *this, int a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x20u); /*0x6e7e07*/
  v4 = (int)v3; /*0x6e7e0c*/
  if ( v3 ) /*0x6e7e1f*/
  {
    sub_6E7F50(v3, 0); /*0x6e7e25*/
    *(_DWORD *)v4 = &NiBoolTimelineInterpolator::`vftable'; /*0x6e7e2a*/
    *(_DWORD *)(v4 + 0x18) = 0; /*0x6e7e30*/
    *(_BYTE *)(v4 + 0x1C) = 0; /*0x6e7e37*/
  }
  else
  {
    v4 = 0; /*0x6e7e3d*/
  }
  sub_6E82F0(this, v4, a2); /*0x6e7e4f*/
  return v4; /*0x6e7e56*/
}
