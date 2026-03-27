void __cdecl sub_A27970()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B47604;
  if ( dword_B47604 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B47604 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
