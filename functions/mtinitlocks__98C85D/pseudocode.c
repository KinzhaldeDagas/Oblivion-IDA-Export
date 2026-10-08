signed int __usercall _mtinitlocks@<eax>(int a1@<ebx>)
{
  int v1; // esi
  _RTL_CRITICAL_SECTION_0 *v2; // edi

  v1 = 0; /*0x98c85f*/
  v2 = (_RTL_CRITICAL_SECTION_0 *)&dword_BA9E10[0xD2]; /*0x98c861*/
  while ( 1 ) /*0x98c866*/
  {
    if ( dword_B310C4[2 * v1] == 1 ) /*0x98c86e*/
    {
      *(&lpCriticalSection + 2 * v1) = v2; /*0x98c877*/
      v2 = (_RTL_CRITICAL_SECTION_0 *)((char *)v2 + 0x18); /*0x98c880*/
      if ( !__crtInitCritSecAndSpinCount(a1, *(&lpCriticalSection + 2 * v1), 0xFA0u) ) /*0x98c883*/
        break; /*0x98c883*/
    }
    if ( ++v1 >= 0x24 ) /*0x98c892*/
      return 1; /*0x98c899*/
  }
  *(&lpCriticalSection + 2 * v1) = 0; /*0x98c89a*/
  return 0; /*0x98c897*/
}
