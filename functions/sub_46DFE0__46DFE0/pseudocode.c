void __thiscall sub_46DFE0(_DWORD *this, int *a2, Data *a1)
{
  UInt32 ChunkType; // eax
  char *v5; // ebx
  char *v6; // esi
  unsigned int v7; // eax
  bool v8; // zf

  if ( a1 )
  {
    if ( a2 )
    {
      ChunkType = TESFile_GetChunkType(a1);
      if ( ChunkType == 0x5446494E )
      {
        sub_46DE60(this + 3, a2, a1);
      }
      else if ( ChunkType == 0x5A46494E )
      {
        v5 = (char *)FormHeapAlloc(a1->currentChunk.length);
        v6 = v5;
        TESFile_GetChunkData(a1, v5, 0);
        if ( *v5 )
        {
          do
          {
            sub_46DD70((char **)this, v6);
            v7 = strlen(v6);
            v8 = v6[v7 + 1] == 0;
            v6 += v7 + 1;
          }
          while ( !v8 );
        }
        FormHeapFree((unsigned int)v5);
      }
    }
  }
}
