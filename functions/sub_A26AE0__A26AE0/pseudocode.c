void __cdecl sub_A26AE0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3FCF8; /*0xa26ae1*/
  if ( unk_B3FCF8 ) /*0xa26ae9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3FCF8 + 4)) ) /*0xa26aef*/
    {
      if ( v0 ) /*0xa26afb*/
        (**v0)(v0, 1); /*0xa26b05*/
    }
  }
}
