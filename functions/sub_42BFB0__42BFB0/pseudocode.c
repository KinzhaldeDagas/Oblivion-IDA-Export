int __cdecl sub_42BFB0(int a1, int a2, int a3)
{
  unsigned int *v6; // ecx
  int result; // eax
  int v8; // ebp
  _QWORD *v9; // eax
  bool v10; // zf
  unsigned int v11; // ebp
  unsigned int v12; // edx
  unsigned int *v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  bool v16; // zf
  unsigned int *v17; // [esp+14h] [ebp+4h]
  int v18; // [esp+18h] [ebp+8h]
  int v19; // [esp+1Ch] [ebp+Ch]

  while ( 2 ) /*0x42bfc0*/
  {
    v6 = *(unsigned int **)(a1 + 4 * a2); /*0x42bfc0*/
    result = a2; /*0x42bfc5*/
    v8 = a3; /*0x42bfc7*/
    v18 = a2; /*0x42bfc9*/
    v19 = a3; /*0x42bfcd*/
    v17 = v6; /*0x42bfd1*/
    if ( a2 >= a3 ) /*0x42bfd5*/
      goto LABEL_18; /*0x42bfd5*/
    do /*0x42c048*/
    {
      while ( 1 ) /*0x42bfe0*/
      {
        v9 = *(_QWORD **)(a1 + 4 * a3); /*0x42bfe0*/
        if ( *v9 < *(_QWORD *)v6 ) /*0x42bfee*/
        {
          v10 = a2 == a3; /*0x42bff9*/
          break; /*0x42bff9*/
        }
        v10 = a2 == a3; /*0x42bff0*/
        if ( a2 >= a3 ) /*0x42bff2*/
          break; /*0x42bff2*/
        --a3; /*0x42bff4*/
      }
      if ( !v10 ) /*0x42bffb*/
        *(_DWORD *)(a1 + 4 * a2++) = v9; /*0x42bffd*/
      v11 = *v17; /*0x42c007*/
      v12 = v17[1]; /*0x42c00b*/
      while ( 1 ) /*0x42c010*/
      {
        v13 = *(unsigned int **)(a1 + 4 * a2); /*0x42c010*/
        v14 = *v13; /*0x42c013*/
        v15 = v13[1]; /*0x42c015*/
        if ( __PAIR64__(v15, v14) >= __PAIR64__(v12, v11) && __PAIR64__(v15, v14) > __PAIR64__(v12, v11) ) /*0x42c02a*/
          break; /*0x42c02a*/
        v16 = a2 == a3; /*0x42c02c*/
        if ( a2 >= a3 ) /*0x42c02e*/
          goto LABEL_14; /*0x42c02e*/
        ++a2; /*0x42c030*/
      }
      v16 = a2 == a3; /*0x42c035*/
LABEL_14:
      if ( !v16 ) /*0x42c037*/
        *(_DWORD *)(a1 + 4 * a3--) = *(_DWORD *)(a1 + 4 * a2); /*0x42c03c*/
      v6 = v17; /*0x42c044*/
    }
    while ( a2 < a3 ); /*0x42c048*/
    v8 = v19; /*0x42c04a*/
    result = v18; /*0x42c04e*/
LABEL_18:
    *(_DWORD *)(a1 + 4 * a2) = v6; /*0x42c052*/
    a3 = v8; /*0x42c057*/
    if ( result < a2 ) /*0x42c059*/
      result = sub_42BFB0(a1, result, a2 - 1); /*0x42c061*/
    if ( v8 > a2 ) /*0x42c06b*/
    {
      ++a2; /*0x42c06d*/
      continue; /*0x42c070*/
    }
    return result; /*0x42c075*/
  }
}
