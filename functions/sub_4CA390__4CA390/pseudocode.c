void sub_4CA390()
{
  int v0; // esi

  v0 = MEMORY[0xB35C24]; /*0x4ca391*/
  if ( MEMORY[0xB35C24] ) /*0x4ca391*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x4ca39f*/
    {
      if ( v0 ) /*0x4ca3ab*/
        (**(void (__thiscall ***)(int, int))v0)(v0, 1); /*0x4ca3b5*/
    }
    MEMORY[0xB35C24] = 0; /*0x4ca3b7*/
  }
  unk_B3659C = 0; /*0x4ca3c1*/
}
