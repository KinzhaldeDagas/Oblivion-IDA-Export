void __cdecl sub_A1BAA0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB35C24]; /*0xa1baa1*/
  if ( MEMORY[0xB35C24] ) /*0xa1baa9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(MEMORY[0xB35C24] + 4)) ) /*0xa1baaf*/
    {
      if ( v0 ) /*0xa1babb*/
        (**v0)(v0, 1); /*0xa1bac5*/
    }
  }
}
