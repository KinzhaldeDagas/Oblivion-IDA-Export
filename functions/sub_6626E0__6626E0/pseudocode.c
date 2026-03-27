TESRace *__thiscall sub_6626E0(Actor *this)
{
  TESRace *result; // eax
  SpellListEntry *p_spellList; // esi

  result = Actor::GetRaceIfNPC(this);
  p_spellList = &result->spells.spellList;
  if ( result != (TESRace *)0xFFFFFFD0 )
  {
    do
    {
      result = (TESRace *)p_spellList->type;
      if ( !p_spellList->type )
        break;
      result = (TESRace *)((int (__thiscall *)(Actor *, TESForm *))this->vtbl->Unk_B7)(this, p_spellList->type);
      p_spellList = p_spellList->next;
    }
    while ( p_spellList );
  }
  return result;
}
