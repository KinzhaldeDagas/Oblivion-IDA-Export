int __userpurge TESSigilStone_LoadForm_::LoadScript@<eax>(Data *a1@<ebx>, int a2@<ebp>, TESForm *a3@<esi>, int a4)
{
  *(_DWORD *)(a2 - 8) = 0; /*0x4bbb1a*/
  TESFile_GetChunkData4(a1, (char *)(a2 - 8)); /*0x4bbb21*/
  a3[3].member.modlist.data = *(Data **)(a2 - 8); /*0x4bbb29*/
  TESScriptableForm_Link((int)&a3[3].member.refID, a3); /*0x4bbb30*/
  return TESSigilStone_LoadForm_::ChunkLoop_Next(a1, a2, a3, a4);
}
