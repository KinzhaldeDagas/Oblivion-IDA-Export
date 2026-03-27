void __cdecl sub_A26AB0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B3FCE4;
  if ( dword_B3FCE4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B3FCE4 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
