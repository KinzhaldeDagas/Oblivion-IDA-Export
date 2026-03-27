int __userpurge TESLevCreature_LoadForm_::LoadScript@<eax>(int a1@<ebp>, Data *a2@<edi>, int a3@<esi>, int a4)
{
  *(_DWORD *)(a1 - 8) = 0;
  TESFile_GetChunkData4(a2, (char *)(a1 - 8));
  *(_DWORD *)(a3 + 0x38) = *(_DWORD *)(a1 - 8);
  TESScriptableForm_Link(a3 + 0x34, (TESForm *)a3);
  return TESLevCreature_LoadForm_::NextChunk(a4);
}
