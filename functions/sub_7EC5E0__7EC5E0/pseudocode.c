LONG __thiscall sub_7EC5E0(_DWORD *this)
{
  LONG result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebx
  int v8; // ebp
  int v9; // edi
  _DWORD *v10; // ebx
  int v11; // ebx
  int v12; // ebp
  int v13; // edi
  _DWORD *v14; // ebx
  int v15; // ebx
  int v16; // ebp
  int v17; // edi
  _DWORD *v18; // ebx
  int v19; // ebx
  int v20; // ebp
  int v21; // edi
  _DWORD *v22; // ebx
  int v23; // ebx
  int v24; // esi
  int v25; // edi
  _DWORD *v26; // esi

  result = (*(int (__thiscall **)(_DWORD *))(*this + 0xB0))(this);
  v3 = *(this + 0x1C);
  v4 = *(this + 0x27);
  v5 = *(_DWORD *)(v3 + 0x58);
  v6 = (_DWORD *)(v3 + 0x58);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = InterlockedDecrement((volatile LONG *)(v5 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *v6 = v4;
    if ( v4 )
      result = InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  v7 = *(this + 0x1C);
  v8 = *(this + 0x2A);
  v9 = *(_DWORD *)(v7 + 0x44);
  v10 = (_DWORD *)(v7 + 0x44);
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      result = InterlockedDecrement((volatile LONG *)(v9 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *v10 = v8;
    if ( v8 )
      result = InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  v11 = *(this + 0x2B);
  v12 = *(this + 0x26);
  v13 = *(_DWORD *)(v11 + 0x58);
  v14 = (_DWORD *)(v11 + 0x58);
  if ( v13 != v12 )
  {
    if ( v13 )
    {
      result = InterlockedDecrement((volatile LONG *)(v13 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v13)(v13, 1);
    }
    *v14 = v12;
    if ( v12 )
      result = InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  v15 = *(this + 0x2B);
  v16 = *(this + 0x29);
  v17 = *(_DWORD *)(v15 + 0x44);
  v18 = (_DWORD *)(v15 + 0x44);
  if ( v17 != v16 )
  {
    if ( v17 )
    {
      result = InterlockedDecrement((volatile LONG *)(v17 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v17)(v17, 1);
    }
    *v18 = v16;
    if ( v16 )
      result = InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  v19 = *(this + 0x2C);
  v20 = *(this + 0x25);
  v21 = *(_DWORD *)(v19 + 0x58);
  v22 = (_DWORD *)(v19 + 0x58);
  if ( v21 != v20 )
  {
    if ( v21 )
    {
      result = InterlockedDecrement((volatile LONG *)(v21 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v21)(v21, 1);
    }
    *v22 = v20;
    if ( v20 )
      result = InterlockedIncrement((volatile LONG *)(v20 + 4));
  }
  v23 = *(this + 0x28);
  v24 = *(this + 0x2C);
  v25 = *(_DWORD *)(v24 + 0x44);
  v26 = (_DWORD *)(v24 + 0x44);
  if ( v25 != v23 )
  {
    if ( v25 )
    {
      result = InterlockedDecrement((volatile LONG *)(v25 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v25)(v25, 1);
    }
    *v26 = v23;
    if ( v23 )
      return InterlockedIncrement((volatile LONG *)(v23 + 4));
  }
  return result;
}
