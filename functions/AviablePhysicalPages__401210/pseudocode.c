DWORD AviablePhysicalPages()
{
  struct _MEMORYSTATUS Buffer; // [esp+0h] [ebp-20h] BYREF

  GlobalMemoryStatus((LPMEMORYSTATUS)&Buffer);
  return Buffer.dwAvailPhys;
}
