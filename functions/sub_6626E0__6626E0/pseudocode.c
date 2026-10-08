TESRace *__thiscall sub_6626E0(Actor *this)
{
  TESRace *result; // eax
  SpellListEntry *p_spellList; // esi

  result = Actor::GetRaceIfNPC(this); /*0x6626e4*/
  p_spellList = &result->spells.spellList; /*0x6626eb*/
  if ( result != (TESRace *)0xFFFFFFD0 ) /*0x6626ee*/
  {
    do /*0x662708*/
    {
      result = (TESRace *)p_spellList->type; /*0x6626f0*/
      if ( !p_spellList->type ) /*0x6626f0*/
        break; /*0x6626f4*/
      result = (TESRace *)((int (__thiscall *)(Actor *, TESForm *))this->vtbl->Unk_B7)(this, p_spellList->type); /*0x662701*/
      p_spellList = p_spellList->next; /*0x662703*/
    }
    while ( p_spellList ); /*0x662708*/
  }
  return result; /*0x66270a*/
}
