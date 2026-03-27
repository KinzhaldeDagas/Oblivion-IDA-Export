char __cdecl sub_4F47B0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  char *v7; // eax
  int v8; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    v7 = (char *)sub_4D7740(a1);
    if ( v7 )
    {
      sub_429990(v7);
      *a4 = (double)v8;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetLockLevel >> %0.f", *a4);
  return 1;
}
