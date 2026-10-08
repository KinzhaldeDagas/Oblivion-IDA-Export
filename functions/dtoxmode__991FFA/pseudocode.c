unsigned int __cdecl __dtoxmode(char a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // ecx
  unsigned __int8 v3; // dl
  int v4; // edi
  int v5; // eax
  unsigned int v6; // edi
  unsigned __int8 *v7; // eax
  const unsigned __int8 *v8; // esi

  v2 = a2; /*0x992009*/
  if ( a2[1] == 0x3A ) /*0x99200b*/
    v2 = a2 + 2; /*0x99200d*/
  v3 = *v2; /*0x992010*/
  if ( (*v2 == 0x5C || v3 == 0x2F) && !v2[1] || (a1 & 0x10) != 0 || (v4 = 0x8000, !v3) ) /*0x99202d*/
    v4 = 0x4040; /*0x99202f*/
  v5 = (unsigned __int8)a1 << 7; /*0x992034*/
  LOBYTE(v5) = ~(_BYTE)v5; /*0x992037*/
  v6 = v5 & 0xFFFF0080 | 0x100 | v4; /*0x992046*/
  v7 = _mbsrchr(a2, 0x2Eu); /*0x992048*/
  v8 = v7; /*0x99204d*/
  if ( v7 ) /*0x992053*/
  {
    if ( !_mbsicmp(v7, ".exe") || !_mbsicmp(v8, ".cmd") || !_mbsicmp(v8, ".bat") || !_mbsicmp(v8, ".com") ) /*0x99208e*/
      v6 |= 0x40u; /*0x992099*/
  }
  return (v6 >> 3) & 0x38 | v6 | (((v6 >> 3) & 0x38 | v6) >> 6) & 7; /*0x9920b0*/
}
