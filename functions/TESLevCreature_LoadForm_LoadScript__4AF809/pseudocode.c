char __userpurge TESLevCreature_LoadForm_::LoadScript@<al>(int a1@<ebp>, Data *a2@<edi>, TESForm *a3@<esi>, int a4)
{
  *(_DWORD *)(a1 - 8) = 0; /*0x4af80f*/
  TESFile_GetChunkData4(a2, (char *)(a1 - 8)); /*0x4af816*/
  a3[2].member.flags = *(_DWORD *)(a1 - 8); /*0x4af81e*/
  TESScriptableForm_Link((int)&a3[2].member, a3); /*0x4af825*/
  return TESLevCreature_LoadForm_::NextChunk(a2, a3, a4);
}
