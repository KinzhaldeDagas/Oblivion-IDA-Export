// positive sp value has been detected, the output may be wrong!
int __userpurge TESLevCreature_LoadForm_::LoadLevListItem@<eax>(int a1@<ebp>, Data *a2@<edi>, int a3@<esi>, int a4)
{
  int v5; // [esp-8h] [ebp-8h]
  __int16 v6; // [esp-4h] [ebp-4h]

  *(_DWORD *)(a1 - 0x10) = 0;
  *(_DWORD *)(a1 - 0x18) = 0;
  *(_DWORD *)(a1 - 0x14) = 0;
  *(_WORD *)(a1 - 0x10) = 1;
  TESFile_GetChunkData(a2, (char *)(a1 - 0x18), 0xCu);
  TESLeveledList_AddForm(
    (void *)(a3 + 0x24),
    *(_DWORD *)(a1 - 0x18),
    *(_DWORD *)(a1 - 0x10),
    *(_DWORD *)(a1 - 0x14),
    v5,
    v6);
  return TESLevCreature_LoadForm_::NextChunk(a4);
}
