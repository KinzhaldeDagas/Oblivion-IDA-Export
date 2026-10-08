int __thiscall sub_919C40(char *this, int *a2)
{
  char *v2; // ebp
  char *v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  _DWORD *v9; // esi
  int v10; // edi
  char *v11; // ebp
  int result; // eax
  int v13; // esi
  int v14; // ecx
  _DWORD *v15; // esi
  int v16; // edi
  char *v17; // ebp
  int v18; // ebx
  int k; // esi
  int i; // [esp+18h] [ebp+4h]
  int j; // [esp+18h] [ebp+4h]

  v2 = this; /*0x919c43*/
  if ( this ) /*0x919c4d*/
    v3 = this + 0x28; /*0x919c4f*/
  else
    v3 = 0; /*0x919c54*/
  sub_8989E0(a2, (int)v3); /*0x919c5d*/
  if ( v2 ) /*0x919c64*/
    v5 = (int)(v2 + 0x2C); /*0x919c66*/
  else
    v5 = 0; /*0x919c6b*/
  sub_898A80(a2, v5); /*0x919c70*/
  v6 = 0; /*0x919c78*/
  for ( i = 0; v6 < a2[0xF]; i = v6 ) /*0x919c80*/
  {
    v7 = *(_DWORD *)(a2[0xE] + 4 * v6); /*0x919c85*/
    v8 = *(_DWORD *)(v7 + 0x38); /*0x919c88*/
    v9 = (_DWORD *)(v7 + 0x34); /*0x919c8b*/
    v10 = 0; /*0x919c8e*/
    if ( v8 > 0 ) /*0x919c92*/
    {
      v11 = v2 + 0x28; /*0x919c94*/
      do /*0x919cab*/
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v11 + 8))(v11, *(_DWORD *)(*v9 + 4 * v10++)); /*0x919ca2*/
      while ( v10 < v9[1] ); /*0x919cab*/
      v2 = this; /*0x919cad*/
      v6 = i; /*0x919cb1*/
    }
    ++v6; /*0x919cb8*/
  }
  result = 0; /*0x919cc4*/
  for ( j = 0; result < a2[0x12]; j = result ) /*0x919ccc*/
  {
    v13 = *(_DWORD *)(a2[0x11] + 4 * result); /*0x919cd3*/
    v14 = *(_DWORD *)(v13 + 0x38); /*0x919cd6*/
    v15 = (_DWORD *)(v13 + 0x34); /*0x919cd9*/
    v16 = 0; /*0x919cdc*/
    if ( v14 > 0 ) /*0x919ce0*/
    {
      v17 = v2 + 0x28; /*0x919ce2*/
      do /*0x919cf9*/
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v17 + 8))(v17, *(_DWORD *)(*v15 + 4 * v16++)); /*0x919cf0*/
      while ( v16 < v15[1] ); /*0x919cf9*/
      result = j; /*0x919cfb*/
      v2 = this; /*0x919cff*/
    }
    ++result; /*0x919d06*/
  }
  v18 = a2[0xC]; /*0x919d0f*/
  if ( v18 ) /*0x919d14*/
  {
    result = *(_DWORD *)(v18 + 0x38); /*0x919d16*/
    for ( k = 0; k < result; ++k ) /*0x919d1d*/
    {
      (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)v2 + 0xA) + 8))( /*0x919d2d*/
        v2 + 0x28,
        *(_DWORD *)(*(_DWORD *)(v18 + 0x34) + 4 * k));
      result = *(_DWORD *)(v18 + 0x38); /*0x919d30*/
    }
  }
  return result; /*0x919d38*/
}
