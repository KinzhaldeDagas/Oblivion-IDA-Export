void __cdecl sub_A26CF0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B40884; /*0xa26cf1*/
  if ( unk_B40884 ) /*0xa26cf9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B40884 + 4)) ) /*0xa26cff*/
    {
      if ( v0 ) /*0xa26d0b*/
        (**v0)(v0, 1); /*0xa26d15*/
    }
  }
}
