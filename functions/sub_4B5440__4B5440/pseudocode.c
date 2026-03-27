char __thiscall sub_4B5440(int this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x15 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4C444F4D )
      {
        if ( ChunkType <= 0x4D414E45 )
        {
          switch ( ChunkType )
          {
            case 0x4D414E45:
              v7 = 0;
              TESFile_GetChunkData4(a2, (char *)&v7);
              *(_DWORD *)(this + 0x64) = v7;
              break;
            case 0x4C4C5546:
              if ( this )
                TESFullname_Load((TESFullName *)(this + 0x24), a2);
              else
                TESFullname_Load(0, a2);
              break;
            case 0x4D414E41:
              v7 = 0;
              TESFile_GetChunkData2(a2, (char *)&v7);
              *(_WORD *)(this + 0x68) = v7;
              break;
          }
          goto LABEL_37;
        }
        if ( ChunkType == 0x4E4F4349 )
        {
          if ( this )
            v5 = this + 0x48;
          else
            v5 = 0;
          TESTexture_Load(v5, a2);
          goto LABEL_37;
        }
        if ( ChunkType == 0x54444F4D )
        {
LABEL_30:
          if ( this )
            TESModel_Load((float *)(this + 0x30), a2);
          else
            TESModel_Load(0, a2);
        }
      }
      else
      {
        if ( ChunkType == 0x4C444F4D )
          goto LABEL_30;
        if ( ChunkType > 0x43534544 )
        {
          if ( ChunkType == 0x44494445 )
          {
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v6, 0x200u);
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6);
          }
          else if ( ChunkType == 0x49524353 )
          {
            v7 = 0;
            TESFile_GetChunkData4(a2, (char *)&v7);
            *(_DWORD *)(this + 0x58) = v7;
            TESScriptableForm_Link(this + 0x54, (TESForm *)this);
          }
          goto LABEL_37;
        }
        switch ( ChunkType )
        {
          case 0x43534544:
            if ( this )
              TESDescription_Load(this + 0x80, (int)a2);
            else
              TESDescription_Load(0, (int)a2);
            break;
          case 0x41544144:
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x88), 2u);
            break;
          case 0x42444F4D:
            goto LABEL_30;
        }
      }
LABEL_37:
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
