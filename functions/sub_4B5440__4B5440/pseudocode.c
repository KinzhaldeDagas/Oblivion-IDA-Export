char __thiscall TESObjectBOOK_LoadForm(int this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x15 ) /*0x4b5461*/
    return 0; /*0x4b5465*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x4b546d*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4b5477*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4b547e*/
  if ( ChunkType ) /*0x4b5485*/
  {
    while ( 1 ) /*0x4b5490*/
    {
      if ( ChunkType > 0x4C444F4D ) /*0x4b5495*/
      {
        if ( ChunkType <= 0x4D414E45 ) /*0x4b5562*/
        {
          switch ( ChunkType ) /*0x4b5564*/
          {
            case 0x4D414E45: /*0x4b5564*/
              v7 = 0; /*0x4b55b1*/
              TESFile_GetChunkData4(a2, (char *)&v7); /*0x4b55b4*/
              *(_DWORD *)(this + 0x64) = v7; /*0x4b55bc*/
              break;
            case 0x4C4C5546: /*0x4b5564*/
              if ( this ) /*0x4b5592*/
                TESFullname_Load((TESFullName *)(this + 0x24), a2); /*0x4b5599*/
              else
                TESFullname_Load(0, a2); /*0x4b55a4*/
              break;
            case 0x4D414E41: /*0x4b5564*/
              v7 = 0; /*0x4b557e*/
              TESFile_GetChunkData2(a2, (char *)&v7); /*0x4b5581*/
              *(_WORD *)(this + 0x68) = v7; /*0x4b558a*/
              break;
          }
          goto LABEL_37; /*0x4b558e*/
        }
        if ( ChunkType == 0x4E4F4349 ) /*0x4b55c6*/
        {
          if ( this ) /*0x4b55ec*/
            v5 = this + 0x48; /*0x4b55ee*/
          else
            v5 = 0; /*0x4b55f3*/
          TESTexture_Load(v5, a2); /*0x4b55f7*/
          goto LABEL_37; /*0x4b55f7*/
        }
        if ( ChunkType == 0x54444F4D ) /*0x4b55cd*/
        {
LABEL_30:
          if ( this ) /*0x4b55d1*/
            TESModel_Load((float *)(this + 0x30), a2); /*0x4b55d8*/
          else
            TESModel_Load(0, a2); /*0x4b55e3*/
        }
      }
      else
      {
        if ( ChunkType == 0x4C444F4D ) /*0x4b549b*/
          goto LABEL_30; /*0x4b549b*/
        if ( ChunkType > 0x43534544 ) /*0x4b54a6*/
        {
          if ( ChunkType == 0x44494445 ) /*0x4b5500*/
          {
            _alloca_(v6[0]); /*0x4b5535*/
            TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4b5544*/
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6); /*0x4b5554*/
          }
          else if ( ChunkType == 0x49524353 ) /*0x4b5507*/
          {
            v7 = 0;                             // Every SCRI starts from a fresh zeroed u32 scratch; short/empty chunks deterministically zero-fill missing bytes and overlong chunks use the bounded cap-4 policy. /*0x4b5513*/
            TESFile_GetChunkData4(a2, (char *)&v7); /*0x4b5516*/
            *(_DWORD *)(this + 0x58) = v7;      // Each reached SCRI overwrites the stored script candidate, so the final physical occurrence is authoritative before linking. /*0x4b5522*/
            TESScriptableForm_Link(this + 0x54, (TESForm *)this);// First SCRI links and sets TESScriptableForm's guard; duplicate later SCRI values overwrite the candidate at +0x58 but TESScriptableForm_Link immediately returns, leaving the final raw candidate unlinked. /*0x4b5525*/
          }
          goto LABEL_37; /*0x4b552a*/
        }
        switch ( ChunkType ) /*0x4b54a8*/
        {
          case 0x43534544: /*0x4b54a8*/
            if ( this ) /*0x4b54d9*/
              TESDescription_Load(this + 0x80, (int)a2); /*0x4b54e3*/
            else
              TESDescription_Load(0, (int)a2); /*0x4b54f1*/
            break; /*0x4b54e8*/
          case 0x41544144: /*0x4b54a8*/
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x88), 2u); /*0x4b54cd*/
            break;
          case 0x42444F4D: /*0x4b54a8*/
            goto LABEL_30; /*0x4b54b6*/
        }
      }
LABEL_37:
      if ( TESFile_GetNextChunk(a2) ) /*0x4b5601*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4b560c*/
        if ( ChunkType ) /*0x4b5613*/
          continue; /*0x4b5613*/
      }
      return 1; /*0x4b5613*/
    }
  }
  return 1; /*0x4b561e*/
}
