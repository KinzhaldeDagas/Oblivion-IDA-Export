int *__cdecl sub_621170(int *a1, int *a2, char a3)
{
  int v4; // ecx
  int *v5; // ebx
  int v6; // eax
  int v7; // esi
  int *v8; // eax
  int *result; // eax
  _DWORD *v10; // esi
  int *v11; // eax
  _DWORD *v12; // [esp+18h] [ebp+4h]

  if ( !a1 )
    return 0;
  v4 = a1[0x16];
  if ( !v4 || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) )
    return 0;
  v5 = 0;
  if ( !(*(int (__thiscall **)(int *))(*a1 + 0x330))(a1) )
  {
    v10 = sub_67C880(&dword_B3BDB0, (int)a1, 0);
    v12 = v10;
    if ( v10 )
    {
      do
      {
        v11 = *(int **)*v10;
        v10 = (_DWORD *)v10[1];
        v5 = sub_620050(a1, a2, v11, a3);
      }
      while ( v10 );
      BSSimpleList_Clear(v12);
      FormHeapFree((unsigned int)v12);
    }
    return v5;
  }
  v6 = (*(int (__thiscall **)(int *))(*a1 + 0x330))(a1);
  v7 = v6 + 0x15C;
  if ( v6 == 0xFFFFFEA4 )
    return v5;
  do
  {
    v8 = *(int **)v7;
    v7 = *(_DWORD *)(v7 + 4);
    result = sub_620050(a1, a2, v8, a3);
  }
  while ( v7 );
  return result;
}
