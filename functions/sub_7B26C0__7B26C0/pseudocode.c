LONG __stdcall sub_7B26C0(int a1, LONG a2, int a3)
{
  LONG result; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // esi

  result = a2;
  v4 = InterlockedDecrement;
  *(_DWORD *)(a1 + 4) = a2;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 != a3 )
  {
    if ( v5 )
    {
      result = v4((volatile LONG *)(v5 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *(_DWORD *)(a1 + 8) = a3;
    if ( a3 )
      result = InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  if ( a3 )
  {
    result = v4((volatile LONG *)(a3 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))a3)(a3, 1);
  }
  return result;
}
