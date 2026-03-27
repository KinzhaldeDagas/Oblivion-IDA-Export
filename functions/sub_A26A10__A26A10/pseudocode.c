void __cdecl sub_A26A10()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B3F998;
  if ( dword_B3F998 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B3F998 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
