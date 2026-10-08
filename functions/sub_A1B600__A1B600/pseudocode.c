void __cdecl sub_A1B600()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B35AD4; /*0xa1b601*/
  if ( unk_B35AD4 ) /*0xa1b609*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B35AD4 + 4)) ) /*0xa1b60f*/
    {
      if ( v0 ) /*0xa1b61b*/
        (**v0)(v0, 1); /*0xa1b625*/
    }
  }
}
