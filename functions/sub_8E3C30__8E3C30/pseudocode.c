_WORD *__cdecl sub_8E3C30(
        int a1,
        int a2,
        int a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6,
        const void **a7,
        const void **a8)
{
  int v9; // ebx
  _WORD *v10; // edi
  unsigned int i; // ecx
  int v12; // eax
  __int16 v13; // dx
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  unsigned int v23; // ecx
  __int16 v24; // bx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  _WORD *v28; // edx
  unsigned int v29; // ecx
  _WORD *result; // eax
  __int16 v31; // bx
  _WORD *v32; // edi
  int v33; // eax
  int v34; // ecx
  __int16 j; // [esp+1Ch] [ebp+Ch]

  v9 = *(unsigned __int16 *)(a3 + 8); /*0x8e3c46*/
  v10 = (_WORD *)(*(_DWORD *)(a1 + 0x4C) + 4 * v9); /*0x8e3c4b*/
  for ( i = (unsigned __int16)v10[0xFFFFFFFE]; a5 < i; LOWORD(v9) = v9 - 1 ) /*0x8e3c54*/
  {
    v12 = a2 + 0x10 * (unsigned __int16)v10[0xFFFFFFFF]; /*0x8e3c6b*/
    v13 = v10[0xFFFFFFFF]; /*0x8e3c70*/
    *v10 = i; /*0x8e3c74*/
    v10[1] = v13; /*0x8e3c77*/
    if ( (i & 1) != 0 ) /*0x8e3c7b*/
    {
      v14 = *(_DWORD *)(v12 + 4) - *(_DWORD *)a3; /*0x8e3c82*/
      v15 = *(_DWORD *)(a3 + 4) - *(_DWORD *)v12; /*0x8e3c87*/
      *(_WORD *)(v12 + 0xA) = v9; /*0x8e3c89*/
      if ( ((v15 | v14) & 0x80008000) == 0 ) /*0x8e3c95*/
        sub_8E1280(*(_DWORD *)(a1 + 0x78), a3, a4, v12, a7); /*0x8e3ca7*/
    }
    else
    {
      *(_WORD *)(v12 + 8) = v9; /*0x8e3cae*/
    }
    v10 += 0xFFFFFFFE; /*0x8e3cb6*/
    v10[1] = a4; /*0x8e3cb9*/
    i = (unsigned __int16)v10[0xFFFFFFFE]; /*0x8e3cbd*/
  }
  *(_WORD *)(a3 + 8) = v9; /*0x8e3ccf*/
  *v10 = a5; /*0x8e3cd3*/
  v16 = *(_DWORD *)(a1 + 0x4C) + 4 * *(unsigned __int16 *)(a3 + 0xA); /*0x8e3cdd*/
  v17 = *(unsigned __int16 *)(v16 + 4); /*0x8e3ce0*/
  v18 = a6; /*0x8e3ce4*/
  v19 = v16 + 4; /*0x8e3ce8*/
  for ( j = 0; v18 > v17; v19 += 4 ) /*0x8e3cf5*/
  {
    ++j; /*0x8e3d00*/
    v20 = a2 + 0x10 * *(unsigned __int16 *)(v19 + 2); /*0x8e3d0b*/
    *(_DWORD *)(v19 - 4) = *(_DWORD *)v19; /*0x8e3d12*/
    *(_WORD *)(v19 + 2) = a4; /*0x8e3d15*/
    if ( (v17 & 1) != 0 ) /*0x8e3d19*/
    {
      --*(_WORD *)(v20 + 0xA); /*0x8e3d50*/
    }
    else
    {
      v21 = (*(_DWORD *)(a3 + 4) - *(_DWORD *)v20) | (*(_DWORD *)(v20 + 4) - *(_DWORD *)a3); /*0x8e3d27*/
      --*(_WORD *)(v20 + 8); /*0x8e3d29*/
      if ( (v21 & 0x80008000) == 0 ) /*0x8e3d33*/
      {
        sub_8E1280(*(_DWORD *)(a1 + 0x78), a3, a4, v20, a7); /*0x8e3d45*/
        v18 = a6; /*0x8e3d4a*/
      }
    }
    v17 = *(unsigned __int16 *)(v19 + 4); /*0x8e3d54*/
  }
  *(_WORD *)(a3 + 0xA) += j; /*0x8e3d64*/
  v22 = *(_DWORD *)(a1 + 0x4C) + 4 * *(unsigned __int16 *)(a3 + 0xA); /*0x8e3d73*/
  v23 = *(unsigned __int16 *)(v22 - 4); /*0x8e3d76*/
  v24 = 0; /*0x8e3d7a*/
  if ( v18 < v23 ) /*0x8e3d7e*/
  {
    do /*0x8e3dde*/
    {
      v25 = *(unsigned __int16 *)(v22 - 2); /*0x8e3d80*/
      v22 -= 4; /*0x8e3d88*/
      v26 = a2 + 0x10 * v25; /*0x8e3d8e*/
      --v24; /*0x8e3d92*/
      *(_DWORD *)(v22 + 4) = *(_DWORD *)v22; /*0x8e3d96*/
      *(_WORD *)(v22 + 2) = a4; /*0x8e3d99*/
      if ( (v23 & 1) != 0 ) /*0x8e3d9d*/
      {
        ++*(_WORD *)(v26 + 0xA); /*0x8e3dd0*/
      }
      else
      {
        v27 = (*(_DWORD *)(a3 + 4) - *(_DWORD *)v26) | (*(_DWORD *)(v26 + 4) - *(_DWORD *)a3); /*0x8e3dab*/
        ++*(_WORD *)(v26 + 8); /*0x8e3dad*/
        if ( (v27 & 0x80008000) == 0 ) /*0x8e3db7*/
          sub_8E1310(*(_DWORD *)(a1 + 0x78), a3, a4, v26, a8); /*0x8e3dc9*/
      }
      v23 = *(unsigned __int16 *)(v22 - 4); /*0x8e3dd4*/
    }
    while ( a6 < v23 ); /*0x8e3dde*/
    LOWORD(v18) = a6; /*0x8e3de0*/
  }
  *(_WORD *)(a3 + 0xA) += v24; /*0x8e3de2*/
  *(_WORD *)v22 = v18; /*0x8e3de6*/
  v28 = (_WORD *)(*(_DWORD *)(a1 + 0x4C) + 4 * *(unsigned __int16 *)(a3 + 8)); /*0x8e3df8*/
  v29 = (unsigned __int16)v28[2]; /*0x8e3dfb*/
  result = v28 + 2; /*0x8e3dff*/
  v31 = 0; /*0x8e3e02*/
  if ( a5 <= v29 ) /*0x8e3e06*/
  {
    *(_WORD *)(a3 + 8) = *(_WORD *)(a3 + 8); /*0x8e3e7f*/
    *v28 = a5; /*0x8e3e83*/
  }
  else
  {
    do /*0x8e3e6e*/
    {
      v32 = result; /*0x8e3e14*/
      v33 = a2 + 0x10 * (unsigned __int16)result[1]; /*0x8e3e1d*/
      ++v31; /*0x8e3e21*/
      *((_DWORD *)v32 + 0xFFFFFFFF) = *(_DWORD *)v32; /*0x8e3e25*/
      v32[1] = a4; /*0x8e3e28*/
      if ( (v29 & 1) != 0 ) /*0x8e3e2c*/
      {
        v34 = (*(_DWORD *)(v33 + 4) - *(_DWORD *)a3) | (*(_DWORD *)(a3 + 4) - *(_DWORD *)v33); /*0x8e3e38*/
        --*(_WORD *)(v33 + 0xA); /*0x8e3e3a*/
        if ( (v34 & 0x80008000) == 0 ) /*0x8e3e44*/
          sub_8E1310(*(_DWORD *)(a1 + 0x78), a3, a4, v33, a8); /*0x8e3e56*/
      }
      else
      {
        --*(_WORD *)(v33 + 8); /*0x8e3e5d*/
      }
      v29 = (unsigned __int16)v32[2]; /*0x8e3e61*/
      result = v32 + 2; /*0x8e3e6b*/
    }
    while ( a5 > v29 ); /*0x8e3e6e*/
    *(_WORD *)(a3 + 8) += v31; /*0x8e3e70*/
    *v32 = a5; /*0x8e3e77*/
  }
  return result; /*0x8e3e7a*/
}
