int __thiscall TESSpellList_AddSpell(void *this, int a2)
{
  if ( a2 )
    return TESSpellList_AddSpell_::GetSpellLL((int)this, a2, a2);
  else
    return TESSpellList_AddSpell_::Return_0(0);
}
