char __thiscall TESObjectARMO_LoadForm(int this, Data *a2)
{
  signed int ChunkType; // eax
  void *v5; // edx
  int v6[3]; // [esp+0h] [ebp-24h] BYREF
  float v7; // [esp+Ch] [ebp-18h] BYREF
  float v8; // [esp+10h] [ebp-14h] BYREF
  float v9; // [esp+14h] [ebp-10h] BYREF
  float v10; // [esp+18h] [ebp-Ch] BYREF
  int v11; // [esp+1Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x14 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType <= 0x49524353 )
      {
        if ( ChunkType == 0x49524353 )
        {
          v11 = 0;
          TESFile_GetChunkData4(a2, (char *)&v11);
          *(_DWORD *)(this + 0x34) = v11;
          TESScriptableForm_Link(this + 0x30, (TESForm *)this);
        }
        else if ( ChunkType > 0x42324F4D )
        {
          if ( ChunkType > 0x42444F4D )
          {
            if ( ChunkType == 0x44494445 )
            {
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v6, 0x200u);
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6);
            }
          }
          else
          {
            switch ( ChunkType )
            {
              case 0x42444F4D:
                TESFile_GetChunkData4(a2, (char *)&v7);
                *(float *)(this + 0x78) = v7;
                break;
              case 0x42334F4D:
                TESFile_GetChunkData4(a2, (char *)&v9);
                *(float *)(this + 0x90) = v9;
                break;
              case 0x42344F4D:
                TESFile_GetChunkData4(a2, (char *)&v10);
                *(float *)(this + 0xC0) = v10;
                break;
            }
          }
        }
        else if ( ChunkType == 0x42324F4D )
        {
          TESFile_GetChunkData4(a2, (char *)&v8);
          *(float *)(this + 0xA8) = v8;
        }
        else if ( ChunkType > 0x33444F4D )
        {
          if ( ChunkType == 0x34444F4D )
          {
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v6, 0);
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0xB4) + 0x18))(this + 0xB4, v6);
          }
          else if ( ChunkType == 0x41544144 )
          {
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0xE4), 2u);
          }
        }
        else
        {
          switch ( ChunkType )
          {
            case 0x33444F4D:
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v6, 0);
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x84) + 0x18))(this + 0x84, v6);
              break;
            case 0x32444F4D:
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v6, 0);
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x9C) + 0x18))(this + 0x9C, v6);
              break;
            case 0x324F4349:
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v6, 0);
              BSStringT_Set((BSStringT *)(this + 0xDC), (const char *)v6, 0);
              break;
          }
        }
        goto LABEL_56;
      }
      if ( ChunkType <= 0x54324F4D )
      {
        if ( ChunkType == 0x54324F4D )
        {
          sub_46D940((void *)(this + 0x9C), a2);
        }
        else if ( ChunkType > 0x4D414E41 )
        {
          if ( ChunkType == 0x4D414E45 )
          {
            v11 = 0;
            TESFile_GetChunkData4(a2, (char *)&v11);
            *(_DWORD *)(this + 0x40) = v11;
          }
          else if ( ChunkType == 0x4E4F4349 )
          {
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v6, 0);
            BSStringT_Set((BSStringT *)(this + 0xD0), (const char *)v6, 0);
          }
        }
        else
        {
          switch ( ChunkType )
          {
            case 0x4D414E41:
              v11 = 0;
              TESFile_GetChunkData2(a2, (char *)&v11);
              *(_WORD *)(this + 0x44) = v11;
              break;
            case 0x4C444F4D:
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v6, 0);
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x6C) + 0x18))(this + 0x6C, v6);
              break;
            case 0x4C4C5546:
              if ( this )
                TESFullname_Load((TESFullName *)(this + 0x24), a2);
              else
                TESFullname_Load(0, a2);
              break;
          }
        }
        goto LABEL_56;
      }
      if ( ChunkType > 0x54444D42 )
      {
        if ( ChunkType != 0x54444F4D )
          goto LABEL_56;
        v5 = (void *)(this + 0x6C);
      }
      else
      {
        if ( ChunkType == 0x54444D42 )
        {
          TESFile_GetChunkData(a2, (char *)(this + 0x68), 4u);
          goto LABEL_56;
        }
        if ( ChunkType == 0x54334F4D )
        {
          sub_46D940((void *)(this + 0x84), a2);
          goto LABEL_56;
        }
        if ( ChunkType != 0x54344F4D )
          goto LABEL_56;
        v5 = (void *)(this + 0xB4);
      }
      sub_46D940(v5, a2);
LABEL_56:
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
