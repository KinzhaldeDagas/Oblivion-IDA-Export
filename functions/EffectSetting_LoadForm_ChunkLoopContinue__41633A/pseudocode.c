int __userpurge EffectSetting_LoadForm_::ChunkLoopContinue@<eax>(Data *a1@<edi>, int a2@<ebx>, int a3@<ebp>, int a4)
{
  UInt32 ChunkType; // eax

  if ( TESFile_GetNextChunk(a1) && (ChunkType = TESFile_GetChunkType(a1)) != 0 )
    return EffectSetting_LoadForm_::ChunkLoopBody(ChunkType, (int *)a1, a2, a3, a4);
  else
    return EffectSetting_LoadForm_::Return_1(a4);
}
