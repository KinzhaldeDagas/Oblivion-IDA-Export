unsigned int __thiscall sub_8E0E90(_DWORD *this, int a2, int a3, int a4, __int16 a5, _OWORD *a6)
{
  _DWORD *v6; // ebx
  _OWORD *v7; // ecx
  int v8; // eax
  _OWORD *v9; // esi
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  unsigned __int16 *v15; // esi
  bool v16; // zf
  int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  unsigned int v22; // esi
  unsigned int v23; // eax
  int v24; // eax
  int v25; // ebx
  int v26; // ecx
  int v27; // esi
  unsigned int result; // eax
  unsigned int k; // edi
  _WORD *v30; // [esp+Ch] [ebp-14h]
  int v31; // [esp+10h] [ebp-10h]
  unsigned int i; // [esp+10h] [ebp-10h]
  int v34; // [esp+18h] [ebp-8h]
  unsigned int j; // [esp+18h] [ebp-8h]
  int v36; // [esp+1Ch] [ebp-4h]

  v6 = this; /*0x8e0ea1*/
  v36 = *(unsigned __int16 *)(a4 + 0xA); /*0x8e0eaa*/
  v34 = *(unsigned __int16 *)(a4 + 8); /*0x8e0eb7*/
  v7 = a6; /*0x8e0ec3*/
  if ( a2 >> 7 >= 0 ) /*0x8e0ec5*/
  {
    v8 = (a2 >> 7) + 1; /*0x8e0ec7*/
    do /*0x8e0ed1*/
    {
      v9 = v7++; /*0x8e0ec8*/
      --v8; /*0x8e0ecd*/
      *v9 = 0; /*0x8e0ece*/
    }
    while ( v8 ); /*0x8e0ed1*/
  }
  v10 = v6[0x13] + 4; /*0x8e0ed9*/
  if ( v6[0x1C] ) /*0x8e0ed6*/
  {
    v11 = 0x10 - v6[0x1D]; /*0x8e0eec*/
    if ( a3 >> v11 > 0 ) /*0x8e0ef5*/
    {
      v12 = v6[0x1E]; /*0x8e0efb*/
      v13 = 0x10 * (a3 >> v11); /*0x8e0efe*/
      v14 = *(unsigned __int16 *)(v13 + v12 - 0x10); /*0x8e0f01*/
      v15 = (unsigned __int16 *)(v13 + v12 - 0x10); /*0x8e0f06*/
      *((_DWORD *)a6 + (v14 >> 5)) ^= 1 << (v14 & 0x1F); /*0x8e0f19*/
      v30 = *((_WORD **)v15 + 1); /*0x8e0f23*/
      if ( *((_DWORD *)v15 + 2) - 1 >= 0 ) /*0x8e0f27*/
      {
        v31 = *((_DWORD *)v15 + 2); /*0x8e0f2a*/
        do /*0x8e0f66*/
        {
          if ( *v30 != a5 ) /*0x8e0f3b*/
            *((_DWORD *)a6 + ((int)(unsigned __int16)*v30 >> 5)) ^= 1 << (*v30 & 0x1F); /*0x8e0f4f*/
          v16 = v31 == 1; /*0x8e0f5d*/
          ++v30; /*0x8e0f5e*/
          --v31; /*0x8e0f62*/
        }
        while ( !v16 ); /*0x8e0f66*/
      }
      v17 = *v15; /*0x8e0f68*/
      v18 = v6[0x10]; /*0x8e0f6b*/
      v19 = v6[0x13]; /*0x8e0f6e*/
      v17 *= 0x10; /*0x8e0f71*/
      v20 = *(unsigned __int16 *)(v17 + v18 + 8); /*0x8e0f74*/
      v21 = v18 + v17; /*0x8e0f79*/
      v22 = v19 + 4 * v20 + 4; /*0x8e0f7b*/
      v23 = v19 + 4 * *(unsigned __int16 *)(v21 + 0xA); /*0x8e0f83*/
      for ( i = v23; v22 < v23; v22 += 4 ) /*0x8e0f8c*/
      {
        if ( (*(_BYTE *)v22 & 1) == 0 ) /*0x8e0f93*/
        {
          v24 = *(unsigned __int16 *)(v22 + 2); /*0x8e0f99*/
          v25 = 1 << (v24 & 0x1F); /*0x8e0fa3*/
          v24 >>= 5; /*0x8e0fa5*/
          v26 = ~v25 & *((_DWORD *)a6 + v24); /*0x8e0fad*/
          v6 = this; /*0x8e0faf*/
          *((_DWORD *)a6 + v24) = v26; /*0x8e0fb3*/
          v23 = i; /*0x8e0fb6*/
        }
      }
      v10 = v6[0x13] + 4 * *(unsigned __int16 *)(v21 + 8) + 4; /*0x8e0fc8*/
    }
  }
  for ( j = v6[0x13] + 4 * v34; v10 < j; *((_DWORD *)a6 + (v27 >> 5)) ^= 1 << (v27 & 0x1F) ) /*0x8e0fdc*/
  {
    v27 = *(unsigned __int16 *)(v10 + 2); /*0x8e0fe4*/
    v10 += 4; /*0x8e0ff6*/
  }
  result = v10 + 4; /*0x8e100b*/
  for ( k = v6[0x13] + 4 * v36; result < k; result += 4 ) /*0x8e1013*/
  {
    if ( (*(_BYTE *)result & 1) == 0 ) /*0x8e1018*/
      *((_DWORD *)a6 + ((int)*(unsigned __int16 *)(result + 2) >> 5)) ^= 1 << (*(_WORD *)(result + 2) & 0x1F); /*0x8e102d*/
  }
  return result; /*0x8e1037*/
}
