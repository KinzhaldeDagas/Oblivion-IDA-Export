void __cdecl sub_A26830()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B3CB30;
  if ( dword_B3CB30 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B3CB30 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
