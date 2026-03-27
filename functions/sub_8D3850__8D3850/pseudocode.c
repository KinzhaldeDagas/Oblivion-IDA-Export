int __cdecl sub_8D3850(int a1, int a2, int *a3, float a4, _DWORD *a5)
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

  v6 = a4 - *((float *)a3 + 4);
  v7 = a3 + 4;
  v19 = a3[4];
  v8 = a3[6];
  v20 = a3[5];
  v9 = a3[7];
  *((float *)a3 + 6) = v6;
  *((float *)a3 + 5) = a4;
  v21 = v8;
  v22 = v9;
  if ( v11 | v12 )
    a3[7] = 0;
  else
    *((float *)a3 + 7) = fConstant_1 / v6;
  v13 = a1;
  v14 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 0x3C); v14 = ++i )
  {
    v15 = (int *)(*(_DWORD *)(v13 + 0x38) + 8 * v14);
    if ( a2 <= *(unsigned __int8 *)(*v15 + 8) )
    {
      v16 = v15[1] + *(_DWORD *)(v15[1] + 0x10);
      if ( *(_BYTE *)(v16 + 0x91) )
        goto LABEL_10;
      if ( *(_BYTE *)(*(unsigned __int16 *)(v16 + 0x8C) + *a5) != 8 )
      {
        v17 = (_BYTE *)(*a5 + *(unsigned __int16 *)(v16 + 0x8C));
        if ( !*v17 )
        {
          *v17 = 1;
          sub_8DD150(*(_DWORD *)(v16 + 0x50) + 0x50, a4, *(_DWORD *)(v16 + 0x50) + 0x10);
        }
LABEL_10:
        sub_8D30B0(*v15, a3);
      }
    }
    v13 = a1;
  }
  *v7 = v19;
  v7[1] = v20;
  v7[2] = v21;
  v7[3] = v22;
  return v22;
}
