_DWORD *sub_724E30()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)FormHeapAlloc(0x28u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_738760(v0);
  *v1 = &NiRangeLODData::`vftable';
  v1[2] = LODWORD(Vector3_InitValue_);
  v1[3] = *((_DWORD *)&Vector3_InitValue_ + 1);
  v1[4] = LODWORD(dword_B3F9B0);
  v1[8] = 0;
  v1[9] = 0;
  return v1;
}
