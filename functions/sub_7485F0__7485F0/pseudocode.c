double sub_7485F0()
{
  void (__stdcall *v0)(LARGE_INTEGER *); // esi
  LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

  v0 = (void (__stdcall *)(LARGE_INTEGER *))QueryPerformanceCounter;
  if ( byte_B27EB2 )
  {
    QueryPerformanceFrequency(&stru_B407B0);
    v0((LARGE_INTEGER *)&stru_B40790.SpinCount);
    byte_B27EB2 = 0;
  }
  v0(&PerformanceCount);
  PerformanceCount.QuadPart -= stru_B40790.SpinCount;
  *(float *)&PerformanceCount.LowPart = (double)PerformanceCount.QuadPart / (double)stru_B407B0.QuadPart;
  return *(float *)&PerformanceCount.LowPart;
}
