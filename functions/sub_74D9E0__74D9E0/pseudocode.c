LONG __thiscall sub_74D9E0(_WORD *this, int a2, int a3)
{
  int v3; // ebp
  _WORD *v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx
  int v7; // edi
  int v8; // esi
  int *v9; // eax
  int v10; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebx
  void (__thiscall ***v12)(_DWORD, int); // edi
  int v13; // edi
  LONG result; // eax
  _WORD *v15; // [esp+18h] [ebp-4h]

  v3 = (unsigned __int16)a3;
  v4 = this;
  v5 = *(_WORD *)(*(_DWORD *)(a2 + 0x5C) + 0x1C * (unsigned __int16)a3 + 0x18);
  v6 = *(this + 0x11);
  v15 = v4;
  if ( v5 >= v6 )
    v5 = v6 - 1;
  v7 = v5;
  if ( v5 < (unsigned int)*(unsigned __int16 *)(a2 + 0x7E) )
  {
    v9 = (int *)(*(_DWORD *)(a2 + 0x78) + 4 * v5);
    if ( *v9 )
    {
      sub_74D790(*v9, &a3);
      v8 = a3;
      if ( a3 )
        goto LABEL_12;
      v4 = v15;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = 0;
  }
  v10 = sub_700900(*(void **)(*((_DWORD *)v4 + 7) + 4 * v7));
  if ( v10 )
  {
    v8 = v10;
    InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
LABEL_12:
  *(_WORD *)(v8 + 0x18) |= 1u;
  sub_715C10(v8, 0.0);
  (*(void (__thiscall **)(_DWORD, int *, int, int))(**(_DWORD **)(a2 + 0x68) + 0x90))(
    *(_DWORD *)(a2 + 0x68),
    &a3,
    v3,
    v8);
  v11 = InterlockedDecrement;
  if ( a3 )
  {
    v12 = (void (__thiscall ***)(_DWORD, int))a3;
    if ( !v11((volatile LONG *)(a3 + 4)) )
      (**v12)(v12, 1);
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 0x6C))(v8, *(_DWORD *)(*((_DWORD *)v15 + 4) + 0xAC));
  v13 = *(_DWORD *)(*((_DWORD *)v15 + 4) + 0xB0);
  if ( v13 )
    InterlockedIncrement((volatile LONG *)(v13 + 4));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x70))(v8, v13);
  if ( v13 )
  {
    if ( !v11((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
  }
  result = v11((volatile LONG *)(v8 + 4));
  if ( !result )
    return (**(LONG (__thiscall ***)(int, int))v8)(v8, 1);
  return result;
}
