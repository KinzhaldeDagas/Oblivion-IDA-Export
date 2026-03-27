int __thiscall sub_75D9B0(int this, int a2)
{
  __int16 v2; // bp
  int v4; // edi
  unsigned __int16 v5; // bx
  int v6; // ecx
  bool v7; // zf
  LONG (__stdcall *v8)(volatile LONG *); // ebp
  int *v9; // eax
  void (__thiscall ***v10)(_DWORD, int); // edi
  int *v11; // eax
  void (__thiscall ***v12)(_DWORD, int); // ebx
  void (__thiscall ***v13)(_DWORD, int); // edi
  int v14; // edi
  int result; // eax
  int v16; // [esp+10h] [ebp-20h]
  int v17; // [esp+24h] [ebp-Ch] BYREF
  int v18; // [esp+28h] [ebp-8h] BYREF
  int v19; // [esp+2Ch] [ebp-4h]

  v2 = a2;
  v4 = (unsigned __int16)a2;
  v5 = *(_WORD *)(this + 0x48) - 1;
  v19 = *(unsigned __int16 *)(*(_DWORD *)(this + 0x5C) + 0x1C * (unsigned __int16)a2 + 0x18);
  sub_759860((_WORD *)this, a2);
  v6 = *(_DWORD *)(this + 0x68);
  v7 = v2 == (__int16)v5;
  v8 = InterlockedDecrement;
  a2 = 0;
  if ( v7 )
  {
    v9 = (int *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 0x8C))(v6, &v17, v5);
    sub_55E2A0(&a2, v9);
    if ( v17 )
    {
      v10 = (void (__thiscall ***)(_DWORD, int))v17;
      if ( !v8((volatile LONG *)(v17 + 4)) )
LABEL_14:
        (**v10)(v10, 1);
    }
  }
  else
  {
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 0x8C))(v6, &v17, v5);
    v11 = (int *)(*(int (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(this + 0x68) + 0x8C))(
                   *(_DWORD *)(this + 0x68),
                   &v18,
                   v4);
    sub_55E2A0(&a2, v11);
    if ( v18 )
    {
      v12 = (void (__thiscall ***)(_DWORD, int))v18;
      if ( !v8((volatile LONG *)(v18 + 4)) )
        (**v12)(v12, 1);
    }
    (*(void (__thiscall **)(_DWORD, int *, int, int))(**(_DWORD **)(this + 0x68) + 0x90))(
      *(_DWORD *)(this + 0x68),
      &v18,
      v4,
      v17);
    if ( v18 )
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v18;
      if ( !v8((volatile LONG *)(v18 + 4)) )
        (**v13)(v13, 1);
    }
    v10 = (void (__thiscall ***)(_DWORD, int))v17;
    if ( v17 && !v8((volatile LONG *)(v17 + 4)) && v10 )
      goto LABEL_14;
  }
  v14 = a2;
  v16 = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  result = sub_75D910(this, (unsigned __int16)v19, v16);
  if ( v14 )
  {
    result = v8((volatile LONG *)(v14 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))v14)(v14, 1);
  }
  return result;
}
