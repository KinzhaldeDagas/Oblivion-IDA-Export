int sub_77EAF0()
{
  int result; // eax

  if ( MEMORY[0xB428A8] ) /*0x77eaf0*/
    result = (**(int (__thiscall ***)(NiD3DShaderProgramFactory *, int))MEMORY[0xB428A8])(MEMORY[0xB428A8], 1); /*0x77eb00*/
  MEMORY[0xB428A8] = 0; /*0x77eb02*/
  return result; /*0x77eb0c*/
}
