int __userpurge TESSpellList_AddSpell_::GetSpellLL@<eax>(int a1@<edi>, int esi0@<esi>, int a3)
{
  if ( a1 == 0xFFFFFFFC )
    JUMPOUT(0x46F37B);
  return TESSpellList_AddSpell_::SpellListLoop((_DWORD *)(a1 + 4), a1, esi0, a3);
}
