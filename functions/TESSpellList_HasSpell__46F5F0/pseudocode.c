char __thiscall TESSpellList_HasSpell(_DWORD *this, int a2)
{
  if ( this == (_DWORD *)0xFFFFFFFC ) /*0x46f5f5*/
    return TESSpellList_HasSpell_::Return_0(a2); /*0x46f5f5*/
  else
    return TESSpellList_HasSpell_::SpellListLoop(this + 1, a2, a2); /*0x46f5fb*/
}
