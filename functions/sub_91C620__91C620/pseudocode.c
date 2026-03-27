int __thiscall sub_91C620(char *this, _DWORD *a2)
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

  v2 = this;
  if ( this )
    v3 = this + 0x28;
  else
    v3 = 0;
  sub_899CA0(a2, (int)v3);
  if ( v2 )
    v5 = (int)(v2 + 0x2C);
  else
    v5 = 0;
  sub_899D20(a2, v5);
  v6 = 0;
  for ( i = 0; v6 < a2[0xF]; i = v6 )
  {
    v7 = *(_DWORD *)(a2[0xE] + 4 * v6);
    v8 = *(_DWORD *)(v7 + 0x38);
    v9 = (_DWORD *)(v7 + 0x34);
    v10 = 0;
    if ( v8 > 0 )
    {
      v11 = v2 + 0x28;
      do
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v11 + 4))(v11, *(_DWORD *)(*v9 + 4 * v10++));
      while ( v10 < v9[1] );
      v2 = this;
      v6 = i;
    }
    ++v6;
  }
  result = 0;
  for ( j = 0; result < a2[0x12]; j = result )
  {
    v13 = *(_DWORD *)(a2[0x11] + 4 * result);
    v14 = *(_DWORD *)(v13 + 0x38);
    v15 = (_DWORD *)(v13 + 0x34);
    v16 = 0;
    if ( v14 > 0 )
    {
      v17 = v2 + 0x28;
      do
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v17 + 4))(v17, *(_DWORD *)(*v15 + 4 * v16++));
      while ( v16 < v15[1] );
      result = j;
      v2 = this;
    }
    ++result;
  }
  v18 = a2[0xC];
  if ( v18 )
  {
    result = *(_DWORD *)(v18 + 0x38);
    for ( k = 0; k < result; ++k )
    {
      (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)v2 + 0xA) + 4))(
        v2 + 0x28,
        *(_DWORD *)(*(_DWORD *)(v18 + 0x34) + 4 * k));
      result = *(_DWORD *)(v18 + 0x38);
    }
  }
  return result;
}
