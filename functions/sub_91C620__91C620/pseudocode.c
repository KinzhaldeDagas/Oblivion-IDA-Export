int __thiscall sub_91C620(char *this, const void **a2)
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
  _DWORD *v18; // ebx
  int k; // esi
  int i; // [esp+18h] [ebp+4h]
  int j; // [esp+18h] [ebp+4h]

  v2 = this; /*0x91c623*/
  if ( this ) /*0x91c62d*/
    v3 = this + 0x28; /*0x91c62f*/
  else
    v3 = 0; /*0x91c634*/
  sub_899CA0(a2, (int)v3); /*0x91c63d*/
  if ( v2 ) /*0x91c644*/
    v5 = (int)(v2 + 0x2C); /*0x91c646*/
  else
    v5 = 0; /*0x91c64b*/
  sub_899D20(a2, v5); /*0x91c650*/
  v6 = 0; /*0x91c658*/
  for ( i = 0; v6 < (int)a2[0xF]; i = v6 ) /*0x91c660*/
  {
    v7 = *((_DWORD *)a2[0xE] + v6); /*0x91c665*/
    v8 = *(_DWORD *)(v7 + 0x38); /*0x91c668*/
    v9 = (_DWORD *)(v7 + 0x34); /*0x91c66b*/
    v10 = 0; /*0x91c66e*/
    if ( v8 > 0 ) /*0x91c672*/
    {
      v11 = v2 + 0x28; /*0x91c674*/
      do /*0x91c68b*/
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v11 + 4))(v11, *(_DWORD *)(*v9 + 4 * v10++)); /*0x91c682*/
      while ( v10 < v9[1] ); /*0x91c68b*/
      v2 = this; /*0x91c68d*/
      v6 = i; /*0x91c691*/
    }
    ++v6; /*0x91c698*/
  }
  result = 0; /*0x91c6a4*/
  for ( j = 0; result < (int)a2[0x12]; j = result ) /*0x91c6ac*/
  {
    v13 = *((_DWORD *)a2[0x11] + result); /*0x91c6b3*/
    v14 = *(_DWORD *)(v13 + 0x38); /*0x91c6b6*/
    v15 = (_DWORD *)(v13 + 0x34); /*0x91c6b9*/
    v16 = 0; /*0x91c6bc*/
    if ( v14 > 0 ) /*0x91c6c0*/
    {
      v17 = v2 + 0x28; /*0x91c6c2*/
      do /*0x91c6d9*/
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v17 + 4))(v17, *(_DWORD *)(*v15 + 4 * v16++)); /*0x91c6d0*/
      while ( v16 < v15[1] ); /*0x91c6d9*/
      result = j; /*0x91c6db*/
      v2 = this; /*0x91c6df*/
    }
    ++result; /*0x91c6e6*/
  }
  v18 = a2[0xC]; /*0x91c6ef*/
  if ( v18 ) /*0x91c6f4*/
  {
    result = v18[0xE]; /*0x91c6f6*/
    for ( k = 0; k < result; ++k ) /*0x91c6fd*/
    {
      (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)v2 + 0xA) + 4))(v2 + 0x28, *(_DWORD *)(v18[0xD] + 4 * k)); /*0x91c70d*/
      result = v18[0xE]; /*0x91c710*/
    }
  }
  return result; /*0x91c718*/
}
