void __cdecl sub_A1A700()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B35300;
  if ( dword_B35300 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B35300 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
