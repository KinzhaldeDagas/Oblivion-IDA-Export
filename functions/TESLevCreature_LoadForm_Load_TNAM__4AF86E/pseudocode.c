int __userpurge TESLevCreature_LoadForm_::Load_TNAM@<eax>(int a1@<ebp>, Data *a2@<edi>, int a3@<esi>, int a4)
{
  *(_DWORD *)(a1 - 8) = 0;
  TESFile_GetChunkData4(a2, (char *)(a1 - 8));
  *(_DWORD *)(a3 + 0x40) = *(_DWORD *)(a1 - 8);
  return TESLevCreature_LoadForm_::NextChunk(a4);
}
