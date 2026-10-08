void sub_405B00()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB333D0]; /*0x405b01*/
  if ( MEMORY[0xB333D0] ) /*0x405b09*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(MEMORY[0xB333D0] + 4)) ) /*0x405b0f*/
    {
      if ( v0 ) /*0x405b1b*/
        (**v0)(v0, 1); /*0x405b25*/
    }
    MEMORY[0xB333D0] = 0; /*0x405b27*/
  }
}
