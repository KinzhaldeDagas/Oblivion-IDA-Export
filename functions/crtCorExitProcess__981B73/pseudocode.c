HMODULE __cdecl __crtCorExitProcess(int a1)
{
  HMODULE result; // eax

  result = GetModuleHandleA("mscoree.dll"); /*0x981b78*/
  if ( result ) /*0x981b80*/
  {
    result = (HMODULE)GetProcAddress(result, "CorExitProcess"); /*0x981b88*/
    if ( result ) /*0x981b90*/
      return ((HMODULE (__stdcall *)(int))result)(a1); /*0x981b96*/
  }
  return result; /*0x981b98*/
}
