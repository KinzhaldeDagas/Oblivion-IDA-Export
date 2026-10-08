void __cdecl sub_A166D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B333F0; /*0xa166d1*/
  if ( unk_B333F0 ) /*0xa166d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B333F0 + 4)) ) /*0xa166df*/
    {
      if ( v0 ) /*0xa166eb*/
        (**v0)(v0, 1); /*0xa166f5*/
    }
  }
}
