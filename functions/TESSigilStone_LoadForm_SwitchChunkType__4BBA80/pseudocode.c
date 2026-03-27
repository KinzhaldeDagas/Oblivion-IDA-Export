int __userpurge TESSigilStone_LoadForm_::SwitchChunkType@<eax>(
        int a1@<eax>,
        int *ebx0@<ebx>,
        int a3@<ebp>,
        TESForm *a4@<esi>,
        int a5)
{
  if ( a1 > 0x49524353 )
    return TESSigilStone_LoadForm_::SwicthChunkType_2(a1, (int)ebx0, (TESFullName *)a4);
  if ( a1 == 0x49524353 )
    return TESSigilStone_LoadForm_::LoadScript(ebx0, a3, a4, a5);
  if ( a1 > 0x44494445 )
    return TESSigilStone_LoadForm_::SwitchChunkType_4(a1);
  switch ( a1 )
  {
    case 0x44494445:
      return TESSigilStone_LoadForm_::LoadEditorID(ebx0, (int)a4, a5);
    case 0x41544144:
      return TESSigilStone_LoadForm_::LoadMainData((int)ebx0, a4, a5);
    case 0x42444F4D:
      return TESSigilStone_LoadForm_::LoadModel(ebx0, (int)a4);
  }
  return TESSigilStone_LoadForm_::ChunkLoop_Next(ebx0, a5);
}
