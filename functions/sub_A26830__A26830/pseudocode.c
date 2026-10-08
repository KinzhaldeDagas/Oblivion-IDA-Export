void __cdecl sub_A26830()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3CB30; /*0xa26831*/
  if ( unk_B3CB30 ) /*0xa26839*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3CB30 + 4)) ) /*0xa2683f*/
    {
      if ( v0 ) /*0xa2684b*/
        (**v0)(v0, 1); /*0xa26855*/
    }
  }
}
