int __thiscall sub_6E84B0(_BYTE *this, int a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x18u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6EC220(v3);
    *(_DWORD *)v4 = &NiBoolInterpolator::`vftable';
    *(_BYTE *)(v4 + 0xC) = byte_A7C6AC;
    *(_DWORD *)(v4 + 0x10) = 0;
    *(_DWORD *)(v4 + 0x14) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6E82F0(this, v4, a2);
  return v4;
}
