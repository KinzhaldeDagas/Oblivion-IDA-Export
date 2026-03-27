int __userpurge TESLevCreature_LoadForm_::LoadLevListData@<eax>(int a1@<ebp>, Data *a2@<edi>, int a3@<esi>, int a4)
{
  *(_BYTE *)(a1 - 0xC) = 0;
  TESFile_GetChunkData(a2, (char *)(a1 - 0xC), 0);
  TESLeveledList_SetCalcAllLevels((_BYTE *)(a3 + 0x24), *(char *)(a1 - 0xC) < 0);
  *(_BYTE *)(a1 - 0xC) &= ~0x80u;
  TESLeveledList_SetChanceNone((_BYTE *)(a3 + 0x24), *(_DWORD *)(a1 - 0xC));
  return TESLevCreature_LoadForm_::NextChunk(a4);
}
