char __userpurge TESSpellList_HasSpell_::SpellListLoop@<al>(_DWORD *eax0@<eax>, int a2@<ecx>, int a3)
{
  while ( *eax0 != a2 )
  {
    eax0 = (_DWORD *)eax0[1];
    if ( !eax0 )
      return TESSpellList_HasSpell_::Return_0(a3);
  }
  return TESSpellList_HasSpell_::Return_1(a3);
}
