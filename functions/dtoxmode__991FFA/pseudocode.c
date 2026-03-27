unsigned int __cdecl __dtoxmode(unsigned __int8 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // ecx
  unsigned __int8 v3; // dl
  int v4; // edi
  int v5; // eax
  unsigned int v6; // edi
  unsigned __int8 *v7; // eax
  const unsigned __int8 *v8; // esi

  v2 = a2;
  if ( a2[1] == 0x3A )
    v2 = a2 + 2;
  v3 = *v2;
  if ( (*v2 == 0x5C || v3 == 0x2F) && !v2[1] || (a1 & 0x10) != 0 || (v4 = 0x8000, !v3) )
    v4 = 0x4040;
  v5 = a1 << 7;
  LOBYTE(v5) = ~(_BYTE)v5;
  v6 = v5 & 0xFFFF0080 | 0x100 | v4;
  v7 = _mbsrchr(a2, 0x2Eu);
  v8 = v7;
  if ( v7 )
  {
    if ( !_mbsicmp(v7, ".exe") || !_mbsicmp(v8, ".cmd") || !_mbsicmp(v8, ".bat") || !_mbsicmp(v8, ".com") )
      v6 |= 0x40u;
  }
  return (v6 >> 3) & 0x38 | v6 | (((v6 >> 3) & 0x38 | v6) >> 6) & 7;
}
