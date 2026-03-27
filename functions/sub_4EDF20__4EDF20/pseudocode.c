char __thiscall sub_4EDF20(TESForm *this, Data *a2)
{
  signed int ChunkType; // eax
  int length; // eax
  char *v6; // eax
  char *v7; // ebx
  int v8[3]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x2D )
    return 0;
  TESFile_InitializeFormFromRecord(a2, this, v8[0], v8[1]);
  TESForm_SetIsLinked(this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4D414E43 )
      {
        switch ( ChunkType )
        {
          case 0x4D414E44:
            TESTexture_Load((int)(this + 1), a2);
            break;
          case 0x4D414E46:
            TESFile_GetChunkData(a2, (char *)this + 0x58, 0x10u);
            break;
          case 0x4D414E48:
            TESFile_GetChunkData(a2, (char *)this + 0x110, 0x38u);
            break;
          case 0x4D414E53:
            v6 = (char *)FormHeapAlloc(8u);
            if ( v6 )
            {
              *(_DWORD *)v6 = 0;
              *((_DWORD *)v6 + 1) = 0;
              v7 = v6;
            }
            else
            {
              v7 = 0;
            }
            TESFile_GetChunkData(a2, v7, 8u);
            TESForm_ResolveFormID((UInt32 *)v7, a2);
            BSSimpleList_PushBack((_DWORD *)this + 0x42, (int)v7);
            break;
          default:
            goto LABEL_29;
        }
        goto LABEL_29;
      }
      if ( ChunkType == 0x4D414E43 )
      {
        TESTexture_Load((int)this + 0x24, a2);
      }
      else
      {
        if ( ChunkType <= 0x42444F4D )
        {
          if ( ChunkType != 0x42444F4D )
          {
            if ( ChunkType == 0x304D414E )
            {
              if ( a2->currentChunk.length == 0xA0 )
                TESFile_GetChunkData(a2, (char *)this + 0x68, 0xA0u);
            }
            else if ( ChunkType == 0x41544144 )
            {
              length = a2->currentChunk.length;
              if ( length == 0xF )
              {
                TESFile_GetChunkData(a2, (char *)this + 0x48, 0xFu);
              }
              else if ( length == 0xC )
              {
                TESFile_GetChunkData(a2, (char *)this + 0x48, 0xCu);
                *((_WORD *)this + 0x2A) = 0xFFFF;
                *((_BYTE *)this + 0x56) = 0xFF;
              }
            }
            goto LABEL_29;
          }
LABEL_18:
          TESModel_Load((float *)this + 0xC, a2);
          goto LABEL_29;
        }
        if ( ChunkType != 0x44494445 )
        {
          if ( ChunkType != 0x4C444F4D )
            goto LABEL_29;
          goto LABEL_18;
        }
        _alloca_();
        TESFile_GetChunkData(a2, (char *)v8, 0x200u);
        this->vtbl->SetEditorID(this, (const char *)v8);
      }
LABEL_29:
      if ( TESFile_GetNextChunk(a2) )
      {
        ChunkType = TESFile_GetChunkType(a2);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
  }
  return 1;
}
