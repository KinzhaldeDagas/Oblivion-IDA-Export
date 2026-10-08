// positive sp value has been detected, the output may be wrong!
char __userpurge TESLevCreature_LoadForm_::LoadLevListItem@<al>(
        int a1@<ebp>,
        Data *a2@<edi>,
        TESForm *a3@<esi>,
        int a4)
{
  int v5; // [esp-8h] [ebp-8h]
  unsigned __int16 v6; // [esp-4h] [ebp-4h]

  *(_DWORD *)(a1 - 0x10) = 0; /*0x4af841*/
  *(_DWORD *)(a1 - 0x18) = 0; /*0x4af847*/
  *(_DWORD *)(a1 - 0x14) = 0; /*0x4af84a*/
  *(_WORD *)(a1 - 0x10) = 1; /*0x4af84d*/
  TESFile_GetChunkData(a2, (char *)(a1 - 0x18), 0xCu); /*0x4af853*/
  TESLeveledList_AddForm( /*0x4af867*/
    (char *)&a3[1].member.refID,
    *(_DWORD *)(a1 - 0x18),
    *(_DWORD *)(a1 - 0x10),
    *(_DWORD *)(a1 - 0x14),
    v5,
    v6);
  return TESLevCreature_LoadForm_::NextChunk(a2, a3, a4);
}
