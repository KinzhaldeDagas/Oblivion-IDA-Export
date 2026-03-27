int *__userpurge sub_77C5E0@<eax>(int a1@<ecx>, int a2, int a3, int a4)
{
  int v5; // ebp
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // edi
  int *result; // eax
  int *(__thiscall ***v11)(_DWORD, int); // esi

  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, a2);
  v6 = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 4 * v5);
  if ( v6 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, v6[1]) )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        goto LABEL_4;
    }
    if ( !*(_BYTE *)(a1 + 0x10) )
      v6[1] = a2;
    result = sub_55E2A0(v6 + 2, &a3);
    v11 = (int *(__thiscall ***)(_DWORD, int))a3;
    if ( a3 )
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(a3 + 4));
      if ( !result )
        return (**v11)(v11, 1);
    }
  }
  else
  {
LABEL_4:
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x14))(a1);
    v8 = a4;
    v9 = (_DWORD *)v7;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(a1, v9, a3);
    result = *(int **)(a1 + 8);
    *v9 = result[v5];
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v5) = v9;
    ++*(_DWORD *)(a1 + 0xC);
    if ( v8 )
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(v8 + 4));
      if ( !result )
        return (**(int *(__thiscall ***)(int, int))v8)(v8, 1);
    }
  }
  return result;
}
