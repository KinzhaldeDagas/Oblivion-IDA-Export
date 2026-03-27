void __cdecl sub_A26BC0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B401A0;
  if ( dword_B401A0 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B401A0 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
