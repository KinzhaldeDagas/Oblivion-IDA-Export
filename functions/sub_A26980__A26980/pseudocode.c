void __cdecl sub_A26980()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3F974; /*0xa26981*/
  if ( unk_B3F974 ) /*0xa26989*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3F974 + 4)) ) /*0xa2698f*/
    {
      if ( v0 ) /*0xa2699b*/
        (**v0)(v0, 1); /*0xa269a5*/
    }
  }
}
