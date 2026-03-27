char __cdecl sub_4F4760(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  BSExtraData *v7; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    v7 = sub_4D7740(a1);
    if ( v7 )
    {
      if ( sub_428E70(v7) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetLocked >> %0.f", *a4);
  return 1;
}
