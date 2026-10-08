void __usercall sub_675310(ActorList *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  ActorList *v4; // ebp
  Actor *v5; // edi
  float v6; // ebx
  int vtbl; // esi

  v4 = a1 + 2; /*0x675312*/
  v5 = ActorList_ReturnHead(a1 + 2); /*0x67531d*/
  v6 = 0.0; /*0x67531f*/
  while ( v5 ) /*0x675323*/
  {
    if ( !*(_DWORD *)&v5->members.super.super.super.type && !v5->vtbl ) /*0x67532f*/
      return; /*0x67532f*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v5->vtbl->super.super.super.super.InitializeComponent + 0x64))(v5->vtbl) ) /*0x67533b*/
    {
      vtbl = (int)v5->vtbl; /*0x675341*/
      if ( v5->vtbl ) /*0x675341*/
      {
        sub_4F9EC0(a4, a2, a3, vtbl, (ExtraDataList *)(vtbl + 0x44)); /*0x67534c*/
        if ( (*(_DWORD *)(vtbl + 8) & 0x20) != 0 /*0x67537f*/
          || !(*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x170))(vtbl)
          || (*(int (__thiscall **)(int, int))(*(_DWORD *)vtbl + 0x284))(vtbl, 8) <= 0 )
        {
          if ( (*(_DWORD *)(vtbl + 8) & 0x20) == 0 ) /*0x67539f*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x170))(vtbl) ) /*0x6753ab*/
            {
              if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)vtbl + 0x284))(vtbl, 8) <= 0 ) /*0x6753c1*/
                Actor_HandleDeathState((Actor *)vtbl, 2u); /*0x6753c7*/
            }
          }
          if ( *(_DWORD *)(vtbl + 0x58) ) /*0x6753cc*/
          {
            sub_67B320(&v4->head.node.data, (Actor *)vtbl, (Actor **)LODWORD(v6)); /*0x6753d6*/
            if ( v6 == 0.0 ) /*0x6753dd*/
              v5 = ActorList_ReturnHead(v4); /*0x6753eb*/
            else
              v5 = *(Actor **)(LODWORD(v6) + 4); /*0x6753df*/
            continue; /*0x6753e2*/
          }
        }
        else
        {
          a4 = sub_5ED860((int *)vtbl, v6, (int)v4, (int)v5, a2, a3, a4); /*0x675383*/
        }
        v6 = *(float *)&v5; /*0x675388*/
        v5 = *(Actor **)&v5->members.super.super.super.type; /*0x67538a*/
      }
    }
  }
}
