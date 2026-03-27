LONG __thiscall sub_7317B0(_DWORD *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // edi
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  int v16; // ebx
  int v17; // edi
  int v18; // ebx
  LONG result; // eax
  int v20; // edi
  int v21; // ebx

  v1 = InterlockedDecrement;
  v3 = *(this + 2);
  v4 = dword_B3FCE4;
  if ( v3 != dword_B3FCE4 )
  {
    if ( v3 )
    {
      if ( !v1((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *(this + 2) = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  v5 = *(this + 4);
  v6 = dword_B3FAA4;
  if ( v5 != dword_B3FAA4 )
  {
    if ( v5 )
    {
      if ( !v1((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *(this + 4) = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  v7 = *(this + 5);
  v8 = dword_B401D8;
  if ( v7 != dword_B401D8 )
  {
    if ( v7 )
    {
      if ( !v1((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *(this + 5) = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  v9 = *(this + 6);
  v10 = dword_B401AC;
  if ( v9 != dword_B401AC )
  {
    if ( v9 )
    {
      if ( !v1((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *(this + 6) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  v11 = *(this + 7);
  v12 = dword_B3FCF8;
  if ( v11 != dword_B3FCF8 )
  {
    if ( v11 )
    {
      if ( !v1((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    *(this + 7) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  v13 = *(this + 8);
  v14 = dword_B3F974;
  if ( v13 != dword_B3F974 )
  {
    if ( v13 )
    {
      if ( !v1((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    }
    *(this + 8) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v15 = *(this + 9);
  v16 = dword_B3F980;
  if ( v15 != dword_B3F980 )
  {
    if ( v15 )
    {
      if ( !v1((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    *(this + 9) = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  v17 = *(this + 0xA);
  v18 = dword_B3F984;
  if ( v17 != dword_B3F984 )
  {
    if ( v17 )
    {
      if ( !v1((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    }
    *(this + 0xA) = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  result = dword_B3F998;
  v20 = *(this + 0xB);
  v21 = dword_B3F998;
  if ( v20 != dword_B3F998 )
  {
    if ( v20 )
    {
      result = v1((volatile LONG *)(v20 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v20)(v20, 1);
    }
    *(this + 0xB) = v21;
    if ( v21 )
      return InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  return result;
}
