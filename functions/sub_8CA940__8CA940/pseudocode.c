int __thiscall sub_8CA940(const void **this, int a2, int a3, int a4)
{
  int v5; // ebx
  int *v6; // ebp
  const void *v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  char *v13; // eax
  int i; // ebx
  int v15; // eax
  int result; // eax
  _DWORD *v17; // esi
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // [esp-4h] [ebp-14h]

  if ( a4 )
    sub_918BC0(a4);
  v5 = (int)*(this + 4);
  v6 = (int *)(this + 3);
  v7 = (const void *)(v5 + 1);
  v8 = (unsigned int)*(this + 5) & 0x3FFFFFFF;
  if ( v8 < v5 + 1 )
  {
    v9 = 2 * v8;
    if ( (int)v7 >= v9 )
      v9 = v5 + 1;
    sub_8A6E40(this + 3, v9, 8);
  }
  v10 = *v6;
  *(this + 4) = v7;
  v11 = (_DWORD *)(v10 + 8 * v5);
  *v11 = a2;
  v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x50, 0x32);
  v20 = a4;
  *(_WORD *)(v12 + 4) = 0x50;
  v13 = (char *)sub_9187A0(v12, v5, this + 6, a3, v20);
  v11[1] = v13;
  sub_918B40(v13);
  for ( i = 0; i < (int)*(this + 0x14); ++i )
  {
    v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(v11[1] + 8) + 8))(
            v11[1] + 8,
            **((_DWORD **)*(this + 0x13) + i));
    if ( v15 >= 0 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(v11[1] + 8) + 0x10))(v11[1] + 8, v15);
  }
  result = (int)*(this + 4);
  v17 = (_DWORD *)(*v6 + 8 * result - 8);
  if ( *v17 )
  {
    result = (*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*v17 + 8))(*v17, &a4);
    if ( *(_BYTE *)result )
    {
      v18 = *(_DWORD **)(v17[1] + 0x18);
      sub_918440(v18, 5);
      sub_9181B0((_DWORD **)v18, 0);
      sub_918440(v18, 0);
      v19 = sub_953130(v18);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x10))(v19);
    }
  }
  return result;
}
