char __userpurge TESLevCreature_LoadForm_::LoadLevListFlags@<al>(Data *a1@<edi>, TESForm *a2@<esi>, int a3)
{
  TESFile_GetChunkData(a1, (char *)&a2[2].vtbl + 1, 0); /*0x4af79b*/
  return TESLevCreature_LoadForm_::NextChunk(a1, a2, a3);
}
