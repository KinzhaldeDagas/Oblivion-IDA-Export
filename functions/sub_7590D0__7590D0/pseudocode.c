float *sub_7590D0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x40u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_75E800(v0);
  *(_DWORD *)v1 = &NiPSysDragFieldModifier::`vftable';
  *((_BYTE *)v1 + 0x30) = 0;
  v1[0xD] = Vector3_InitValue_;
  v1[0xE] = *(&Vector3_InitValue_ + 1);
  v1[0xF] = dword_B3F9B0;
  return v1;
}
