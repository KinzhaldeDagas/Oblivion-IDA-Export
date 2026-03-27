char __cdecl sub_4F4640(Actor *a1, int a2, int a3, double *a4)
{
  double FatigueFraction; // st5

  if ( !a1 )
    return 1;
  if ( !a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    return 1;
  FatigueFraction = Actor_GetFatigueFraction(a1);
  *a4 = FatigueFraction;
  if ( !IsConsoleMode )
    return 1;
  Interface_ConsolePrint("GetFatiguePercentage >> %0.2f", FatigueFraction);
  return 1;
}
