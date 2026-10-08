_DWORD *sub_71A920()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)FormHeapAlloc(0x38u); /*0x71a944*/
  v1 = v0; /*0x71a949*/
  if ( !v0 ) /*0x71a95c*/
    return 0; /*0x71a986*/
  NiBackToFrontAccumulator_Constructor(v0); /*0x71a960*/
  *v1 = &NiAlphaAccumulator::`vftable'; /*0x71a965*/
  *((_BYTE *)v1 + 0x34) = 1; /*0x71a96b*/
  *((_BYTE *)v1 + 0x35) = 0; /*0x71a96f*/
  return v1; /*0x71a975*/
}
