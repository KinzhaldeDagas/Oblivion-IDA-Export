_WORD *sub_71FD30()
{
  _WORD *v0; // eax
  _WORD *v1; // esi

  v0 = (_WORD *)FormHeapAlloc(0x58u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_732DD0(v0);
  *(_DWORD *)v1 = &NiTriShapeData::`vftable';
  *((_DWORD *)v1 + 0x11) = 0;
  *((_DWORD *)v1 + 0x12) = 0;
  *((_DWORD *)v1 + 0x13) = 0;
  v1[0x28] = 0;
  *((_DWORD *)v1 + 0x15) = 0;
  return v1;
}
