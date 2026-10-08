// Oblivion ARMO stream loader. It iterates every serialized chunk; duplicate SCRI/BMDT/DATA chunks are not first-selected.
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

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x14 ) /*0x4b4db1*/
    return 0; /*0x4b4db5*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x4b4dbd*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4b4dc7*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4b4dce*/
  if ( ChunkType ) /*0x4b4dd5*/
  {
    while ( 1 ) /*0x4b4de0*/
    {
      if ( ChunkType <= 0x49524353 ) /*0x4b4de5*/
      {
        if ( ChunkType == 0x49524353 ) /*0x4b4deb*/
        {
          v11 = 0;                              // Each SCRI occurrence zero-initializes a local u32 before reading, then overwrites ARMO script FormID at +0x34. Last serialized SCRI wins. /*0x4b4fb6*/
          TESFile_GetChunkData4(a2, (char *)&v11); /*0x4b4fb9*/
          *(_DWORD *)(this + 0x34) = v11;       // Overwrite ARMO script FormID with this SCRI; then relink scriptable component. /*0x4b4fc5*/
          TESScriptableForm_Link(this + 0x30, (TESForm *)this); /*0x4b4fc8*/
        }
        else if ( ChunkType > 0x42324F4D ) /*0x4b4df6*/
        {
          if ( ChunkType > 0x42444F4D ) /*0x4b4f1b*/
          {
            if ( ChunkType == 0x44494445 ) /*0x4b4f7e*/
            {
              _alloca_(v6[0]); /*0x4b4f8a*/
              TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4b4f99*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6); /*0x4b4fa9*/
            }
          }
          else
          {
            switch ( ChunkType ) /*0x4b4f1d*/
            {
              case 0x42444F4D: /*0x4b4f1d*/
                TESFile_GetChunkData4(a2, (char *)&v7); /*0x4b4f69*/
                *(float *)(this + 0x78) = v7; /*0x4b4f71*/
                break;
              case 0x42334F4D: /*0x4b4f1d*/
                TESFile_GetChunkData4(a2, (char *)&v9); /*0x4b4f50*/
                *(float *)(this + 0x90) = v9; /*0x4b4f58*/
                break;
              case 0x42344F4D: /*0x4b4f1d*/
                TESFile_GetChunkData4(a2, (char *)&v10); /*0x4b4f37*/
                *(float *)(this + 0xC0) = v10; /*0x4b4f3f*/
                break;
            }
          }
        }
        else if ( ChunkType == 0x42324F4D ) /*0x4b4dfc*/
        {
          TESFile_GetChunkData4(a2, (char *)&v8); /*0x4b4f03*/
          *(float *)(this + 0xA8) = v8; /*0x4b4f0b*/
        }
        else if ( ChunkType > 0x33444F4D ) /*0x4b4e07*/
        {
          if ( ChunkType == 0x34444F4D ) /*0x4b4eac*/
          {
            _alloca_(v6[0]); /*0x4b4ed5*/
            TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b4ee1*/
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0xB4) + 0x18))(this + 0xB4, v6); /*0x4b4ef6*/
          }
          else if ( ChunkType == 0x41544144 ) /*0x4b4eb3*/
          {
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0xE4), 2u);// Each ARMO DATA occurrence calls TESForm_LoadGenericComponents with fixed prefix size 2. Repeated DATA chunks overlay the current component state in stream order. /*0x4b4ec5*/
          }
        }
        else
        {
          switch ( ChunkType ) /*0x4b4e0d*/
          {
            case 0x33444F4D: /*0x4b4e0d*/
              _alloca_(v6[0]); /*0x4b4e7f*/
              TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b4e8b*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x84) + 0x18))(this + 0x84, v6); /*0x4b4ea0*/
              break;
            case 0x32444F4D: /*0x4b4e0d*/
              _alloca_(v6[0]); /*0x4b4e51*/
              TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b4e5d*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x9C) + 0x18))(this + 0x9C, v6); /*0x4b4e72*/
              break;
            case 0x324F4349: /*0x4b4e0d*/
              _alloca_(v6[0]); /*0x4b4e27*/
              TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b4e33*/
              BSStringT_Set((BSStringT *)(this + 0xDC), (const char *)v6, 0); /*0x4b4e41*/
              break;
          }
        }
        goto LABEL_56; /*0x4b4e46*/
      }
      if ( ChunkType <= 0x54324F4D ) /*0x4b4fd7*/
      {
        if ( ChunkType == 0x54324F4D ) /*0x4b4fdd*/
        {
          TESModel_LoadTextureHashSubrecord((void *)(this + 0x9C), a2); /*0x4b50b9*/
        }
        else if ( ChunkType > 0x4D414E41 ) /*0x4b4fe8*/
        {
          if ( ChunkType == 0x4D414E45 ) /*0x4b5067*/
          {
            v11 = 0; /*0x4b50a1*/
            TESFile_GetChunkData4(a2, (char *)&v11); /*0x4b50a4*/
            *(_DWORD *)(this + 0x40) = v11; /*0x4b50ac*/
          }
          else if ( ChunkType == 0x4E4F4349 ) /*0x4b506e*/
          {
            _alloca_(v6[0]); /*0x4b507a*/
            TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b5086*/
            BSStringT_Set((BSStringT *)(this + 0xD0), (const char *)v6, 0); /*0x4b5094*/
          }
        }
        else
        {
          switch ( ChunkType ) /*0x4b4fea*/
          {
            case 0x4D414E41: /*0x4b4fea*/
              v11 = 0; /*0x4b504d*/
              TESFile_GetChunkData2(a2, (char *)&v11); /*0x4b5050*/
              *(_WORD *)(this + 0x44) = v11; /*0x4b5059*/
              break;
            case 0x4C444F4D: /*0x4b4fea*/
              _alloca_(v6[0]); /*0x4b5025*/
              TESFile_GetChunkData(a2, (char *)v6, 0); /*0x4b5031*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 0x6C) + 0x18))(this + 0x6C, v6); /*0x4b5040*/
              break;
            case 0x4C4C5546: /*0x4b4fea*/
              if ( this ) /*0x4b5000*/
                TESFullname_Load((TESFullName *)(this + 0x24), a2); /*0x4b5007*/
              else
                TESFullname_Load(0, a2); /*0x4b5015*/
              break;
          }
        }
        goto LABEL_56; /*0x4b500c*/
      }
      if ( ChunkType > 0x54444D42 ) /*0x4b50c0*/
      {
        if ( ChunkType != 0x54444F4D ) /*0x4b50f8*/
          goto LABEL_56; /*0x4b50f8*/
        v5 = (void *)(this + 0x6C); /*0x4b50fa*/
      }
      else
      {
        if ( ChunkType == 0x54444D42 ) /*0x4b50c2*/
        {
          TESFile_GetChunkData(a2, (char *)(this + 0x68), 4u);// Each BMDT occurrence copies four bytes directly to ARMO+0x68. Last serialized BMDT wins. /*0x4b50ec*/
          goto LABEL_56; /*0x4b50f1*/
        }
        if ( ChunkType == 0x54334F4D ) /*0x4b50c9*/
        {
          TESModel_LoadTextureHashSubrecord((void *)(this + 0x84), a2); /*0x4b50e2*/
          goto LABEL_56; /*0x4b50e2*/
        }
        if ( ChunkType != 0x54344F4D ) /*0x4b50d0*/
          goto LABEL_56; /*0x4b50d0*/
        v5 = (void *)(this + 0xB4); /*0x4b50d2*/
      }
      TESModel_LoadTextureHashSubrecord(v5, a2); /*0x4b50ff*/
LABEL_56:
      if ( TESFile_GetNextChunk(a2) ) /*0x4b5109*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4b5114*/
        if ( ChunkType ) /*0x4b511d*/
          continue; /*0x4b511d*/
      }
      return 1; /*0x4b511d*/
    }
  }
  return 1; /*0x4b5128*/
}
