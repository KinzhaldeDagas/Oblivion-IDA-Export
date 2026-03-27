int __userpurge TESSigilStone_LoadForm_::SwicthChunkType_2@<eax>(
        int a1@<eax>,
        _DWORD *ebx0@<ebx>,
        TESFullName *a3@<esi>,
        int a4)
{
  if ( a1 > 0x4E4F4349 )
    return TESSigilStone_LoadForm_::SwitchChunkType_3(a1, ebx0, (int)a3);
  switch ( a1 )
  {
    case 0x4E4F4349:
      return TESSigilStone_LoadForm_::LoadIcon(ebx0, (int)a3);
    case 0x4C444F4D:
      return TESSigilStone_LoadForm_::LoadModel(ebx0, (int)a3);
    case 0x4C4C5546:
      return TESSigilStone_LoadForm_::LoadName((int)ebx0, a3);
  }
  return TESSigilStone_LoadForm_::ChunkLoop_Next(ebx0, a4);
}
