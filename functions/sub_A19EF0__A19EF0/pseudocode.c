void __cdecl sub_A19EF0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x1248]; /*0xa19ef1*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x1248] ) /*0xa19ef9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 4)) ) /*0xa19eff*/
    {
      if ( v0 ) /*0xa19f0b*/
        (**v0)(v0, 1); /*0xa19f15*/
    }
  }
}
