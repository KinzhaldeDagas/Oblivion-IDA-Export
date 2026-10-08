void __cdecl sub_A1A1B0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x13A4]; /*0xa1a1b1*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x13A4] ) /*0xa1a1b9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)&MEMORY[0xB33E90][0x13A4] + 4)) ) /*0xa1a1bf*/
    {
      if ( v0 ) /*0xa1a1cb*/
        (**v0)(v0, 1); /*0xa1a1d5*/
    }
  }
}
