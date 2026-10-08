int sub_4CCCE0()
{
  int result; // eax

  if ( MEMORY[0xB35C24] ) /*0x4ccce0*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xB35C24] + 0x80))(MEMORY[0xB35C24]); /*0x4cccf2*/
  return result; /*0x4cccf4*/
}
