void __cdecl sub_A1C550()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3658C; /*0xa1c551*/
  if ( unk_B3658C ) /*0xa1c559*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3658C + 4)) ) /*0xa1c55f*/
    {
      if ( v0 ) /*0xa1c56b*/
        (**v0)(v0, 1); /*0xa1c575*/
    }
  }
}
