char __cdecl sub_4F7EF0(Actor *a1, int a2, int a3, double *a4)
{
  TESPackage *v7; // eax

  *a4 = dbl_A3D360;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      v7 = sub_5E0380(a1);
      if ( v7 )
      {
        if ( v7->members.type == 0x11 )
          *a4 = (double)*(int *)&v7[1].members.super.type;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Procedure >> %0.2f", *a4);
  return 1;
}
