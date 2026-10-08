HANDLE sub_40FDD0()
{
  HANDLE result; // eax

  result = MEMORY[0xB33434]; /*0x40fdd0*/
  if ( MEMORY[0xB33434] ) /*0x40fdd7*/
  {
    unk_B33425 = 1; /*0x40fddc*/
    result = (HANDLE)WaitForSingleObject(MEMORY[0xB33434], 0xFFFFFFFF); /*0x40fde3*/
    MEMORY[0xB33434] = 0; /*0x40fde9*/
    unk_B33425 = 0; /*0x40fdf3*/
  }
  return result; /*0x40fdfa*/
}
