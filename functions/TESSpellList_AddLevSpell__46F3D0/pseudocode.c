char __thiscall TESSpellList_AddLevSpell(char *this, int a2)
{
  TESForm *ActorBaseForm; // eax
  char *v5; // eax
  char *v6; // eax

  if ( !a2 ) /*0x46f3da*/
    return 0; /*0x46f3da*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)reference, 0); /*0x46f3eb*/
  v5 = ActorBaseForm ? (char *)&ActorBaseForm[3].member.refID : 0;
  if ( this == v5 ) /*0x46f3fd*/
    return 0; /*0x46f3e0*/
  v6 = this + 0xC; /*0x46f402*/
  if ( this != (char *)0xFFFFFFF4 ) /*0x46f406*/
  {
    while ( *(_DWORD *)v6 != a2 ) /*0x46f40a*/
    {
      v6 = *((char **)v6 + 1); /*0x46f40c*/
      if ( !v6 ) /*0x46f411*/
        goto LABEL_10; /*0x46f411*/
    }
    return 0; /*0x46f40a*/
  }
LABEL_10:
  BSSimpleList_PushFront((_DWORD *)this + 3, a2); /*0x46f413*/
  return 1; /*0x46f3dc*/
}
