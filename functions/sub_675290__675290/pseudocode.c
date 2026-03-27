PlayerCharacter *__thiscall sub_675290(int this, int a2)
{
  PlayerCharacter *v2; // ebx
  Actor **i; // edi
  int v4; // eax
  PlayerCharacter *v5; // esi
  TESForm *ActorBaseForm; // eax
  int v8; // [esp-Ch] [ebp-14h]

  v2 = 0;
  for ( i = (Actor **)sub_7616D0((ActorList *)(this + 0x68)); i; i = (Actor **)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    if ( v2 )
      break;
    v4 = ((int (__thiscall *)(Actor *))(*i)->vtbl->super.super.IsActor)(*i);
    if ( (_BYTE)v4 )
    {
      v5 = (PlayerCharacter *)*i;
      if ( *i )
      {
        LOBYTE(v4) = v5 == TESDataHandler_g_PlayerRef;
        v8 = v4;
        ActorBaseForm = Actor_GetActorBaseForm(*i, 0);
        if ( TESActorBaseData_GetFactionRank(&ActorBaseForm[1].member.refID, a2, v8) > (int)0xFFFFFFFF )
          v2 = v5;
      }
    }
  }
  return v2;
}
