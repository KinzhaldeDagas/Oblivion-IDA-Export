void __cdecl sub_A1A700()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B35300; /*0xa1a701*/
  if ( unk_B35300 ) /*0xa1a709*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B35300 + 4)) ) /*0xa1a70f*/
    {
      if ( v0 ) /*0xa1a71b*/
        (**v0)(v0, 1); /*0xa1a725*/
    }
  }
}
