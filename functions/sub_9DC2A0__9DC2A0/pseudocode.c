DWORD sub_9DC2A0()
{
  DWORD result; // eax

  result = GetTickCount();
  g_FPSGlobal = 0.0;
  flt_B33E98 = 0.0;
  TimeInfo = 0;
  flt_B33E9C = 0.0;
  Seed = 0;
  dword_B33EA4 = result;
  return result;
}
