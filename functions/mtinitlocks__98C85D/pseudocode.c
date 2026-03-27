signed int _mtinitlocks()
{
  int v0; // esi
  _RTL_CRITICAL_SECTION_0 *v1; // edi

  v0 = 0;
  v1 = (_RTL_CRITICAL_SECTION_0 *)&unk_BAA158;
  while ( 1 )
  {
    if ( dword_B310C4[2 * v0] == 1 )
    {
      *(&lpCriticalSection + 2 * v0) = v1;
      v1 = (_RTL_CRITICAL_SECTION_0 *)((char *)v1 + 0x18);
      if ( !__crtInitCritSecAndSpinCount(*(&lpCriticalSection + 2 * v0), 0xFA0) )
        break;
    }
    if ( ++v0 >= 0x24 )
      return 1;
  }
  *(&lpCriticalSection + 2 * v0) = 0;
  return 0;
}
