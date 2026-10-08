char __userpurge TESLevCreature_LoadForm_::LoadLevListData@<al>(
        int a1@<ebp>,
        Data *a2@<edi>,
        TESForm *a3@<esi>,
        int a4)
{
  *(_BYTE *)(a1 - 0xC) = 0; /*0x4af7ad*/
  TESFile_GetChunkData(a2, (char *)(a1 - 0xC), 0); /*0x4af7b1*/
  TESLeveledList_SetCalcAllLevels(&a3[1].member.refID, *(char *)(a1 - 0xC) < 0); /*0x4af7c7*/
  *(_BYTE *)(a1 - 0xC) &= ~0x80u; /*0x4af7cc*/
  TESLeveledList_SetChanceNone(&a3[1].member.refID, *(_DWORD *)(a1 - 0xC)); /*0x4af7d6*/
  return TESLevCreature_LoadForm_::NextChunk(a2, a3, a4);
}
