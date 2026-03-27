LONG __cdecl sub_55E340(int a1)
{
  LONG result; // eax
  int (__thiscall ***v2)(_DWORD, int); // esi

  result = dword_B43108;
  if ( dword_B43108 != a1 )
  {
    if ( result )
    {
      v2 = (int (__thiscall ***)(_DWORD, int))dword_B43108;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
        result = (**v2)(v2, 1);
    }
    dword_B43108 = a1;
    if ( a1 )
      return InterlockedIncrement((volatile LONG *)(a1 + 4));
  }
  return result;
}
