void SleepMax0x14Milliseconds()
{
  DWORD v0; // eax

  v0 = *(_DWORD *)&MEMORY[0xB33E90][0x1258]; /*0x498f00*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x1258] ) /*0x498f00*/
  {
    if ( v0 > 0x14 ) /*0x498f0c*/
    {
      v0 = 0x14; /*0x498f0e*/
      *(_DWORD *)&MEMORY[0xB33E90][0x1258] = 0x14; /*0x498f13*/
    }
    Sleep(v0); /*0x498f19*/
    *(_DWORD *)&MEMORY[0xB33E90][0x1258] = 0; /*0x498f1f*/
  }
}
