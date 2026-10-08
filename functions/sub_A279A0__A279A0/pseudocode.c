void __cdecl sub_A279A0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B47608; /*0xa279a1*/
  if ( unk_B47608 ) /*0xa279a9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B47608 + 4)) ) /*0xa279af*/
    {
      if ( v0 ) /*0xa279bb*/
        (**v0)(v0, 1); /*0xa279c5*/
    }
  }
}
