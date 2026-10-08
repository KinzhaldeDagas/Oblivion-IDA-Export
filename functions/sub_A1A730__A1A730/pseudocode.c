void __cdecl sub_A1A730()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B35410; /*0xa1a731*/
  if ( unk_B35410 ) /*0xa1a739*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B35410 + 4)) ) /*0xa1a73f*/
    {
      if ( v0 ) /*0xa1a74b*/
        (**v0)(v0, 1); /*0xa1a755*/
    }
  }
}
