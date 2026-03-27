void SleepMax0x14Milliseconds()
{
  DWORD v0; // eax

  v0 = dwMilliseconds;
  if ( dwMilliseconds )
  {
    if ( v0 > 0x14 )
    {
      v0 = 0x14;
      dwMilliseconds = 0x14;
    }
    Sleep(v0);
    dwMilliseconds = 0;
  }
}
