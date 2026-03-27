void __cdecl sub_A25F60()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B3C0A0;
  if ( dword_B3C0A0 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B3C0A0 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
