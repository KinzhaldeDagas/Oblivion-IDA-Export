int _ms_p5_mp_test_fdiv()
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD); // eax

  ModuleHandleA = GetModuleHandleA("KERNEL32"); /*0x9907d9*/
  if ( ModuleHandleA /*0x9907f1*/
    && (IsProcessorFeaturePresent = (BOOL (__stdcall *)(DWORD))GetProcAddress(
                                                                 ModuleHandleA,
                                                                 "IsProcessorFeaturePresent")) != 0 )
  {
    return IsProcessorFeaturePresent(0); /*0x9907f5*/
  }
  else
  {
    return _ms_p5_test_fdiv(); /*0x9907f8*/
  }
}
