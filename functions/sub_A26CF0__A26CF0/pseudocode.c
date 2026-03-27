void __cdecl sub_A26CF0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B40884;
  if ( dword_B40884 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B40884 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
