int __thiscall sub_7592B0(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x40u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_75E800(v3);
    *(_DWORD *)v4 = &NiPSysDragFieldModifier::`vftable';
    *(_BYTE *)(v4 + 0x30) = 0;
    *(float *)(v4 + 0x34) = Vector3_InitValue_;
    *(float *)(v4 + 0x38) = *(&Vector3_InitValue_ + 1);
    *(float *)(v4 + 0x3C) = dword_B3F9B0;
  }
  else
  {
    v4 = 0;
  }
  sub_75E830(this, v4, a2);
  *(_BYTE *)(v4 + 0x30) = *((_BYTE *)this + 0x30);
  *(float *)(v4 + 0x34) = *(this + 0xD);
  *(float *)(v4 + 0x38) = *(this + 0xE);
  *(float *)(v4 + 0x3C) = *(this + 0xF);
  return v4;
}
