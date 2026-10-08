void __cdecl sub_A16670()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))texture; /*0xa16671*/
  if ( texture ) /*0xa16679*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(texture + 4)) ) /*0xa1667f*/
    {
      if ( v0 ) /*0xa1668b*/
        (**v0)(v0, 1); /*0xa16695*/
    }
  }
}
