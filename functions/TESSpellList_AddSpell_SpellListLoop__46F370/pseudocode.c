char __userpurge TESSpellList_AddSpell_::SpellListLoop@<al>(
        _DWORD *eax0@<eax>,
        char *a2@<edi>,
        int a3@<esi>,
        _DWORD *a4@<ecx>,
        int a1)
{
  TESForm *ActorBaseForm; // eax
  char *p_refID; // eax

  do /*0x46f379*/
  {
    if ( *eax0 == a3 ) /*0x46f372*/
      return TESSpellList_AddSpell_::Return_0(a1); /*0x46f372*/
    eax0 = (_DWORD *)eax0[1]; /*0x46f374*/
  }
  while ( eax0 ); /*0x46f379*/
  BSSimpleList_PushFront(a4, a3); /*0x46f37c*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)reference, 0); /*0x46f389*/
  if ( ActorBaseForm ) /*0x46f390*/
    p_refID = (char *)&ActorBaseForm[3].member.refID; /*0x46f392*/
  else
    p_refID = 0; /*0x46f397*/
  if ( a2 == p_refID && !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184) ) /*0x46f3ac*/
    PlayerCharacter_SetKnownEffect(a3); /*0x46f3bc*/
  return TESSpellList_AddSpell_::Return_1(a1);
}
