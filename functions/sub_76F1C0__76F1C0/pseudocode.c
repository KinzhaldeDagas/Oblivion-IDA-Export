int __cdecl sub_76F1C0(int a1)
{
  unsigned int *v1; // ecx
  int v2; // esi
  int result; // eax
  __int16 v4; // bx
  int i; // edi

  v1 = *(unsigned int **)(a1 + 0x24); /*0x76f1c4*/
  v2 = *(_DWORD *)(a1 + 0x10); /*0x76f1c9*/
  result = 0; /*0x76f1d5*/
  v4 = *(_WORD *)(a1 + 4) - 0x10; /*0x76f1d7*/
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i ) /*0x76f1dc*/
  {
    if ( v4 == 3 ) /*0x76f1e7*/
    {
      if ( v2 ) /*0x76f1eb*/
        goto LABEL_10; /*0x76f1eb*/
      *v1 = ((int)*(unsigned __int16 *)4 >> 4) & 0xFF0 /*0x76f227*/
          | (0x10 * (*(_WORD *)2 & 0xFF00 | ((*(_WORD *)0 & 0xFF00 | 0xFFFF0000) << 8)));
    }
    else
    {
      if ( v2 ) /*0x76f242*/
      {
LABEL_10:
        *v1 = 0xFFFFFFF0; /*0x76f28a*/
        goto LABEL_6; /*0x76f290*/
      }
      *v1 = ((int)*(unsigned __int16 *)4 >> 4) & 0xFF0 /*0x76f286*/
          | (0x10 * (*(_WORD *)2 & 0xFF00 | ((*(_WORD *)0 & 0xFF00 | ((*(__int16 *)6 & 0xFFFFFF00) << 8)) << 8)));
    }
    v2 = *(_DWORD *)(a1 + 0x18); /*0x76f229*/
LABEL_6:
    v1 = (unsigned int *)((char *)v1 + *(_DWORD *)(a1 + 0x20)); /*0x76f22c*/
    result += *(_DWORD *)(a1 + 0x1C); /*0x76f22f*/
  }
  return result; /*0x76f23c*/
}
