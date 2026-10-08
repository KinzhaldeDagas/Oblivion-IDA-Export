void __cdecl sub_A26BF0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B401AC; /*0xa26bf1*/
  if ( unk_B401AC ) /*0xa26bf9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B401AC + 4)) ) /*0xa26bff*/
    {
      if ( v0 ) /*0xa26c0b*/
        (**v0)(v0, 1); /*0xa26c15*/
    }
  }
}
