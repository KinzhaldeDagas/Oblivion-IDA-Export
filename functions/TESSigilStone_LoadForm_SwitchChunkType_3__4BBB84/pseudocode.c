int __userpurge TESSigilStone_LoadForm_::SwitchChunkType_3@<eax>(
        int a1@<eax>,
        Data *ebx0@<ebx>,
        TESForm *a3@<esi>,
        int a4@<ebp>,
        int a5)
{
  if ( a1 == 0x54444F4D ) /*0x4bbb89*/
    return TESSigilStone_LoadForm_::LoadModel(ebx0, (int)a3); /*0x4bbb8a*/
  else
    return TESSigilStone_LoadForm_::ChunkLoop_Next(ebx0, a4, a3, a5); /*0x4bbb89*/
}
