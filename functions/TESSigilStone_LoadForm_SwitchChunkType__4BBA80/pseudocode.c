int __userpurge TESSigilStone_LoadForm_::SwitchChunkType@<eax>(
        int a1@<eax>,
        Data *ebx0@<ebx>,
        int a3@<ebp>,
        TESForm *a4@<esi>,
        int a5)
{
  if ( a1 > 0x49524353 ) /*0x4bba85*/
    return TESSigilStone_LoadForm_::SwicthChunkType_2(a1, ebx0, (TESFullName *)a4, a5); /*0x4bba85*/
  if ( a1 == 0x49524353 ) /*0x4bba8b*/
    return TESSigilStone_LoadForm_::LoadScript((int *)ebx0, a3, a4, a5); /*0x4bba8b*/
  if ( a1 > 0x44494445 ) /*0x4bba96*/
    return TESSigilStone_LoadForm_::SwitchChunkType_4(a1, (int *)ebx0, a5); /*0x4bba96*/
  switch ( a1 ) /*0x4bba98*/
  {
    case 0x44494445: /*0x4bba98*/
      JUMPOUT(0x4BBAC2); /*0x4bbac2*/
    case 0x41544144: /*0x4bba98*/
      return TESSigilStone_LoadForm_::LoadMainData((int *)ebx0, a4, a5); /*0x4bba9f*/
    case 0x42444F4D: /*0x4bba98*/
      return TESSigilStone_LoadForm_::LoadModel(ebx0, (int)a4); /*0x4bbaa6*/
  }
  return TESSigilStone_LoadForm_::ChunkLoop_Next(ebx0, a3, a4, a5);
}
