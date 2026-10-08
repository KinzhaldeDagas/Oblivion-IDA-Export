void __cdecl sub_A26860()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3DAE8; /*0xa26861*/
  if ( unk_B3DAE8 ) /*0xa26869*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3DAE8 + 4)) ) /*0xa2686f*/
    {
      if ( v0 ) /*0xa2687b*/
        (**v0)(v0, 1); /*0xa26885*/
    }
  }
}
