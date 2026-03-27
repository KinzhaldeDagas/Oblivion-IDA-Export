char __cdecl sub_4F5310(Actor *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) && Actor::IsTalking(a1) )
      *a4 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Talking >> %0.2f", *a4);
  return 1;
}
