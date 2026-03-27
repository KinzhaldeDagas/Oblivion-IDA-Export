float *sub_6E8370()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x18u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6EC220(v0);
  *(_DWORD *)v1 = &NiBoolInterpolator::`vftable';
  *((_BYTE *)v1 + 0xC) = byte_A7C6AC;
  v1[4] = 0.0;
  v1[5] = 0.0;
  return v1;
}
