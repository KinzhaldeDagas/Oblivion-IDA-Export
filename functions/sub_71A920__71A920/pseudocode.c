_DWORD *sub_71A920()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)FormHeapAlloc(0x38u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiBackToFrontAccumulator_Constructor(v0);
  *v1 = &NiAlphaAccumulator::`vftable';
  *((_BYTE *)v1 + 0x34) = 1;
  *((_BYTE *)v1 + 0x35) = 0;
  return v1;
}
