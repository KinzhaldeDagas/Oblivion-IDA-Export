void __userpurge MagicItemForm_LoadForm_::ChunkLoopContinue(
        int a1@<edi>,
        Data *a2@<ebx>,
        int a3@<ebp>,
        int a4@<esi>,
        int a5)
{
  UInt32 ChunkType; // eax

  if ( TESFile_GetNextChunk(a2) && (ChunkType = TESFile_GetChunkType(a2), (*(_DWORD *)(a3 - 8) = ChunkType) != 0) )
    MagicItemForm_LoadForm_::ChunkLoopBody(a3, a1, a4);
  else
    MagicItemForm_LoadForm_::ChunkLoopExit(a1, a3, a5);
}
