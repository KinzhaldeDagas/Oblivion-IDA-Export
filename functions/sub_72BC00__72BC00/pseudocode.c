LONG __thiscall sub_72BC00(LONG *this, int a2, _DWORD **a3)
{
  LONG result; // eax
  int v5; // esi
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  int v7; // esi
  int v8; // edi

  result = sub_700770(this, a2, a3);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = InterlockedDecrement;
  if ( v5 != *(this + 2) )
  {
    if ( v5 )
    {
      if ( !v6((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    result = *(this + 2);
    *(_DWORD *)(a2 + 8) = result;
    if ( result )
      result = InterlockedIncrement((volatile LONG *)(result + 4));
  }
  v7 = *(_DWORD *)(a2 + 0xC);
  if ( v7 != *(this + 3) )
  {
    if ( v7 )
    {
      result = v6((volatile LONG *)(v7 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v7)(v7, 1);
    }
    v8 = *(this + 3);
    *(_DWORD *)(a2 + 0xC) = v8;
    if ( v8 )
      return InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  return result;
}
