char __userpurge TESSpellList_AddSpell_::SpellListLoop@<al>(
        _DWORD *eax0@<eax>,
        char *a2@<edi>,
        int a3@<esi>,
        _DWORD *a4@<ecx>,
        int a1)
{
  TESForm *ActorBaseForm; // eax
  UInt32 *p_refID; // eax

  do
  {
    if ( *eax0 == a3 )
      return TESSpellList_AddSpell_::Return_0(a1);
    eax0 = (_DWORD *)eax0[1];
  }
  while ( eax0 );
  BSSimpleList_PushFront(a4, a3);
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0);
  if ( ActorBaseForm )
    p_refID = &ActorBaseForm[3].member.refID;
  else
    p_refID = 0;
  if ( a2 == (char *)p_refID && !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
    PlayerCharacter_SetKnownEffect(a3);
  return TESSpellList_AddSpell_::Return_1(a1);
}
