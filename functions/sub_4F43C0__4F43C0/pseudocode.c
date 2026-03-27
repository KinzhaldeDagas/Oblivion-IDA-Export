char __cdecl sub_4F43C0(TESObjectREFR *a1, TESObjectREFR *a2, int a3, double *a4)
{
  if ( a1 )
  {
    if ( a2 )
      *a4 = TesObjectREF_GetDistance(a1, a2, 1);
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetDistance >> %0.2f", *a4);
  return 1;
}
