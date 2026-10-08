TESRace *__thiscall sub_662710(Actor *this)
{
  TESRace *result; // eax
  SpellListEntry *p_spellList; // esi

  result = Actor::GetRaceIfNPC(this); /*0x662713*/
  if ( result ) /*0x66271a*/
  {
    result = Actor::GetRaceIfNPC(this); /*0x66271f*/
    p_spellList = &result->spells.spellList; /*0x662726*/
    if ( result != (TESRace *)0xFFFFFFD0 ) /*0x662729*/
    {
      do /*0x662748*/
      {
        result = (TESRace *)p_spellList->type; /*0x662730*/
        if ( !p_spellList->type ) /*0x662730*/
          break; /*0x662734*/
        result = (TESRace *)((int (__thiscall *)(Actor *, TESForm *))this->vtbl->Unk_B8)(this, p_spellList->type); /*0x662741*/
        p_spellList = p_spellList->next; /*0x662743*/
      }
      while ( p_spellList ); /*0x662748*/
    }
  }
  return result; /*0x66274b*/
}
