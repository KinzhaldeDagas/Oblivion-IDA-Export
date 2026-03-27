void __cdecl sub_A279A0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B47608;
  if ( dword_B47608 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B47608 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
