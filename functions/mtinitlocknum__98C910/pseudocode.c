int __cdecl _mtinitlocknum(int a1)
{
  _RTL_CRITICAL_SECTION_0 *v1; // edi

  if ( !hHeap )
  {
    _FF_MSGBANNER();
    _NMSG_WRITE(0x1E);
    __crtExitProcess(0xFFu);
  }
  if ( *(&lpCriticalSection + 2 * a1) )
LABEL_12:
    JUMPOUT(0x98C9C4);
  v1 = (_RTL_CRITICAL_SECTION_0 *)unknown_libname_72();
  if ( !v1 )
  {
    *_errno() = 0xC;
    goto LABEL_12;
  }
  _lock(0xA);
  if ( *(&lpCriticalSection + 2 * a1) )
  {
    free(v1);
  }
  else if ( __crtInitCritSecAndSpinCount(v1, 0xFA0) )
  {
    *(&lpCriticalSection + 2 * a1) = v1;
  }
  else
  {
    free(v1);
    *_errno() = 0xC;
  }
  _unlock(0xA);
  return _mtinitlocknum_::_LN15_3();
}
