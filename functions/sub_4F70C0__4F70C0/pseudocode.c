char __cdecl sub_4F70C0(Actor *a1, int a2, int a3, double *a4)
{
  int v8; // edi
  TESForm *ActorBaseForm; // eax
  int v10; // ecx
  double v11; // st4

  *a4 = 0.0;
  v8 = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 4) == 6 )
      v8 = a2;
  }
  if ( a1 == (Actor *)dword_B3619C && v8 == dword_B36198 )
  {
    *a4 = flt_B361A0;
LABEL_17:
    if ( IsConsoleMode )
      Interface_ConsolePrint("GetInFaction >> %0.2f", *a4);
    return 1;
  }
  if ( a1 && a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
  {
    ActorBaseForm = Actor_GetActorBaseForm(a1, 1);
    if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID )
      ActorBaseForm = Actor_GetActorBaseForm(a1, 0);
    if ( ActorBaseForm )
    {
      if ( v8 )
      {
        LOBYTE(v10) = a1 == (Actor *)TESDataHandler_g_PlayerRef;
        if ( TESActorBaseData_GetFactionRank(&ActorBaseForm[1].member.refID, v8, v10) != 0xFFFFFFFF )
          *a4 = 1.0;
      }
    }
    v11 = *a4;
    dword_B3619C = (int)a1;
    flt_B361A0 = v11;
    dword_B36198 = v8;
    goto LABEL_17;
  }
  return 1;
}
