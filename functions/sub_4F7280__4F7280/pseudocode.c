char __cdecl sub_4F7280(Actor *a1, int a2, int a3, double *a4)
{
  TESForm *ActorBaseForm; // eax
  int v9; // edx
  int v10; // ecx

  *a4 = dbl_A3D360;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      ActorBaseForm = Actor_GetActorBaseForm(a1, 1);
      if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID )
        ActorBaseForm = Actor_GetActorBaseForm(a1, 0);
      v9 = a2;
      v10 = 0;
      if ( a2 )
      {
        if ( *(_BYTE *)(a2 + 4) == 6 )
          v10 = a2;
      }
      if ( ActorBaseForm )
      {
        if ( v10 )
        {
          LOBYTE(v9) = a1 == (Actor *)TESDataHandler_g_PlayerRef;
          *a4 = (double)TESActorBaseData_GetFactionRank(&ActorBaseForm[1].member.refID, v10, v9);
        }
      }
      if ( IsConsoleMode )
        Interface_ConsolePrint("GetFactionRank >> %0.2f", *a4);
    }
  }
  return 1;
}
