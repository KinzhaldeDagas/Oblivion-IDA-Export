int __userpurge TESSigilStone_LoadForm_::SwicthChunkType_2@<eax>(
        int a1@<eax>,
        Data *ebx0@<ebx>,
        TESForm *a3@<esi>,
        int a4@<ebp>,
        int a5)
{
  if ( a1 > 0x4E4F4349 ) /*0x4bbb3c*/
    return TESSigilStone_LoadForm_::SwitchChunkType_3(a1, (int *)ebx0, (int)a3, a5); /*0x4bbb3c*/
  switch ( a1 ) /*0x4bbb3e*/
  {
    case 0x4E4F4349: /*0x4bbb3e*/
      return TESSigilStone_LoadForm_::LoadIcon(ebx0, (int)a3); /*0x4bbb3e*/
    case 0x4C444F4D: /*0x4bbb3e*/
      return TESSigilStone_LoadForm_::LoadModel(ebx0, (int)a3); /*0x4bbb45*/
    case 0x4C4C5546: /*0x4bbb3e*/
      return TESSigilStone_LoadForm_::LoadName(ebx0, (TESFullName *)a3); /*0x4bbb4d*/
  }
  return TESSigilStone_LoadForm_::ChunkLoop_Next(ebx0, a4, a3, a5);
}
