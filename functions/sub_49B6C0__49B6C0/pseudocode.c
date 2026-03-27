LONG sub_49B6C0()
{
  LONG result; // eax
  int (__thiscall ***v1)(_DWORD, int); // esi

  sub_477EF0((_WORD *)(value + 0xAC));
  result = value;
  if ( value )
  {
    v1 = (int (__thiscall ***)(_DWORD, int))value;
    result = InterlockedDecrement((volatile LONG *)(result + 4));
    if ( !result )
    {
      if ( v1 )
        result = (**v1)(v1, 1);
    }
    value = 0;
  }
  return result;
}
