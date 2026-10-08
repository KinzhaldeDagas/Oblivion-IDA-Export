int __cdecl sub_8D3850(int a1, int a2, float *a3, float a4, _DWORD *a5)
{
  double v6; // st7
  int *v7; // edi
  int v8; // ecx
  int v9; // edx
  unsigned __int8 v11; // c0
  unsigned __int8 v12; // c3
  int v13; // ecx
  int v14; // eax
  int *v15; // esi
  int v16; // eax
  _BYTE *v17; // ecx
  int v19; // [esp+0h] [ebp-10h]
  int v20; // [esp+4h] [ebp-Ch]
  int v21; // [esp+8h] [ebp-8h]
  int v22; // [esp+Ch] [ebp-4h]
  int i; // [esp+1Ch] [ebp+Ch]

  v6 = a4 - a3[4]; /*0x8d385c*/
  v7 = (int *)(a3 + 4); /*0x8d3860*/
  v19 = *((_DWORD *)a3 + 4); /*0x8d3870*/
  v8 = *((_DWORD *)a3 + 6); /*0x8d3874*/
  v20 = *((_DWORD *)a3 + 5); /*0x8d3877*/
  v9 = *((_DWORD *)a3 + 7); /*0x8d387b*/
  a3[6] = v6; /*0x8d387e*/
  a3[5] = a4; /*0x8d3885*/
  v21 = v8; /*0x8d388a*/
  v22 = v9; /*0x8d3891*/
  if ( v11 | v12 ) /*0x8d388e*/
    a3[7] = 0.0; /*0x8d38a4*/
  else
    a3[7] = fConstant_1 / v6; /*0x8d389f*/
  v13 = a1; /*0x8d38ab*/
  v14 = 0; /*0x8d38b4*/
  for ( i = 0; i < *(_DWORD *)(a1 + 0x3C); v14 = ++i ) /*0x8d38bc*/
  {
    v15 = (int *)(*(_DWORD *)(v13 + 0x38) + 8 * v14); /*0x8d38ca*/
    if ( a2 <= *(unsigned __int8 *)(*v15 + 8) ) /*0x8d38d5*/
    {
      v16 = v15[1] + *(_DWORD *)(v15[1] + 0x10); /*0x8d38dd*/
      if ( *(_BYTE *)(v16 + 0x91) ) /*0x8d38df*/
        goto LABEL_10; /*0x8d38e7*/
      if ( *(_BYTE *)(*(unsigned __int16 *)(v16 + 0x8C) + *a5) != 8 ) /*0x8d38fb*/
      {
        v17 = (_BYTE *)(*a5 + *(unsigned __int16 *)(v16 + 0x8C)); /*0x8d390e*/
        if ( !*v17 ) /*0x8d3910*/
        {
          *v17 = 1; /*0x8d3915*/
          sub_8DD150((__m128 *)(*(_DWORD *)(v16 + 0x50) + 0x50), a4, (__m128 *)(*(_DWORD *)(v16 + 0x50) + 0x10)); /*0x8d3928*/
        }
LABEL_10:
        sub_8D30B0(*v15, (int *)a3); /*0x8d3930*/
      }
    }
    v13 = a1; /*0x8d393c*/
  }
  *v7 = v19; /*0x8d3956*/
  v7[1] = v20; /*0x8d3968*/
  v7[2] = v21; /*0x8d396b*/
  v7[3] = v22; /*0x8d396e*/
  return v22; /*0x8d3973*/
}
