void __cdecl sub_A187D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x594]; /*0xa187d1*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x594] ) /*0xa187d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)&MEMORY[0xB33E90][0x594] + 4)) ) /*0xa187df*/
    {
      if ( v0 ) /*0xa187eb*/
        (**v0)(v0, 1); /*0xa187f5*/
    }
  }
}
