int __userpurge TESSigilStone_LoadForm_::SwitchChunkType_3@<eax>(int a1@<eax>, int *ebx0@<ebx>, int a3@<esi>, int a4)
{
  if ( a1 == 0x54444F4D )
    return TESSigilStone_LoadForm_::LoadModel(ebx0, a3);
  else
    return TESSigilStone_LoadForm_::ChunkLoop_Next(ebx0, a4);
}
