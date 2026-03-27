void __cdecl sub_A19EF0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B350D8;
  if ( dword_B350D8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B350D8 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
