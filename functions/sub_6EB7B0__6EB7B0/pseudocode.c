int __thiscall sub_6EB7B0(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x34u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6CC4E0(v3);
    *(_DWORD *)v4 = &NiBlendBoolInterpolator::`vftable';
    *(_BYTE *)(v4 + 0x30) = byte_A7C6AC;
  }
  else
  {
    v4 = 0;
  }
  sub_6CD3D0(this, v4, a2);
  *(_BYTE *)(v4 + 0x30) = *((_BYTE *)this + 0x30);
  return v4;
}
