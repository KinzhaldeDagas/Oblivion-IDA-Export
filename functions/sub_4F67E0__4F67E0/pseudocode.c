char __cdecl sub_4F67E0(Actor *a1, int a2, Actor *a3, double *a4)
{
  TESForm *ActorBaseForm; // eax
  TESForm *v8; // esi
  TESForm *v9; // eax
  int v10; // ecx
  TESForm *v11; // ebx
  int v12; // edi
  int FactionRank; // eax
  int v14; // esi
  int v15; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      if ( a3 )
      {
        ActorBaseForm = Actor_GetActorBaseForm(a1, 1);
        v8 = ActorBaseForm;
        if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID )
          v8 = Actor_GetActorBaseForm(a1, 0);
        v9 = Actor_GetActorBaseForm(a3, 1);
        v11 = v9;
        if ( !v9[2].member.modlist.data && !v9[2].member.refID )
          v11 = Actor_GetActorBaseForm(a3, 0);
        v12 = 0;
        if ( a2 )
        {
          if ( *(_BYTE *)(a2 + 4) == 6 )
            v12 = a2;
        }
        if ( v8 )
        {
          if ( v11 )
          {
            if ( v12 )
            {
              LOBYTE(v10) = a1 == (Actor *)TESDataHandler_g_PlayerRef;
              FactionRank = TESActorBaseData_GetFactionRank(&v8[1].member.refID, v12, v10);
              v14 = FactionRank;
              LOBYTE(FactionRank) = a3 == (Actor *)TESDataHandler_g_PlayerRef;
              v15 = TESActorBaseData_GetFactionRank(&v11[1].member.refID, v12, FactionRank);
              if ( v14 != 0xFFFFFFFF && v15 != 0xFFFFFFFF )
                *a4 = (double)(v14 - v15);
            }
          }
        }
        if ( IsConsoleMode )
          Interface_ConsolePrint("GetFactionRankDifference >> %0.2f", *a4);
      }
    }
  }
  return 1;
}
