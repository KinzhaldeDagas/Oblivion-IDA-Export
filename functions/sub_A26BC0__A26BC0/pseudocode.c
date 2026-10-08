void __cdecl sub_A26BC0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B401A0; /*0xa26bc1*/
  if ( unk_B401A0 ) /*0xa26bc9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B401A0 + 4)) ) /*0xa26bcf*/
    {
      if ( v0 ) /*0xa26bdb*/
        (**v0)(v0, 1); /*0xa26be5*/
    }
  }
}
