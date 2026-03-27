char __thiscall sub_4BAD20(float *this, Data *a1)
{
  Data *v2; // esi
  float *v3; // edi
  signed int ChunkType; // eax
  unsigned int length; // ebx
  unsigned int v7; // esi
  char *v8; // edi
  NiTArray_NiTexturingPropertyMap *v9; // ebx
  unsigned int end; // esi
  int v11[3]; // [esp+0h] [ebp-1Ch] BYREF
  char *v12; // [esp+Ch] [ebp-10h]
  unsigned int v13; // [esp+10h] [ebp-Ch]
  float *v14; // [esp+14h] [ebp-8h]

  v2 = a1;
  v3 = this;
  v14 = this;
  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x1E )
    return 0;
  TESFile_InitializeFormFromRecord(a1, (TESForm *)v3, v11[0], v11[1]);
  ChunkType = TESFile_GetChunkType(a1);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4D414E43 )
      {
        switch ( ChunkType )
        {
          case 0x4D414E53:
            length = v2->currentChunk.length;
            if ( length )
            {
              if ( (length & 3) == 0 )
              {
                v7 = length >> 2;
                v8 = (char *)FormHeapAlloc((unsigned __int64)(length >> 2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (length >> 2));
                v12 = v8;
                _memset(v8, 0, length);
                TESFile_GetChunkData(a1, v8, length);
                v9 = (NiTArray_NiTexturingPropertyMap *)(v14 + 0x12);
                sub_65DD90((int)(v14 + 0x12));
                if ( v7 )
                {
                  v13 = v7;
                  do
                  {
                    if ( *(_DWORD *)v8 )
                    {
                      end = v9->end;
                      if ( end >= v9->capacity )
                        NiTArray_SetSize((unsigned __int16 *)v9, end + v9->growSize);
                      NiTArray_SetAt(v9, end, v8);
                    }
                    v8 += 4;
                    --v13;
                  }
                  while ( v13 );
                  v8 = v12;
                }
                FormHeapFree((unsigned int)v8);
                v3 = v14;
                v2 = a1;
              }
            }
            break;
          case 0x4E4F4349:
            if ( v3 )
              TESTexture_Load((int)(v3 + 0xF), v2);
            else
              TESTexture_Load(0, v2);
            break;
          case 0x54444F4D:
            goto LABEL_19;
        }
      }
      else
      {
        if ( ChunkType == 0x4D414E43 )
        {
          if ( v2->currentChunk.length == 0x20 )
            TESFile_GetChunkData(v2, (char *)v3 + 0x58, 0x20u);
          goto LABEL_36;
        }
        if ( ChunkType > 0x4C444F4D )
        {
          if ( ChunkType == 0x4D414E42 && v2->currentChunk.length == 8 )
            TESFile_GetChunkData(v2, (char *)v3 + 0x78, 8u);
          goto LABEL_36;
        }
        if ( ChunkType == 0x4C444F4D || ChunkType == 0x42444F4D )
        {
LABEL_19:
          if ( v3 )
            TESModel_Load(v3 + 9, v2);
          else
            TESModel_Load(0, v2);
          goto LABEL_36;
        }
        if ( ChunkType == 0x44494445 )
        {
          _alloca_();
          TESFile_GetChunkData(v2, (char *)v11, 0x200u);
          (*(void (__thiscall **)(float *, int *))(*(_DWORD *)v3 + 0xD8))(v3, v11);
        }
      }
LABEL_36:
      if ( TESFile_GetNextChunk(v2) )
      {
        ChunkType = TESFile_GetChunkType(v2);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
  }
  return 1;
}
