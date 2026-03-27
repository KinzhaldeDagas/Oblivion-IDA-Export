char __cdecl Cmd_GetDead_Shared(Actor *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) && a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 1) )
      *a4 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetDead >> %0.2f", *a4);
  return 1;
}
