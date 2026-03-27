int __userpurge TESSigilStone_LoadForm_::LoadMainData@<eax>(int *a1@<ebx>, TESForm *a2@<esi>, int a3)
{
  TESForm_LoadGenericComponents(a2, (Data *)a1, 0, 0);
  return TESSigilStone_LoadForm_::ChunkLoop_Next(a1, a3);
}
