float *sub_6E7E70()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x20u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6E7F50(v0, 0);
  *(_DWORD *)v1 = &NiBoolTimelineInterpolator::`vftable';
  v1[6] = 0.0;
  *((_BYTE *)v1 + 0x1C) = 0;
  return v1;
}
