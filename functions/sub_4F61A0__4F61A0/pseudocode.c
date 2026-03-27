char __cdecl sub_4F61A0(Actor *a1, Actor *a2, int a3, double *a4)
{
  TESForm *ActorBaseForm; // eax
  TESForm *v8; // esi
  TESForm *v9; // eax
  int v10; // ecx
  TESForm *v11; // edi
  UInt32 *i; // esi
  int v13; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      if ( a2 )
      {
        ActorBaseForm = Actor_GetActorBaseForm(a1, 1);
        v8 = ActorBaseForm;
        if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID )
          v8 = Actor_GetActorBaseForm(a1, 0);
        v9 = Actor_GetActorBaseForm(a2, 1);
        v11 = v9;
        if ( !v9[2].member.modlist.data && !v9[2].member.refID )
          v11 = Actor_GetActorBaseForm(a2, 0);
        if ( v8 )
        {
          if ( v11 )
          {
            for ( i = &v8[2].member.refID; i; i = (UInt32 *)i[1] )
            {
              if ( !i[1] && !*i )
                break;
              if ( 1.0 == *a4 )
                break;
              v13 = *(_DWORD *)*i;
              if ( v13 )
              {
                LOBYTE(v10) = a2 == (Actor *)TESDataHandler_g_PlayerRef;
                if ( TESActorBaseData_GetFactionRank(&v11[1].member.refID, v13, v10) != 0xFFFFFFFF )
                  *a4 = 1.0;
              }
            }
          }
        }
        if ( IsConsoleMode )
          Interface_ConsolePrint("SameFaction >> %0.2f", *a4);
      }
    }
  }
  return 1;
}
