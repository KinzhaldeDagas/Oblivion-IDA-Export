void __cdecl sub_A187D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B34424;
  if ( dword_B34424 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B34424 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
