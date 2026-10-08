_DWORD *__cdecl sub_903E20(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  int v7; // ebx
  _DWORD *i; // edx
  _DWORD *v9; // ecx
  _DWORD *j; // eax
  _DWORD *v11; // eax
  int v12; // ebx
  _DWORD *k; // edx
  _DWORD *v14; // eax
  _DWORD *v15; // ecx

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x24, 0x1C); /*0x903e31*/
  *(_WORD *)(v4 + 4) = 0x24; /*0x903e45*/
  v5 = sub_903DB0((_DWORD *)v4, a1, a2, a4); /*0x903e50*/
  if ( v5[7] == 0x1A ) /*0x903e56*/
  {
    v6 = (_DWORD *)a2[3]; /*0x903e58*/
    v7 = *a1; /*0x903e5d*/
    for ( i = a2; v6; v6 = (_DWORD *)v6[3] ) /*0x903e61*/
      i = v6; /*0x903e63*/
    v9 = (_DWORD *)a1[3]; /*0x903e6c*/
    for ( j = a1; v9; v9 = (_DWORD *)v9[3] ) /*0x903e73*/
      j = v9; /*0x903e75*/
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)v7 + 0x1C))(v7, j, i, a3); /*0x903e8a*/
    v5[5] = v7; /*0x903e8d*/
  }
  if ( v5[8] == 0x1A ) /*0x903e94*/
  {
    v11 = (_DWORD *)a1[3]; /*0x903e96*/
    v12 = *a2; /*0x903e9b*/
    for ( k = a1; v11; v11 = (_DWORD *)v11[3] ) /*0x903e9f*/
      k = v11; /*0x903ea1*/
    v14 = a2; /*0x903eaa*/
    if ( a2[3] ) /*0x903eac*/
    {
      v15 = (_DWORD *)a2[3]; /*0x903eb3*/
      do /*0x903ebc*/
      {
        v14 = v15; /*0x903eb5*/
        v15 = (_DWORD *)v15[3]; /*0x903eb7*/
      }
      while ( v15 ); /*0x903ebc*/
    }
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)v12 + 0x1C))(v12, v14, k, a3); /*0x903ec9*/
    v5[6] = v12; /*0x903ecc*/
  }
  return v5; /*0x903ecf*/
}
