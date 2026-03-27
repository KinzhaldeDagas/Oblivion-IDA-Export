int __cdecl sub_76F110(int a1)
{
  _WORD *v2; // ecx
  unsigned int *v3; // edx
  int result; // eax
  int i; // edi
  unsigned int v6; // ebx
  __int16 v7; // [esp+Ch] [ebp+4h]

  v2 = *(_WORD **)(a1 + 0x10);
  v3 = *(unsigned int **)(a1 + 0x24);
  result = 0;
  v7 = *(_WORD *)(a1 + 4) - 0xC;
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i )
  {
    if ( v7 == 3 )
    {
      if ( v2 )
      {
        v6 = *v2 & 0xFF00 | 0xFFFF0000;
LABEL_8:
        *v3 = ((int)(unsigned __int16)v2[2] >> 4) & 0xFF0 | (0x10 * (v2[1] & 0xFF00 | (v6 << 8)));
        v2 = (_WORD *)((char *)v2 + *(_DWORD *)(a1 + 0x18));
        goto LABEL_9;
      }
    }
    else if ( v2 )
    {
      v6 = *v2 & 0xFF00 | (((__int16)v2[3] & 0xFFFFFF00) << 8);
      goto LABEL_8;
    }
    *v3 = 0xFFFFFFF0;
LABEL_9:
    v3 = (unsigned int *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
    result += *(_DWORD *)(a1 + 0x1C);
  }
  return result;
}
