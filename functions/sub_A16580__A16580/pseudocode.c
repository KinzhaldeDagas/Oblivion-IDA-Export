void __cdecl sub_A16580()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB333D4]; /*0xa16581*/
  if ( MEMORY[0xB333D4] ) /*0xa16589*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(MEMORY[0xB333D4] + 4)) ) /*0xa1658f*/
    {
      if ( v0 ) /*0xa1659b*/
        (**v0)(v0, 1); /*0xa165a5*/
    }
  }
}
