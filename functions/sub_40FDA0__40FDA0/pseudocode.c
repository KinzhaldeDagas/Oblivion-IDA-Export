bool __thiscall sub_40FDA0(void *this)
{
  DWORD ExitCode; // [esp+0h] [ebp-4h] BYREF

  ExitCode = (DWORD)this;
  if ( !hHandle )
    return 0;
  GetExitCodeThread(hHandle, &ExitCode);
  return ExitCode == 0x103;
}
