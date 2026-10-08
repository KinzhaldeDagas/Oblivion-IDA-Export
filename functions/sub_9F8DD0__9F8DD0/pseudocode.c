int sub_9F8DD0()
{
  MEMORY[0xB39B88] = 1; /*0x9f8dd8*/
  unk_B39B8C = 1; /*0x9f8ddd*/
  MEMORY[0xB39B90] = CreateSemaphoreA(0, 1, 1, 0); /*0x9f8df5*/
  return atexit(sub_A23300); /*0x9f8e00*/
}
