void __cdecl sub_A1B810()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B35BEC;
  if ( dword_B35BEC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B35BEC + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
