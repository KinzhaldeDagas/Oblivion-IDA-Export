int sub_53FB30()
{
  int result; // eax

  if ( MEMORY[0xB365C4] ) /*0x53fb30*/
    result = ((int (__thiscall *)(Sky *, int))*MEMORY[0xB365C4]->vtbl)(MEMORY[0xB365C4], 1); /*0x53fb40*/
  MEMORY[0xB365C4] = 0; /*0x53fb42*/
  return result; /*0x53fb4c*/
}
