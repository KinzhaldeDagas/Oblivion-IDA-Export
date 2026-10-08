int __cdecl sub_898F10(_DWORD *a1, const void **a2)
{
  int v2; // esi
  int i; // edi
  int v4; // ebx
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // ebx
  int result; // eax
  _DWORD *v9; // esi
  int v10; // edi

  v2 = a1[0xC]; /*0x898f17*/
  if ( v2 ) /*0x898f1d*/
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 0x38); ++i ) /*0x898f26*/
    {
      if ( i || *(_DWORD *)(**(_DWORD **)(v2 + 0x34) + 0x14) ) /*0x898f31*/
        sub_8DA080(a2, *(_WORD **)(*(_DWORD *)(v2 + 0x34) + 4 * i)); /*0x898f43*/
    }
  }
  v4 = a1[0xE]; /*0x898f50*/
  if ( v4 != v4 + 4 * a1[0xF] ) /*0x898f5b*/
  {
    do /*0x898f95*/
    {
      v5 = (_DWORD *)(*(_DWORD *)v4 + 0x34); /*0x898f65*/
      v6 = 0; /*0x898f68*/
      if ( *(int *)(*(_DWORD *)v4 + 0x38) > 0 ) /*0x898f6c*/
      {
        do /*0x898f85*/
          sub_8DA080(a2, *(_WORD **)(*v5 + 4 * v6++)); /*0x898f7a*/
        while ( v6 < v5[1] ); /*0x898f85*/
      }
      v4 += 4; /*0x898f8d*/
    }
    while ( v4 != a1[0xE] + 4 * a1[0xF] ); /*0x898f95*/
  }
  v7 = a1[0x11]; /*0x898f97*/
  result = v7 + 4 * a1[0x12]; /*0x898f9d*/
  if ( v7 != result ) /*0x898fa2*/
  {
    do /*0x898fd7*/
    {
      v9 = (_DWORD *)(*(_DWORD *)v7 + 0x34); /*0x898fa9*/
      v10 = 0; /*0x898fac*/
      if ( *(int *)(*(_DWORD *)v7 + 0x38) > 0 ) /*0x898fb0*/
      {
        do /*0x898fc7*/
          sub_8DA080(a2, *(_WORD **)(*v9 + 4 * v10++)); /*0x898fbc*/
        while ( v10 < v9[1] ); /*0x898fc7*/
      }
      result = a1[0x12]; /*0x898fc9*/
      v7 += 4; /*0x898fcf*/
    }
    while ( v7 != a1[0x11] + 4 * result ); /*0x898fd7*/
  }
  return result; /*0x898fd9*/
}
