double sub_7485F0()
{
  void (__stdcall *v0)(LARGE_INTEGER *); // esi
  LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

  v0 = (void (__stdcall *)(LARGE_INTEGER *))QueryPerformanceCounter; /*0x7485fb*/
  if ( byte_B27EB2 ) /*0x7485f3*/
  {
    QueryPerformanceFrequency(stru_B407B0); /*0x748608*/
    v0(&unk_B407A8); /*0x748613*/
    byte_B27EB2 = 0; /*0x748615*/
  }
  v0(&PerformanceCount); /*0x748621*/
  PerformanceCount.QuadPart -= unk_B407A8.QuadPart; /*0x748637*/
  *(float *)&PerformanceCount.LowPart = (double)PerformanceCount.QuadPart / (double)stru_B407B0[0].QuadPart; /*0x74864c*/
  return *(float *)&PerformanceCount.LowPart; /*0x748652*/
}
