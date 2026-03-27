_DWORD *sub_6D7450()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)FormHeapAlloc(0x14u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_721350(v0);
  *v1 = &NiTextKeyExtraData::`vftable';
  v1[3] = 0;
  v1[4] = 0;
  return v1;
}
