LONG __userpurge sub_7B2180@<eax>(_DWORD *a1@<ecx>, int a2, int a3, int a4)
{
  int (__thiscall *v5)(_DWORD *, int); // edx
  int v6; // ebp
  _DWORD *v7; // edi
  int v8; // ebx
  _DWORD *v9; // edi
  LONG result; // eax
  _DWORD v11[6]; // [esp+4h] [ebp-24h] BYREF
  _DWORD *v12; // [esp+1Ch] [ebp-Ch]
  unsigned int v13; // [esp+24h] [ebp-4h]

  v5 = *(int (__thiscall **)(_DWORD *, int))(*a1 + 4);
  v13 = 0;
  v6 = v5(a1, a2);
  v7 = *(_DWORD **)(a1[2] + 4 * v6);
  if ( v7 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 8))(a1, a2, v7[1]) )
    {
      v7 = (_DWORD *)*v7;
      if ( !v7 )
        goto LABEL_4;
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*a1 + 0x10))(a1, v7, v11[0]);
    v8 = a4;
    v12 = v11;
    v11[0] = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 0xC))(a1, v7, a3);
  }
  else
  {
LABEL_4:
    v8 = a4;
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x14))(a1, v11[0]);
    v12 = v11;
    v11[0] = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 0xC))(a1, v9, a3);
    result = a1[2];
    *v9 = *(_DWORD *)(result + 4 * v6);
    *(_DWORD *)(a1[2] + 4 * v6) = v9;
    ++a1[3];
  }
  v13 = 0xFFFFFFFF;
  if ( v8 )
  {
    result = InterlockedDecrement((volatile LONG *)(v8 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))v8)(v8, 1);
  }
  return result;
}
