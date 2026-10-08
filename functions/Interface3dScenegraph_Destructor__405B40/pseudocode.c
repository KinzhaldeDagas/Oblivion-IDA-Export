void Interface3dScenegraph_Destructor()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB333D4]; /*0x405b41*/
  if ( MEMORY[0xB333D4] ) /*0x405b49*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(MEMORY[0xB333D4] + 4)) ) /*0x405b4f*/
    {
      if ( v0 ) /*0x405b5b*/
        (**v0)(v0, 1); /*0x405b65*/
    }
    MEMORY[0xB333D4] = 0; /*0x405b67*/
  }
}
