void __cdecl sub_A276B0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B44F88;
  if ( dword_B44F88 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B44F88 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
