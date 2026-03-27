int __userpurge TESLevCreature_LoadForm_::LoadLevListFlags@<eax>(Data *a1@<edi>, int a2@<esi>, int a3)
{
  TESFile_GetChunkData(a1, (char *)(a2 + 0x31), 0);
  return TESLevCreature_LoadForm_::NextChunk(a3);
}
