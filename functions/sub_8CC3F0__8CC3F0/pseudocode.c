const void *__cdecl sub_8CC3F0(const void **a1)
{
  const void *result; // eax
  int v2; // ebp
  char v3; // al
  int v4; // edx
  _DWORD **v5; // esi
  signed int v6; // edi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  char v12; // al

  for ( result = a1[0x15]; result; result = a1[0x15] ) /*0x8cc3fa*/
  {
    v2 = *((_DWORD *)a1[0x14] + (_DWORD)a1[0x15] - 1); /*0x8cc409*/
    a1[0x15] = (char *)a1[0x15] + 0xFFFFFFFF; /*0x8cc412*/
    if ( v2 ) /*0x8cc415*/
    {
      v3 = *(_BYTE *)(v2 + 0x27); /*0x8cc41b*/
      *(_WORD *)(v2 + 0x22) = 0xFFFF; /*0x8cc420*/
      if ( v3 ) /*0x8cc426*/
      {
        v4 = *(_DWORD *)(v2 + 0x60); /*0x8cc428*/
        v5 = (_DWORD **)(v2 + 0x5C); /*0x8cc42b*/
        v6 = 0xFFFFFFFF; /*0x8cc42e*/
        v7 = 0; /*0x8cc431*/
        if ( v4 > 0 ) /*0x8cc435*/
        {
          v8 = *v5; /*0x8cc437*/
          while ( *v8 ) /*0x8cc443*/
          {
            ++v7; /*0x8cc445*/
            ++v8; /*0x8cc446*/
            if ( v7 >= *(_DWORD *)(v2 + 0x60) ) /*0x8cc44c*/
              goto LABEL_10; /*0x8cc44c*/
          }
          v6 = v7++; /*0x8cc450*/
        }
LABEL_10:
        if ( v7 < v4 ) /*0x8cc455*/
        {
          do /*0x8cc46a*/
          {
            v9 = (*v5)[v7]; /*0x8cc459*/
            if ( v9 ) /*0x8cc45e*/
              (*v5)[v6++] = v9; /*0x8cc460*/
            ++v7; /*0x8cc467*/
          }
          while ( v7 < *(_DWORD *)(v2 + 0x60) ); /*0x8cc46a*/
        }
        if ( v6 != 0xFFFFFFFF ) /*0x8cc46f*/
        {
          v10 = *(_DWORD *)(v2 + 0x64) & 0x3FFFFFFF; /*0x8cc474*/
          if ( v10 < v6 ) /*0x8cc47b*/
          {
            v11 = 2 * v10; /*0x8cc47d*/
            if ( v6 >= v11 ) /*0x8cc481*/
              v11 = v6; /*0x8cc483*/
            sub_8A6E40((const void **)(v2 + 0x5C), v11, 4); /*0x8cc489*/
          }
          *(_DWORD *)(v2 + 0x60) = v6; /*0x8cc491*/
        }
        *(_BYTE *)(v2 + 0x27) = 0; /*0x8cc494*/
      }
      v12 = *(_BYTE *)(v2 + 0x28); /*0x8cc49b*/
      if ( v12 != (*(_BYTE *)(v2 + 0x29) != 0) ) /*0x8cc4ab*/
      {
        if ( v12 ) /*0x8cc4b1*/
          sub_8CBA20((int)a1, v2); /*0x8cc4b3*/
        else
          sub_8CBAF0(a1, v2); /*0x8cc4ba*/
      }
    }
  }
  return result; /*0x8cc4d0*/
}
