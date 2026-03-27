char __cdecl sub_4F6640(Actor *a1, TESFurniture *a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1)
      && a1->members.super.process->GetFurniture(a1->members.super.process) == a2 )
    {
      *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("IsCurrentFurnitureRef>> %0.2f", *a4);
  return 1;
}
