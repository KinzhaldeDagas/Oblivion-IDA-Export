_WORD *sub_73B520()
{
  _WORD *v0; // eax
  _WORD *v1; // esi

  v0 = (_WORD *)FormHeapAlloc(0x54u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_719D20(v0);
  *(_DWORD *)v1 = &NiTriStripsDynamicData::`vftable';
  v1[0x28] = 0;
  v1[0x29] = 0;
  return v1;
}
