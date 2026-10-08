int __cdecl _mtinitlocknum(int a1)
{
  int v1; // ebp
  _RTL_CRITICAL_SECTION_0 *v2; // edi

  if ( !dword_BA9E10[0x127] ) /*0x98c92a*/
  {
    _FF_MSGBANNER(v1); /*0x98c92c*/
    _NMSG_WRITE(v1, 0x1E); /*0x98c933*/
    __crtExitProcess(0xFFu); /*0x98c93d*/
  }
  if ( *(&lpCriticalSection + 2 * a1) ) /*0x98c94e*/
LABEL_12:
    JUMPOUT(0x98C9C4); /*0x98c9c4*/
  v2 = (_RTL_CRITICAL_SECTION_0 *)unknown_libname_72(0x18); /*0x98c95e*/
  if ( !v2 ) /*0x98c962*/
  {
    *_errno() = 0xC; /*0x98c969*/
    goto LABEL_12; /*0x98c971*/
  }
  _lock(0xA); /*0x98c975*/
  if ( *(&lpCriticalSection + 2 * a1) ) /*0x98c97e*/
  {
    free(v2); /*0x98c9af*/
  }
  else if ( __crtInitCritSecAndSpinCount(0, v2, 0xFA0u) ) /*0x98c988*/
  {
    *(&lpCriticalSection + 2 * a1) = v2; /*0x98c9aa*/
  }
  else
  {
    free(v2); /*0x98c994*/
    *_errno() = 0xC; /*0x98c99f*/
  }
  _unlock(0xA); /*0x98c9cc*/
  return _mtinitlocknum_::_LN15_3(v1);
}
