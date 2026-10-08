void __cdecl sub_A268D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3F384; /*0xa268d1*/
  if ( unk_B3F384 ) /*0xa268d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3F384 + 4)) ) /*0xa268df*/
    {
      if ( v0 ) /*0xa268eb*/
        (**v0)(v0, 1); /*0xa268f5*/
    }
  }
}
