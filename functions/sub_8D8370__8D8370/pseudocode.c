_BYTE *__thiscall sub_8D8370(_DWORD **this, _DWORD *a2, int a3, int (__thiscall ***a4)(_DWORD, int *, int, int))
{
  _BYTE *result; // eax
  int (__thiscall ***v7)(_DWORD, int *, int, int); // edi
  int v8; // ebp
  int v9; // ecx

  result = (_BYTE *)(a3 - 1);
  if ( a3 - 1 >= 0 )
  {
    v7 = a4;
    v8 = a3;
    do
    {
      result = (_BYTE *)(**v7)(v7, &a3, *a2 + *(char *)(*a2 + 5), a2[1] + *(char *)(a2[1] + 5));
      if ( *result )
      {
        v9 = (int)*(this + 8 * *(char *)(*a2 + 4) + *(char *)(a2[1] + 4));
        result = (_BYTE *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 8))(v9, a2);
      }
      a2 += 2;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
