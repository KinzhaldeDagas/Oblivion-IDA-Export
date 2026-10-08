void __userpurge TESSigilStone_LoadForm_::ChunkLoop_Next(Data *a1@<ebx>, int a2@<ebp>, TESForm *a3@<esi>, int a4)
{
  UInt32 ChunkType; // eax

  if ( TESFile_GetNextChunk(a1) && (ChunkType = TESFile_GetChunkType(a1)) != 0 ) /*0x4bbbb4*/
    TESSigilStone_LoadForm_::SwitchChunkType(ChunkType, a1, a2, a3, a4); /*0x4bbbb4*/
  else
    TESSigilStone_LoadForm_::Return_1(a2, a4); /*0x4bbbb5*/
}
