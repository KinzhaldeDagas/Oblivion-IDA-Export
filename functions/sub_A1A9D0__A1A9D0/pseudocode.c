void __cdecl sub_A1A9D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B35418;
  if ( dword_B35418 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B35418 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
