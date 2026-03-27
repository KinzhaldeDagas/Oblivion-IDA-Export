void __cdecl __noreturn fast_error_exit(int a1)
{
  if ( dword_BA9E00 == 1 )
    _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  __crtExitProcess(0xFFu);
}
