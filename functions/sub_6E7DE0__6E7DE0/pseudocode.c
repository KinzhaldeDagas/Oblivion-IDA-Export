int __thiscall sub_6E7DE0(_BYTE *this, int a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x20u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6E7F50(v3, 0);
    *(_DWORD *)v4 = &NiBoolTimelineInterpolator::`vftable';
    *(_DWORD *)(v4 + 0x18) = 0;
    *(_BYTE *)(v4 + 0x1C) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6E82F0(this, v4, a2);
  return v4;
}
