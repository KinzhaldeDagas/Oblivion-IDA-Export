_WORD *sub_719E00()
{
  _WORD *v0; // eax
  _WORD *v1; // esi

  v0 = (_WORD *)FormHeapAlloc(0x50u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_732DD0(v0);
  *(_DWORD *)v1 = &NiTriStripsData::`vftable';
  v1[0x22] = 0;
  *((_DWORD *)v1 + 0x12) = 0;
  *((_DWORD *)v1 + 0x13) = 0;
  return v1;
}
