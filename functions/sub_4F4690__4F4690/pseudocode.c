char __cdecl sub_4F4690(Actor *a1, int a2, int a3, double *a4)
{
  double v7; // st5

  if ( !a1 )
    return 1;
  if ( !a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    return 1;
  v7 = sub_5E3590(a1);
  *a4 = v7;
  if ( !IsConsoleMode )
    return 1;
  Interface_ConsolePrint("GetWalkSpeed >> %0.2f", v7);
  return 1;
}
