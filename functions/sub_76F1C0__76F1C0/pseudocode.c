int __cdecl sub_76F1C0(int a1)
{
  unsigned int *v1; // ecx
  int v2; // esi
  int result; // eax
  __int16 v4; // bx
  int i; // edi

  v1 = *(unsigned int **)(a1 + 0x24);
  v2 = *(_DWORD *)(a1 + 0x10);
  result = 0;
  v4 = *(_WORD *)(a1 + 4) - 0x10;
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i )
  {
    if ( v4 == 3 )
    {
      if ( v2 )
        goto LABEL_10;
      *v1 = ((int)*(unsigned __int16 *)4 >> 4) & 0xFF0
          | (0x10 * (*(_WORD *)2 & 0xFF00 | ((*(_WORD *)0 & 0xFF00 | 0xFFFF0000) << 8)));
    }
    else
    {
      if ( v2 )
      {
LABEL_10:
        *v1 = 0xFFFFFFF0;
        goto LABEL_6;
      }
      *v1 = ((int)*(unsigned __int16 *)4 >> 4) & 0xFF0
          | (0x10 * (*(_WORD *)2 & 0xFF00 | ((*(_WORD *)0 & 0xFF00 | ((*(__int16 *)6 & 0xFFFFFF00) << 8)) << 8)));
    }
    v2 = *(_DWORD *)(a1 + 0x18);
LABEL_6:
    v1 = (unsigned int *)((char *)v1 + *(_DWORD *)(a1 + 0x20));
    result += *(_DWORD *)(a1 + 0x1C);
  }
  return result;
}
