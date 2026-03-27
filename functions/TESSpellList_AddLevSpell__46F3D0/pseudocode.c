char __thiscall TESSpellList_AddLevSpell(char *this, int a2)
{
  TESForm *ActorBaseForm; // eax
  char *v5; // eax
  char *v6; // eax

  if ( !a2 )
    return 0;
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0);
  v5 = ActorBaseForm ? (char *)&ActorBaseForm[3].member.refID : 0;
  if ( this == v5 )
    return 0;
  v6 = this + 0xC;
  if ( this != (char *)0xFFFFFFF4 )
  {
    while ( *(_DWORD *)v6 != a2 )
    {
      v6 = *((char **)v6 + 1);
      if ( !v6 )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  BSSimpleList_PushFront((_DWORD *)this + 3, a2);
  return 1;
}
