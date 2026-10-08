void __thiscall sub_46DFE0(_DWORD *this, int *a2, Data *a1)
{
  UInt32 ChunkType; // eax
  char *v5; // ebx
  char *v6; // esi
  unsigned int v7; // eax
  bool v8; // zf

  if ( a1 ) /*0x46dfea*/
  {
    if ( a2 ) /*0x46dff7*/
    {
      ChunkType = TESFile_GetChunkType(a1); /*0x46dffb*/
      if ( ChunkType == 0x5446494E ) /*0x46e005*/
      {
        sub_46DE60(this + 3, a2, a1); /*0x46e06a*/
      }
      else if ( ChunkType == 0x5A46494E ) /*0x46e00c*/
      {
        v5 = (char *)FormHeapAlloc(a1->currentChunk.length); /*0x46e01e*/
        v6 = v5; /*0x46e025*/
        TESFile_GetChunkData(a1, v5, 0); /*0x46e027*/
        if ( *v5 ) /*0x46e02c*/
        {
          do /*0x46e053*/
          {
            TESModelList_AddUniqueModelPath((char **)this, v6); /*0x46e034*/
            v7 = strlen(v6); /*0x46e03b*/
            v8 = v6[v7 + 1] == 0; /*0x46e04b*/
            v6 += v7 + 1; /*0x46e04f*/
          }
          while ( !v8 ); /*0x46e053*/
        }
        FormHeapFree((unsigned int)v5); /*0x46e056*/
      }
    }
  }
}
