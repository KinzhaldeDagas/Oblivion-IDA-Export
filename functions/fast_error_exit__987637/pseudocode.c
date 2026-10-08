void __usercall __noreturn fast_error_exit(int a1@<ebp>, int a2)
{
  if ( dword_BA9E00[0] == 1 ) /*0x98763e*/
    _FF_MSGBANNER(a1); /*0x987640*/
  _NMSG_WRITE(a1, a2); /*0x987649*/
  __crtExitProcess(0xFFu); /*0x987653*/
}
