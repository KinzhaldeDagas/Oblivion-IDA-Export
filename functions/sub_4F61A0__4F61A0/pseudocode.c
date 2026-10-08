char __cdecl sub_4F61A0(Actor *a1, Actor *a2, int a3, double *a4)
{
  TESForm *ActorBaseForm; // eax
  TESForm *v5; // esi
  TESForm *v6; // eax
  int v7; // ecx
  TESForm *v8; // edi
  UInt32 *i; // esi
  int v10; // eax

  *a4 = 0.0; /*0x4f61a9*/
  if ( a1 ) /*0x4f61b2*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f61c2*/
    {
      if ( a2 ) /*0x4f61d2*/
      {
        ActorBaseForm = Actor_GetActorBaseForm(a1, 1); /*0x4f61dd*/
        v5 = ActorBaseForm; /*0x4f61e2*/
        if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID ) /*0x4f61ea*/
          v5 = Actor_GetActorBaseForm(a1, 0); /*0x4f61f9*/
        v6 = Actor_GetActorBaseForm(a2, 1); /*0x4f61ff*/
        v8 = v6; /*0x4f6204*/
        if ( !v6[2].member.modlist.data && !v6[2].member.refID ) /*0x4f620c*/
          v8 = Actor_GetActorBaseForm(a2, 0); /*0x4f621b*/
        if ( v5 ) /*0x4f621f*/
        {
          if ( v8 ) /*0x4f6223*/
          {
            for ( i = &v5[2].member.refID; i; i = (UInt32 *)i[1] ) /*0x4f6228*/
            {
              if ( !i[1] && !*i ) /*0x4f6236*/
                break; /*0x4f6239*/
              if ( 1.0 == *a4 ) /*0x4f6245*/
                break; /*0x4f6245*/
              v10 = *(_DWORD *)*i; /*0x4f6249*/
              if ( v10 ) /*0x4f624d*/
              {
                LOBYTE(v7) = a2 == (Actor *)reference; /*0x4f6255*/
                if ( TESActorBaseData_GetFactionRank((int *)&v8[1].member.refID, v10, v7) != 0xFFFFFFFF ) /*0x4f6265*/
                  *a4 = 1.0; /*0x4f6269*/
              }
            }
          }
        }
        if ( MEMORY[0xB361AC] ) /*0x4f6273*/
          Interface_ConsolePrint("SameFaction >> %0.2f", *a4); /*0x4f628b*/
      }
    }
  }
  return 1; /*0x4f6293*/
}
