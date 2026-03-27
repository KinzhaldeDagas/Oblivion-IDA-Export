char __thiscall TESSpellList_HasSpell(_DWORD *this, int a2)
{
  if ( this == (_DWORD *)0xFFFFFFFC )
    return TESSpellList_HasSpell_::Return_0(a2);
  else
    return TESSpellList_HasSpell_::SpellListLoop(this + 1, a2, a2);
}
