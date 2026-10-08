PlayerCharacter *__thiscall sub_675290(int this, int a2)
{
  PlayerCharacter *v2; // ebx
  Actor **i; // edi
  int v4; // eax
  PlayerCharacter *v5; // esi
  TESForm *ActorBaseForm; // eax
  int v8; // [esp-Ch] [ebp-14h]

  v2 = 0; /*0x675295*/
  for ( i = (Actor **)ActorList_ReturnHead((ActorList *)(this + 0x68)); i; i = (Actor **)i[1] ) /*0x6752a0*/
  {
    if ( !i[1] && !*i ) /*0x6752ae*/
      break; /*0x6752b1*/
    if ( v2 ) /*0x6752b5*/
      break; /*0x6752b5*/
    v4 = ((int (__thiscall *)(Actor *))(*i)->vtbl->super.super.IsActor)(*i); /*0x6752c1*/
    if ( (_BYTE)v4 ) /*0x6752c5*/
    {
      v5 = (PlayerCharacter *)*i; /*0x6752c7*/
      if ( *i ) /*0x6752c7*/
      {
        LOBYTE(v4) = v5 == reference; /*0x6752d5*/
        v8 = v4; /*0x6752d8*/
        ActorBaseForm = Actor_GetActorBaseForm(*i, 0); /*0x6752db*/
        if ( (int)TESActorBaseData_GetFactionRank((int *)&ActorBaseForm[1].member.refID, a2, v8) > (int)0xFFFFFFFF ) /*0x6752ed*/
          v2 = v5; /*0x6752ef*/
      }
    }
  }
  return v2; /*0x6752fa*/
}
