int __userpurge TESSigilStone_LoadForm_::SwitchChunkType_4@<eax>(
        int a1@<eax>,
        Data *a2@<ebx>,
        int a3@<ebp>,
        TESForm *a4@<esi>,
        int a5)
{
  if ( a1 == 0x44494645 ) /*0x4bbaf3*/
    return TESSigilStone_LoadForm_::LoadEffectItem(a5); /*0x4bbaf4*/
  else
    return TESSigilStone_LoadForm_::ChunkLoop_Next(a2, a3, a4, a5); /*0x4bbaf3*/
}
