DWORD sub_9DC2A0()
{
  DWORD result; // eax

  result = GetTickCount(); /*0x9dc2a0*/
  *(float *)&MEMORY[0xB33E90][4] = 0.0; /*0x9dc2a8*/
  *(float *)&MEMORY[0xB33E90][8] = 0.0; /*0x9dc2b0*/
  MEMORY[0xB33E90][0] = 0; /*0x9dc2b6*/
  *(float *)&MEMORY[0xB33E90][0xC] = 0.0; /*0x9dc2bc*/
  *(_DWORD *)&MEMORY[0xB33E90][0x10] = 0; /*0x9dc2c2*/
  *(_DWORD *)&MEMORY[0xB33E90][0x14] = result; /*0x9dc2c8*/
  return result; /*0x9dc2cd*/
}
