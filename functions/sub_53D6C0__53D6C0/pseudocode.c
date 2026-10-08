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

  v1 = InterlockedDecrement; /*0x53d6c2*/
  v3 = *(_DWORD *)(this + 8); /*0x53d6cb*/
  if ( v3 ) /*0x53d6d1*/
  {
    (*(void (__thiscall **)(_DWORD, LONG *, int))(**(_DWORD **)(this + 0xC) + 0x88))(*(_DWORD *)(this + 0xC), &v9, v3); /*0x53d6e4*/
    if ( v9 ) /*0x53d6ec*/
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v9; /*0x53d6ee*/
      if ( !v1((volatile LONG *)(v9 + 4)) ) /*0x53d6f4*/
        (**v4)(v4, 1); /*0x53d706*/
    }
    v5 = *(_DWORD *)(this + 8); /*0x53d708*/
    if ( v5 ) /*0x53d70d*/
    {
      if ( !v1((volatile LONG *)(v5 + 4)) ) /*0x53d713*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x53d725*/
      *(_DWORD *)(this + 8) = 0; /*0x53d727*/
    }
  }
  result = *(_DWORD *)(this + 4); /*0x53d72e*/
  if ( result ) /*0x53d733*/
  {
    (*(void (__thiscall **)(_DWORD, LONG *, _DWORD))(**(_DWORD **)(this + 0xC) + 0x88))( /*0x53d746*/
      *(_DWORD *)(this + 0xC),
      &v9,
      *(_DWORD *)(this + 4));
    result = v9; /*0x53d748*/
    if ( v9 ) /*0x53d74e*/
    {
      v7 = (int (__thiscall ***)(_DWORD, int))v9; /*0x53d750*/
      result = v1((volatile LONG *)(v9 + 4)); /*0x53d756*/
      if ( !result ) /*0x53d75a*/
        result = (**v7)(v7, 1); /*0x53d768*/
    }
    v8 = *(_DWORD *)(this + 4); /*0x53d76a*/
    if ( v8 ) /*0x53d76f*/
    {
      result = v1((volatile LONG *)(v8 + 4)); /*0x53d775*/
      if ( !result ) /*0x53d779*/
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x53d787*/
      *(_DWORD *)(this + 4) = 0; /*0x53d789*/
    }
  }
  return result; /*0x53d790*/
}
