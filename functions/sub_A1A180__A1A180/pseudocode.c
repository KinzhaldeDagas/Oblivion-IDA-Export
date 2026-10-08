void __cdecl sub_A1A180()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x13A0]; /*0xa1a181*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x13A0] ) /*0xa1a189*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)&MEMORY[0xB33E90][0x13A0] + 4)) ) /*0xa1a18f*/
    {
      if ( v0 ) /*0xa1a19b*/
        (**v0)(v0, 1); /*0xa1a1a5*/
    }
  }
}
