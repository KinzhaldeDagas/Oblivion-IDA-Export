void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode); /*0x981b9d*/
  ((void (__cdecl *)(UINT))ExitProcess)(uExitCode); /*0x981ba7*/
}
