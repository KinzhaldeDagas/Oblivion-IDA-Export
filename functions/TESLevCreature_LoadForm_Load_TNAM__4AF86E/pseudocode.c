char __userpurge TESLevCreature_LoadForm_::Load_TNAM@<al>(int a1@<ebp>, Data *a2@<edi>, TESForm *a3@<esi>, int a4)
{
  *(_DWORD *)(a1 - 8) = 0; /*0x4af874*/
  TESFile_GetChunkData4(a2, (char *)(a1 - 8)); /*0x4af87b*/
  a3[2].member.modlist.data = *(Data **)(a1 - 8); /*0x4af883*/
  return TESLevCreature_LoadForm_::NextChunk(a2, a3, a4);
}
