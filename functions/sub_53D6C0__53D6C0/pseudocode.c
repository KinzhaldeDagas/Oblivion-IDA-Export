LONG __thiscall sub_53D6C0(int this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v5; // edi
  LONG result; // eax
  int (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // edi
  LONG v9; // [esp+18h] [ebp-4h] BYREF

  v1 = InterlockedDecrement;
  v3 = *(_DWORD *)(this + 8);
  if ( v3 )
  {
    (*(void (__thiscall **)(_DWORD, LONG *, int))(**(_DWORD **)(this + 0xC) + 0x88))(*(_DWORD *)(this + 0xC), &v9, v3);
    if ( v9 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v9;
      if ( !v1((volatile LONG *)(v9 + 4)) )
        (**v4)(v4, 1);
    }
    v5 = *(_DWORD *)(this + 8);
    if ( v5 )
    {
      if ( !v1((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      *(_DWORD *)(this + 8) = 0;
    }
  }
  result = *(_DWORD *)(this + 4);
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD, LONG *, _DWORD))(**(_DWORD **)(this + 0xC) + 0x88))(
      *(_DWORD *)(this + 0xC),
      &v9,
      *(_DWORD *)(this + 4));
    result = v9;
    if ( v9 )
    {
      v7 = (int (__thiscall ***)(_DWORD, int))v9;
      result = v1((volatile LONG *)(v9 + 4));
      if ( !result )
        result = (**v7)(v7, 1);
    }
    v8 = *(_DWORD *)(this + 4);
    if ( v8 )
    {
      result = v1((volatile LONG *)(v8 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1);
      *(_DWORD *)(this + 4) = 0;
    }
  }
  return result;
}
