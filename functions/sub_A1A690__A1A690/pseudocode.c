void __cdecl sub_A1A690()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x1400]; /*0xa1a691*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x1400] ) /*0xa1a699*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)&MEMORY[0xB33E90][0x1400] + 4)) ) /*0xa1a69f*/
    {
      if ( v0 ) /*0xa1a6ab*/
        (**v0)(v0, 1); /*0xa1a6b5*/
    }
  }
}
