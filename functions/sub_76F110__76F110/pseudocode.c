int __cdecl sub_76F110(int a1)
{
  _WORD *v2; // ecx
  unsigned int *v3; // edx
  int result; // eax
  int i; // edi
  unsigned int v6; // ebx
  __int16 v7; // [esp+Ch] [ebp+4h]

  v2 = *(_WORD **)(a1 + 0x10); /*0x76f115*/
  v3 = *(unsigned int **)(a1 + 0x24); /*0x76f118*/
  result = 0; /*0x76f127*/
  v7 = *(_WORD *)(a1 + 4) - 0xC; /*0x76f129*/
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i ) /*0x76f12f*/
  {
    if ( v7 == 3 ) /*0x76f13d*/
    {
      if ( v2 ) /*0x76f141*/
      {
        v6 = *v2 & 0xFF00 | 0xFFFF0000; /*0x76f14c*/
LABEL_8:
        *v3 = ((int)(unsigned __int16)v2[2] >> 4) & 0xFF0 | (0x10 * (v2[1] & 0xFF00 | (v6 << 8))); /*0x76f178*/
        v2 = (_WORD *)((char *)v2 + *(_DWORD *)(a1 + 0x18)); /*0x76f19b*/
        goto LABEL_9; /*0x76f19b*/
      }
    }
    else if ( v2 ) /*0x76f15e*/
    {
      v6 = *v2 & 0xFF00 | (((__int16)v2[3] & 0xFFFFFF00) << 8); /*0x76f176*/
      goto LABEL_8; /*0x76f176*/
    }
    *v3 = 0xFFFFFFF0; /*0x76f154*/
LABEL_9:
    v3 = (unsigned int *)((char *)v3 + *(_DWORD *)(a1 + 0x20)); /*0x76f19e*/
    result += *(_DWORD *)(a1 + 0x1C); /*0x76f1a1*/
  }
  return result; /*0x76f1af*/
}
