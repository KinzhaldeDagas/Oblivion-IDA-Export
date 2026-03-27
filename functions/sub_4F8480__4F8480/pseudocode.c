char __cdecl sub_4F8480(Actor *a1, int a2, int a3, double *a4)
{
  Actor *v4; // esi
  char *Name; // eax

  v4 = 0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
      v4 = a1;
  }
  *a4 = 0.0;
  if ( v4 )
  {
    if ( v4->members.super.process->GetEquippedLightData(v4->members.super.process, 1) )
      *a4 = 1.0;
    if ( IsConsoleMode )
    {
      if ( 0.0 != *a4 )
      {
        Name = TESObjectREFR_GetName((TESObjectREFR *)v4);
        Interface_ConsolePrint("%s  wearing a torch ", Name);
      }
    }
  }
  return 1;
}
