void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ((void (__cdecl *)(UINT))ExitProcess)(uExitCode);
}
