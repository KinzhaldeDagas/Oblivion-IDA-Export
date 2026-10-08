char __cdecl sub_4F67E0(Actor *a1, int a2, Actor *a3, double *a4)
{
  TESForm *ActorBaseForm; // eax
  TESForm *v5; // esi
  TESForm *v6; // eax
  int v7; // ecx
  TESForm *v8; // ebx
  int v9; // edi
  unsigned int FactionRank; // eax
  unsigned int v11; // esi
  unsigned int v12; // eax

  *a4 = 0.0; /*0x4f67e7*/
  if ( a1 ) /*0x4f67f0*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f6801*/
    {
      if ( a3 ) /*0x4f6811*/
      {
        ActorBaseForm = Actor_GetActorBaseForm(a1, 1); /*0x4f681d*/
        v5 = ActorBaseForm; /*0x4f6822*/
        if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID ) /*0x4f682a*/
          v5 = Actor_GetActorBaseForm(a1, 0); /*0x4f6839*/
        v6 = Actor_GetActorBaseForm(a3, 1); /*0x4f683f*/
        v8 = v6; /*0x4f6844*/
        if ( !v6[2].member.modlist.data && !v6[2].member.refID ) /*0x4f684c*/
          v8 = Actor_GetActorBaseForm(a3, 0); /*0x4f685b*/
        v9 = 0; /*0x4f6861*/
        if ( a2 ) /*0x4f6865*/
        {
          if ( *(_BYTE *)(a2 + 4) == 6 ) /*0x4f686b*/
            v9 = a2; /*0x4f686d*/
        }
        if ( v5 ) /*0x4f6871*/
        {
          if ( v8 ) /*0x4f6875*/
          {
            if ( v9 ) /*0x4f6879*/
            {
              LOBYTE(v7) = a1 == (Actor *)reference; /*0x4f6881*/
              FactionRank = TESActorBaseData_GetFactionRank((int *)&v5[1].member.refID, v9, v7); /*0x4f6889*/
              v11 = FactionRank; /*0x4f6898*/
              LOBYTE(FactionRank) = a3 == (Actor *)reference; /*0x4f689a*/
              v12 = TESActorBaseData_GetFactionRank((int *)&v8[1].member.refID, v9, FactionRank); /*0x4f68a2*/
              if ( v11 != 0xFFFFFFFF && v12 != 0xFFFFFFFF ) /*0x4f68af*/
                *a4 = (double)(int)(v11 - v12); /*0x4f68bf*/
            }
          }
        }
        if ( MEMORY[0xB361AC] ) /*0x4f68c1*/
          Interface_ConsolePrint("GetFactionRankDifference >> %0.2f", *a4); /*0x4f68dd*/
      }
    }
  }
  return 1; /*0x4f68e5*/
}
