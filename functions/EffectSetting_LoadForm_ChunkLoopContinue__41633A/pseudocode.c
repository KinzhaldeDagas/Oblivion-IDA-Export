void __userpurge EffectSetting_LoadForm_::ChunkLoopContinue(Data *a1@<edi>, int a2@<ebx>, int a3@<ebp>, int a4)
{
  UInt32 ChunkType; // eax

  if ( TESFile_GetNextChunk(a1) && (ChunkType = TESFile_GetChunkType(a1)) != 0 ) /*0x41634e*/
    EffectSetting_LoadForm_::ChunkLoopBody(ChunkType, a1, a2, a3, a4); /*0x41634e*/
  else
    EffectSetting_LoadForm_::Return_1(a3, a4); /*0x41634f*/
}
