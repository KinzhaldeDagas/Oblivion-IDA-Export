DWORD AviablePhysicalPages()
{
  struct _MEMORYSTATUS Buffer; // [esp+0h] [ebp-20h] BYREF

  GlobalMemoryStatus((LPMEMORYSTATUS)&Buffer); /*0x401217*/
  return Buffer.dwAvailPhys; /*0x401221*/
}
