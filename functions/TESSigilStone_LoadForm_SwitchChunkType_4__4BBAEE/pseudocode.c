int __userpurge TESSigilStone_LoadForm_::SwitchChunkType_4@<eax>(int a1@<eax>, int *a2@<ebx>, int a3)
{
  if ( a1 == 0x44494645 )
    return TESSigilStone_LoadForm_::LoadEffectItem(a3);
  else
    return TESSigilStone_LoadForm_::ChunkLoop_Next(a2, a3);
}
