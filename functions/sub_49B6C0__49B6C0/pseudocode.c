LONG sub_49B6C0()
{
  LONG result; // eax
  int (__thiscall ***v1)(_DWORD, int); // esi

  NiTObjectArray_ClearAndRelease((void *)(*(_DWORD *)&MEMORY[0xB33E90][0x13A0] + 0xAC)); /*0x49b6cc*/
  result = *(_DWORD *)&MEMORY[0xB33E90][0x13A0]; /*0x49b6d1*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x13A0] ) /*0x49b6d1*/
  {
    v1 = *(int (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x13A0]; /*0x49b6db*/
    result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x49b6e1*/
    if ( !result ) /*0x49b6e9*/
    {
      if ( v1 ) /*0x49b6ed*/
        result = (**v1)(v1, 1); /*0x49b6f7*/
    }
    *(_DWORD *)&MEMORY[0xB33E90][0x13A0] = 0; /*0x49b6f9*/
  }
  return result; /*0x49b704*/
}
