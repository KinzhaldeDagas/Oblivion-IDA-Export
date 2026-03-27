_DWORD *sub_716B20()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)FormHeapAlloc(0x10u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_721350(v0);
  *v1 = &NiStringExtraData::`vftable';
  v1[3] = 0;
  return v1;
}
