char __thiscall TESObjectCLOT_LoadForm(int this, Data *a2)
{
  signed int ChunkType; // eax
  void *v5; // edx
  int v6[3]; // [esp+0h] [ebp-24h] BYREF
  float v7; // [esp+Ch] [ebp-18h] BYREF
  float v8; // [esp+10h] [ebp-14h] BYREF
  float v9; // [esp+14h] [ebp-10h] BYREF
  float v10; // [esp+18h] [ebp-Ch] BYREF
  int v11; // [esp+1Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x16 ) /*0x4b5dd1*/
    return 0; /*0x4b5dd5*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x4b5ddd*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4b5de7*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4b5dee*/
  if ( ChunkType ) /*0x4b5df5*/
  {
    while ( 1 ) /*0x4b5e00*/
    {
      if ( ChunkType <= 0x49524353 ) /*0x4b5e05*/
      {
        if ( ChunkType == 0x49524353 ) /*0x4b5e0b*/
        {
          v11 = 0; /*0x4b5fc9*/
          TESFile_GetChunkData4(a2, (char *)&v11); /*0x4b5fcc*/
          *(_DWORD *)(this + 0x34) = v11; /*0x4b5fd8*/
          TESScriptableForm_Link(this + 0x30, (TESForm *)this); /*0x4b5fdb*/
        }
        else if ( ChunkType > 0x42324F4D ) /*0x4b5e16*/
        {
          if ( ChunkType > 0x42444F4D ) /*0x4b5f2e*/
          {
            if ( ChunkType == 0x44494445 ) /*0x4b5f91*/
            {
              _alloca_(v6[0]); /*0x4b5f9d*/
              TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4b5fac*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6); /*0x4b5fbc*/
            }
          }
          else
          {
            switch ( ChunkType ) /*0x4b5f30*/
            {
              case 0x42444F4D: /*0x4b5f30*/
                TESFile_GetChunkData4(a2, (char *)&v7); /*0x4b5f7c*/
                *(float *)(this + 0x70) = v7; /*0x4b5f84*/
                break;
              case 0x42334F4D: /*0x4b5f30*/
                TESFile_GetChunkData4(a2, (char *)&v9); /*0x4b5f63*/
                *(float *)(this + 0x88) = v9; /*0x4b5f6b*/
                break;
              case 0x42344F4D: /*0x4b5f30*/
                TESFile_GetChunkData4(a2, (char *)&v10); /*0x4b5f4a*/
                *(float *)(this + 0xB8) = v10; /*0x4b5f52*/
                break;
            }
          }
        }
        else if ( ChunkType == 0x42324F4D ) /*0x4b5e1c*/
        {
          TESFile_GetChunkData4(a2, (char *)&v8); /*0x4b5f16*/
          *(float *)(this + 0xA0) = v8; /*0x4b5f1e*/
        }
        else if ( ChunkType > 0x33444F4D ) /*0x4b5e27*/
        {
          if ( ChunkType == 0x34444F4D ) /*0x4b5ec6*/
          {
            _alloca_(v6[0]); /*0x4b5ee8*/
            TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b5ef4*/
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0xAC) + 0x18))(this + 0xAC, v6); /*0x4b5f09*/
          }
          else if ( ChunkType == 0x41544144 ) /*0x4b5ecd*/
          {
            TESForm_LoadGenericComponents((TESForm *)this, a2, 0, 0); /*0x4b5ed8*/
          }
        }
        else
        {
          switch ( ChunkType ) /*0x4b5e2d*/
          {
            case 0x33444F4D: /*0x4b5e2d*/
              _alloca_(v6[0]); /*0x4b5e9f*/
              TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b5eab*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x7C) + 0x18))(this + 0x7C, v6); /*0x4b5eba*/
              break;
            case 0x32444F4D: /*0x4b5e2d*/
              _alloca_(v6[0]); /*0x4b5e71*/
              TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b5e7d*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x94) + 0x18))(this + 0x94, v6); /*0x4b5e92*/
              break;
            case 0x324F4349: /*0x4b5e2d*/
              _alloca_(v6[0]); /*0x4b5e47*/
              TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b5e53*/
              BSStringT_Set((BSStringT *)(this + 0xD4), (const char *)v6, 0); /*0x4b5e61*/
              break;
          }
        }
        goto LABEL_56; /*0x4b5e66*/
      }
      if ( ChunkType <= 0x54324F4D ) /*0x4b5fea*/
      {
        if ( ChunkType == 0x54324F4D ) /*0x4b5ff0*/
        {
          TESModel_LoadTextureHashSubrecord((void *)(this + 0x94), a2); /*0x4b60cc*/
        }
        else if ( ChunkType > 0x4D414E41 ) /*0x4b5ffb*/
        {
          if ( ChunkType == 0x4D414E45 ) /*0x4b607a*/
          {
            v11 = 0; /*0x4b60b4*/
            TESFile_GetChunkData4(a2, (char *)&v11); /*0x4b60b7*/
            *(_DWORD *)(this + 0x40) = v11; /*0x4b60bf*/
          }
          else if ( ChunkType == 0x4E4F4349 ) /*0x4b6081*/
          {
            _alloca_(v6[0]); /*0x4b608d*/
            TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b6099*/
            BSStringT_Set((BSStringT *)(this + 0xC8), (const char *)v6, 0); /*0x4b60a7*/
          }
        }
        else
        {
          switch ( ChunkType ) /*0x4b5ffd*/
          {
            case 0x4D414E41: /*0x4b5ffd*/
              v11 = 0; /*0x4b6060*/
              TESFile_GetChunkData2(a2, (char *)&v11); /*0x4b6063*/
              *(_WORD *)(this + 0x44) = v11; /*0x4b606c*/
              break;
            case 0x4C444F4D: /*0x4b5ffd*/
              _alloca_(v6[0]); /*0x4b6038*/
              TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b6044*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x64) + 0x18))(this + 0x64, v6); /*0x4b6053*/
              break;
            case 0x4C4C5546: /*0x4b5ffd*/
              if ( this ) /*0x4b6013*/
                TESFullname_Load((TESFullName *)(this + 0x24), a2); /*0x4b601a*/
              else
                TESFullname_Load(0, a2); /*0x4b6028*/
              break;
          }
        }
        goto LABEL_56; /*0x4b601f*/
      }
      if ( ChunkType > 0x54444D42 ) /*0x4b60d3*/
      {
        if ( ChunkType != 0x54444F4D ) /*0x4b6108*/
          goto LABEL_56; /*0x4b6108*/
        v5 = (void *)(this + 0x64); /*0x4b610a*/
      }
      else
      {
        if ( ChunkType == 0x54444D42 ) /*0x4b60d5*/
        {
          TESFile_GetChunkData(a2, (char *)(this + 0x60), 4u); /*0x4b60fc*/
          goto LABEL_56; /*0x4b6101*/
        }
        if ( ChunkType == 0x54334F4D ) /*0x4b60dc*/
        {
          TESModel_LoadTextureHashSubrecord((void *)(this + 0x7C), a2); /*0x4b60f2*/
          goto LABEL_56; /*0x4b60f2*/
        }
        if ( ChunkType != 0x54344F4D ) /*0x4b60e3*/
          goto LABEL_56; /*0x4b60e3*/
        v5 = (void *)(this + 0xAC); /*0x4b60e5*/
      }
      TESModel_LoadTextureHashSubrecord(v5, a2); /*0x4b610f*/
LABEL_56:
      if ( TESFile_GetNextChunk(a2) ) /*0x4b6119*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4b6124*/
        if ( ChunkType ) /*0x4b612d*/
          continue; /*0x4b612d*/
      }
      return 1; /*0x4b612d*/
    }
  }
  return 1; /*0x4b6138*/
}
