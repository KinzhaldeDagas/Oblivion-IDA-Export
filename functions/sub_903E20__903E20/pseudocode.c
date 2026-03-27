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

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x24, 0x1C);
  *(_WORD *)(v4 + 4) = 0x24;
  v5 = sub_903DB0((_DWORD *)v4, a1, a2, a4);
  if ( v5[7] == 0x1A )
  {
    v6 = (_DWORD *)a2[3];
    v7 = *a1;
    for ( i = a2; v6; v6 = (_DWORD *)v6[3] )
      i = v6;
    v9 = (_DWORD *)a1[3];
    for ( j = a1; v9; v9 = (_DWORD *)v9[3] )
      j = v9;
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)v7 + 0x1C))(v7, j, i, a3);
    v5[5] = v7;
  }
  if ( v5[8] == 0x1A )
  {
    v11 = (_DWORD *)a1[3];
    v12 = *a2;
    for ( k = a1; v11; v11 = (_DWORD *)v11[3] )
      k = v11;
    v14 = a2;
    if ( a2[3] )
    {
      v15 = (_DWORD *)a2[3];
      do
      {
        v14 = v15;
        v15 = (_DWORD *)v15[3];
      }
      while ( v15 );
    }
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)v12 + 0x1C))(v12, v14, k, a3);
    v5[6] = v12;
  }
  return v5;
}
