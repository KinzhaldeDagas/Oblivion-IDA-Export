int __userpurge TESSigilStone_LoadForm_::LoadMainData@<eax>(Data *a1@<ebx>, TESForm *a2@<esi>, int a3@<ebp>, int a4)
{
  TESForm_LoadGenericComponents(a2, a1, 0, 0); /*0x4bbab8*/
  return TESSigilStone_LoadForm_::ChunkLoop_Next(a1, a3, a2, a4);
}
