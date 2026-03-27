void __cdecl sub_A278E0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B474AC;
  if ( dword_B474AC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B474AC + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
