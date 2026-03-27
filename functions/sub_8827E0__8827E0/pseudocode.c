LONG __thiscall sub_8827E0(_WORD *this, _DWORD *a2, int a3)
{
  int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // eax
  LONG result; // eax
  int v8; // edi
  int v9; // esi

  sub_7D7AD0(this, (int)a2, a3);
  v4 = a2[0x5A];
  v5 = InterlockedDecrement;
  if ( v4 != *((_DWORD *)this + 0x5A) )
  {
    if ( v4 )
    {
      if ( !v5((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v6 = *((_DWORD *)this + 0x5A);
    a2[0x5A] = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  a2[0x56] = *((_DWORD *)this + 0x56);
  a2[0x57] = *((_DWORD *)this + 0x57);
  result = *((_DWORD *)this + 0x58);
  a2[0x58] = result;
  a2[0x59] = *((_DWORD *)this + 0x59);
  v8 = a2[0x5B];
  if ( v8 != *((_DWORD *)this + 0x5B) )
  {
    if ( v8 )
    {
      result = v5((volatile LONG *)(v8 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1);
    }
    v9 = *((_DWORD *)this + 0x5B);
    a2[0x5B] = v9;
    if ( v9 )
      return InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  return result;
}
