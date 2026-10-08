void __cdecl sub_A16550()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB333D0]; /*0xa16551*/
  if ( MEMORY[0xB333D0] ) /*0xa16559*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(MEMORY[0xB333D0] + 4)) ) /*0xa1655f*/
    {
      if ( v0 ) /*0xa1656b*/
        (**v0)(v0, 1); /*0xa16575*/
    }
  }
}
