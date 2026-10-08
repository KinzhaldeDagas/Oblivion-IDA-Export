bool __thiscall sub_40FDA0(void *this)
{
  DWORD ExitCode; // [esp+0h] [ebp-4h] BYREF

  ExitCode = (DWORD)this; /*0x40fda0*/
  if ( !MEMORY[0xB33434] ) /*0x40fda8*/
    return 0; /*0x40fdaa*/
  GetExitCodeThread(MEMORY[0xB33434], &ExitCode); /*0x40fdb3*/
  return ExitCode == 0x103; /*0x40fdad*/
}
