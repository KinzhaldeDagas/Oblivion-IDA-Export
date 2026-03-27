void __cdecl sub_A26BF0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B401AC;
  if ( dword_B401AC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B401AC + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
