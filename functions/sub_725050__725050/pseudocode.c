int __thiscall sub_725050(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // esi

  v3 = (_DWORD *)FormHeapAlloc(0x28u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_738760(v3);
    *(_DWORD *)v4 = &NiRangeLODData::`vftable';
    *(float *)(v4 + 8) = Vector3_InitValue_;
    *(float *)(v4 + 0xC) = *(&Vector3_InitValue_ + 1);
    *(float *)(v4 + 0x10) = dword_B3F9B0;
    *(_DWORD *)(v4 + 0x20) = 0;
    *(_DWORD *)(v4 + 0x24) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_724DD0(this, (int)this, v4, a2);
  return v4;
}
