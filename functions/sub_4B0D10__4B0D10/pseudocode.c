char __thiscall sub_4B0D10(int this, Data *a2)
{
  signed int ChunkType; // esi
  int v5[3]; // [esp+0h] [ebp-14h] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x1A )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v5[0], v5[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  *(float *)(this + 0x84) = 0.0;
  *(float *)(this + 0x80) = 0.0;
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4C4C5546 )
      {
        if ( ChunkType <= 0x4E4F4349 )
        {
          switch ( ChunkType )
          {
            case 0x4E4F4349:
              TESTexture_Load(this + 0x48, a2);
              break;
            case 0x4D414E46:
              TESFile_GetChunkData4(a2, (char *)(this + 0x88));
              break;
            case 0x4D414E53:
              v6 = 0;
              TESFile_GetChunkData4(a2, (char *)&v6);
              *(_DWORD *)(this + 0x8C) = v6;
              break;
          }
          goto LABEL_32;
        }
        if ( ChunkType == 0x54444F4D )
          goto LABEL_26;
      }
      else
      {
        if ( ChunkType == 0x4C4C5546 )
        {
          TESFullname_Load((TESFullName *)(this + 0x24), a2);
          goto LABEL_32;
        }
        if ( ChunkType > 0x44494445 )
        {
          if ( ChunkType == 0x49524353 )
          {
            v6 = 0;
            TESFile_GetChunkData4(a2, (char *)&v6);
            *(_DWORD *)(this + 0x58) = v6;
            TESScriptableForm_Link(this + 0x54, (TESForm *)this);
            goto LABEL_32;
          }
          if ( ChunkType == 0x4C444F4D )
LABEL_26:
            TESModel_Load((float *)(this + 0x30), a2);
        }
        else
        {
          switch ( ChunkType )
          {
            case 0x44494445:
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v5, 0x200u);
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v5);
              break;
            case 0x41544144:
              TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x70), 0x18u);
              if ( 0.0 == *(float *)(this + 0x84) )
                *(float *)(this + 0x84) = flt_A430CC;
              if ( 0.0 == *(float *)(this + 0x80) )
                *(float *)(this + 0x80) = 1.0;
              break;
            case 0x42444F4D:
              goto LABEL_26;
          }
        }
      }
LABEL_32:
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
