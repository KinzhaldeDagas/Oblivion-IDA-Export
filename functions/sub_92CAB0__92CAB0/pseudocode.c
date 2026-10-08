int __cdecl sub_92CAB0(int a1, int a2, int a3, int (__cdecl *a4)(char *, int, int *))
{
  int (__cdecl *v4)(char *, int, int *); // ebx
  int v5; // esi
  int v6; // edi
  _DWORD *v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int *i; // eax
  int *j; // eax
  int *v14; // eax
  int v15; // ebx
  int *v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int result; // eax
  char v22; // [esp+1Ah] [ebp-46h] BYREF
  char v23; // [esp+1Bh] [ebp-45h] BYREF
  int *v24; // [esp+1Ch] [ebp-44h]
  int v25; // [esp+20h] [ebp-40h]
  int v26; // [esp+24h] [ebp-3Ch]
  int v27; // [esp+28h] [ebp-38h]
  int v28; // [esp+2Ch] [ebp-34h]
  int v29; // [esp+30h] [ebp-30h]
  _DWORD v30[8]; // [esp+40h] [ebp-20h] BYREF

  v4 = a4; /*0x92caba*/
  while ( 1 ) /*0x92cac0*/
  {
    v5 = a3; /*0x92cac0*/
    v6 = a2; /*0x92cac3*/
    v7 = (_DWORD *)(a1 + 0x14 * ((a2 + a3) >> 1)); /*0x92cad1*/
    v8 = v7[1]; /*0x92cad6*/
    v30[0] = *v7; /*0x92cad9*/
    v9 = v7[2]; /*0x92cadd*/
    v30[1] = v8; /*0x92cae0*/
    v10 = v7[3]; /*0x92cae4*/
    v11 = v7[4]; /*0x92cae7*/
    v30[2] = v9; /*0x92caea*/
    v30[3] = v10; /*0x92caee*/
    v30[4] = v11; /*0x92caf2*/
    do /*0x92cc12*/
    {
      v24 = (int *)(a1 + 0x14 * v6); /*0x92cb05*/
      if ( *(_BYTE *)v4(&v22, (int)v24, v30) ) /*0x92cb10*/
      {
        for ( i = v24; ; i = v24 ) /*0x92cb19*/
        {
          ++v6; /*0x92cb31*/
          v24 = i + 5; /*0x92cb32*/
          if ( !*(_BYTE *)v4(&v22, (int)(i + 5), v30) ) /*0x92cb38*/
            break; /*0x92cb38*/
        }
      }
      v24 = (int *)(a1 + 0x14 * v5); /*0x92cb4f*/
      if ( *(_BYTE *)v4(&v23, (int)v30, v24) ) /*0x92cb5b*/
      {
        for ( j = v24; ; j = v24 ) /*0x92cb64*/
        {
          --v5; /*0x92cb7e*/
          v24 = j + 0xFFFFFFFB; /*0x92cb7f*/
          if ( !*(_BYTE *)v4(&v23, (int)v30, j + 0xFFFFFFFB) ) /*0x92cb85*/
            break; /*0x92cb85*/
        }
      }
      if ( v5 < v6 ) /*0x92cb90*/
        break; /*0x92cb90*/
      if ( v5 != v6 ) /*0x92cb96*/
      {
        v14 = (int *)(a1 + 0x14 * v5); /*0x92cb9e*/
        v25 = *v14; /*0x92cba5*/
        v26 = v14[1]; /*0x92cbac*/
        v27 = v14[2]; /*0x92cbb3*/
        v15 = v14[3]; /*0x92cbb7*/
        v29 = v14[4]; /*0x92cbbd*/
        v16 = (int *)(a1 + 0x14 * v6); /*0x92cbc4*/
        v28 = v15; /*0x92cbc7*/
        *v14 = *v16; /*0x92cbcf*/
        v14[1] = v16[1]; /*0x92cbd4*/
        v14[2] = v16[2]; /*0x92cbda*/
        v14[3] = v16[3]; /*0x92cbe0*/
        v4 = a4; /*0x92cbe6*/
        v14[4] = v16[4]; /*0x92cbe9*/
        v17 = v26; /*0x92cbf0*/
        *v16 = v25; /*0x92cbf4*/
        v18 = v27; /*0x92cbf6*/
        v16[1] = v17; /*0x92cbfa*/
        v19 = v28; /*0x92cbfd*/
        v16[2] = v18; /*0x92cc01*/
        v20 = v29; /*0x92cc04*/
        v16[3] = v19; /*0x92cc08*/
        v16[4] = v20; /*0x92cc0b*/
      }
      --v5; /*0x92cc0e*/
      ++v6; /*0x92cc0f*/
    }
    while ( v6 <= v5 ); /*0x92cc12*/
    result = a2; /*0x92cc18*/
    if ( a2 < v5 ) /*0x92cc1d*/
      result = sub_92CAB0(a1, a2, v5, v4); /*0x92cc26*/
    if ( v6 >= a3 ) /*0x92cc31*/
      break; /*0x92cc31*/
    a2 = v6; /*0x92cc33*/
  }
  return result; /*0x92cc3b*/
}
