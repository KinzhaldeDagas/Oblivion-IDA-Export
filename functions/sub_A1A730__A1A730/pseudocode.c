void __cdecl sub_A1A730()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B35410;
  if ( dword_B35410 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B35410 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
