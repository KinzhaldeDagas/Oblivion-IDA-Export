char __userpurge TESSpellList_HasSpell_::SpellListLoop@<al>(_DWORD *eax0@<eax>, int a2@<ecx>, int a3)
{
  while ( *eax0 != a2 ) /*0x46f602*/
  {
    eax0 = (_DWORD *)eax0[1]; /*0x46f604*/
    if ( !eax0 ) /*0x46f609*/
      return TESSpellList_HasSpell_::Return_0(a3); /*0x46f60a*/
  }
  return TESSpellList_HasSpell_::Return_1(a3);
}
