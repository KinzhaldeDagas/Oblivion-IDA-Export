char __userpurge TESSpellList_AddSpell_::GetSpellLL@<al>(int a1@<edi>, int esi0@<esi>, int a3)
{
  if ( a1 == 0xFFFFFFFC ) /*0x46f36a*/
    JUMPOUT(0x46F37B); /*0x46f37b*/
  return TESSpellList_AddSpell_::SpellListLoop((_DWORD *)(a1 + 4), (char *)a1, esi0, (_DWORD *)(a1 + 4), a3);
}
