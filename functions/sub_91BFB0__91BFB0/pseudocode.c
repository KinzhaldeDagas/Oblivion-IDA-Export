int __thiscall sub_91BFB0(_DWORD *this, _DWORD *a2)
{
  const void **v2; // ebp
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi
  int v12; // edi
  _DWORD *v13; // ebp
  int result; // eax
  int v15; // esi
  int v16; // ecx
  _DWORD *v17; // esi
  int v18; // edi
  _DWORD *v19; // ebp
  int v20; // ebx
  int k; // esi
  int i; // [esp+18h] [ebp+4h]
  int j; // [esp+18h] [ebp+4h]

  v2 = (const void **)this;
  v3 = 0;
  if ( this )
    v4 = this + 0xA;
  else
    v4 = 0;
  sub_899CA0(a2, (int)v4);
  if ( v2 )
    v6 = (int)(v2 + 0xB);
  else
    v6 = 0;
  sub_899D20(a2, v6);
  v7 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x32);
  if ( v7 )
  {
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0x80000000;
    v3 = v7;
  }
  *v3 = a2;
  if ( v2[0xD] == (const void *)((unsigned int)v2[0xE] & 0x3FFFFFFF) )
    sub_8A6EE0(v2 + 0xC, 4);
  *((_DWORD *)v2[0xC] + (_DWORD)v2[0xD]) = v3;
  v2[0xD] = (char *)v2[0xD] + 1;
  v8 = 0;
  for ( i = 0; v8 < a2[0xF]; i = v8 )
  {
    v9 = *(_DWORD *)(a2[0xE] + 4 * v8);
    v10 = *(_DWORD *)(v9 + 0x38);
    v11 = (_DWORD *)(v9 + 0x34);
    v12 = 0;
    if ( v10 > 0 )
    {
      v13 = v2 + 0xA;
      do
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 4))(v13, *(_DWORD *)(*v11 + 4 * v12++));
      while ( v12 < v11[1] );
      v2 = (const void **)this;
      v8 = i;
    }
    ++v8;
  }
  result = 0;
  for ( j = 0; result < a2[0x12]; j = result )
  {
    v15 = *(_DWORD *)(a2[0x11] + 4 * result);
    v16 = *(_DWORD *)(v15 + 0x38);
    v17 = (_DWORD *)(v15 + 0x34);
    v18 = 0;
    if ( v16 > 0 )
    {
      v19 = v2 + 0xA;
      do
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v19 + 4))(v19, *(_DWORD *)(*v17 + 4 * v18++));
      while ( v18 < v17[1] );
      result = j;
      v2 = (const void **)this;
    }
    ++result;
  }
  v20 = a2[0xC];
  if ( v20 )
  {
    result = *(_DWORD *)(v20 + 0x38);
    for ( k = 0; k < result; ++k )
    {
      (*((void (__thiscall **)(const void **, _DWORD))v2[0xA] + 1))(
        v2 + 0xA,
        *(_DWORD *)(*(_DWORD *)(v20 + 0x34) + 4 * k));
      result = *(_DWORD *)(v20 + 0x38);
    }
  }
  return result;
}
