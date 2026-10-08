void sub_4A08E0()
{
  int v0; // esi

  v0 = *(_DWORD *)&MEMORY[0xB33E90][0x1400]; /*0x4a08e1*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x1400] ) /*0x4a08e1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x4a08ef*/
    {
      if ( v0 ) /*0x4a08fb*/
        (**(void (__thiscall ***)(int, int))v0)(v0, 1); /*0x4a0905*/
    }
    *(_DWORD *)&MEMORY[0xB33E90][0x1400] = 0; /*0x4a0907*/
  }
}
