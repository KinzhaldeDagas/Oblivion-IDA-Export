HMODULE __cdecl __crtCorExitProcess(int a1)
{
  HMODULE result; // eax

  result = GetModuleHandleA("mscoree.dll");
  if ( result )
  {
    result = (HMODULE)GetProcAddress(result, "CorExitProcess");
    if ( result )
      return (HMODULE)((int (__stdcall *)(int))result)(a1);
  }
  return result;
}
