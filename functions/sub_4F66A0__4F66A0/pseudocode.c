char __cdecl sub_4F66A0(Actor *a1, int a2, int a3, double *a4)
{
  TESFurniture *v4; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      v4 = a1->members.super.process->GetFurniture(a1->members.super.process);
      if ( v4 )
      {
        if ( ((int (__thiscall *)(TESFurniture *))v4->super.__vftable[1].super.super.SetQuestItem)(v4) == a2 )
          *a4 = 1.0;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("IsCurrentFurnitureObj>> %0.2f", *a4);
  return 1;
}
