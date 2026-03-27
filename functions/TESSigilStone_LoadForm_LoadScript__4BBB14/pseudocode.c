int __userpurge TESSigilStone_LoadForm_::LoadScript@<eax>(int *a1@<ebx>, int a2@<ebp>, TESForm *a3@<esi>, int a4)
{
  *(_DWORD *)(a2 - 8) = 0;
  TESFile_GetChunkData4((Data *)a1, (char *)(a2 - 8));
  a3[3].member.modlist.data = *(Data **)(a2 - 8);
  TESScriptableForm_Link((int)&a3[3].member.refID, a3);
  return TESSigilStone_LoadForm_::ChunkLoop_Next(a1, a4);
}
