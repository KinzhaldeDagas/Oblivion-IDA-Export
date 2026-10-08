char __thiscall TESSpellList_AddSpell(void *this, int a2)
{
  if ( a2 ) /*0x46f35a*/
    return TESSpellList_AddSpell_::GetSpellLL((int)this, a2, a2); /*0x46f35a*/
  else
    return TESSpellList_AddSpell_::Return_0(0); /*0x46f35b*/
}
