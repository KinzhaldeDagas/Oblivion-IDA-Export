int *__userpurge sub_4A1B10@<eax>(int a1@<ecx>, int a2, int a3, int a4)
{
  int (__thiscall *v5)(int, int); // edx
  int v6; // ebp
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // edi
  int *result; // eax
  int *(__thiscall **v12)(_DWORD, int); // edx
  int *(__thiscall ***v13)(_DWORD, int); // ecx
  int *(__thiscall ***v14)(_DWORD, int); // esi
  _DWORD v15[8]; // [esp+4h] [ebp-24h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  v5 = *(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 4);
  v16 = 0;
  v6 = v5(a1, a2);
  v7 = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 4 * v6);
  if ( v7 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, v7[1]) )
    {
      v7 = (_DWORD *)*v7;
      if ( !v7 )
        goto LABEL_4;
    }
    if ( !*(_BYTE *)(a1 + 0x10) )
      v7[1] = a2;
    result = sub_55E2A0(v7 + 2, &a3);
    v14 = (int *(__thiscall ***)(_DWORD, int))a3;
    v16 = 0xFFFFFFFF;
    if ( a3 )
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(a3 + 4));
      if ( !result )
      {
        v12 = *v14;
        v13 = v14;
        return (*v12)(v13, 1);
      }
    }
  }
  else
  {
LABEL_4:
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x14))(a1, v15[0]);
    v9 = a4;
    v10 = (_DWORD *)v8;
    v15[6] = v15;
    v15[0] = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(a1, v10, a3);
    result = *(int **)(a1 + 8);
    *v10 = result[v6];
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v6) = v10;
    ++*(_DWORD *)(a1 + 0xC);
    v16 = 0xFFFFFFFF;
    if ( v9 )
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(v9 + 4));
      if ( !result )
      {
        v12 = *(int *(__thiscall ***)(_DWORD, int))v9;
        v13 = (int *(__thiscall ***)(_DWORD, int))v9;
        return (*v12)(v13, 1);
      }
    }
  }
  return result;
}
