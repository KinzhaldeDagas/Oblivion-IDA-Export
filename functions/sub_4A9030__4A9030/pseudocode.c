char __thiscall sub_4A9030(int this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // eax
  float *v6; // eax
  int v7[3]; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x22 ) /*0x4a9051*/
    return 0; /*0x4a9055*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v7[0], v7[1]); /*0x4a905d*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4a9067*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4a906e*/
  if ( ChunkType ) /*0x4a9075*/
  {
    while ( 1 ) /*0x4a9080*/
    {
      if ( ChunkType > 0x4C4C5546 ) /*0x4a9085*/
      {
        if ( ChunkType <= 0x4E4F4349 ) /*0x4a9121*/
        {
          if ( ChunkType == 0x4E4F4349 ) /*0x4a9123*/
          {
            if ( this ) /*0x4a9161*/
              TESTexture_Load(this + 0x48, a2); /*0x4a9168*/
            else
              TESTexture_Load(0, a2); /*0x4a9173*/
          }
          else
          {
            v5 = ChunkType - 0x4D414E41; /*0x4a9125*/
            if ( v5 ) /*0x4a912a*/
            {
              if ( v5 == 4 ) /*0x4a912f*/
              {
                v8 = 0; /*0x4a9137*/
                TESFile_GetChunkData4(a2, (char *)&v8); /*0x4a913a*/
                *(_DWORD *)(this + 0x58) = v8; /*0x4a9142*/
              }
            }
            else
            {
              v8 = 0; /*0x4a914d*/
              TESFile_GetChunkData2(a2, (char *)&v8); /*0x4a9150*/
              *(_WORD *)(this + 0x5C) = v8; /*0x4a9159*/
            }
          }
          goto LABEL_32; /*0x4a9145*/
        }
        if ( ChunkType == 0x54444F4D ) /*0x4a917f*/
        {
LABEL_28:
          if ( this ) /*0x4a9183*/
            v6 = (float *)(this + 0x30); /*0x4a9185*/
          else
            v6 = 0; /*0x4a918a*/
          TESModel_Load(v6, a2); /*0x4a918e*/
        }
      }
      else
      {
        if ( ChunkType == 0x4C4C5546 ) /*0x4a908b*/
        {
          if ( this ) /*0x4a9100*/
            TESFullname_Load((TESFullName *)(this + 0x24), a2); /*0x4a9107*/
          else
            TESFullname_Load(0, a2); /*0x4a9115*/
          goto LABEL_32; /*0x4a910c*/
        }
        if ( ChunkType > 0x44494445 ) /*0x4a9092*/
        {
          if ( ChunkType == 0x4C444F4D ) /*0x4a90f3*/
            goto LABEL_28; /*0x4a90f3*/
        }
        else
        {
          switch ( ChunkType ) /*0x4a9094*/
          {
            case 0x44494445: /*0x4a9094*/
              _alloca_(v7[0]); /*0x4a90c6*/
              TESFile_GetChunkData(a2, (char *)v7, 0x200u); /*0x4a90d5*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v7); /*0x4a90e5*/
              break;
            case 0x41544144: /*0x4a9094*/
              TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x7C), 8u); /*0x4a90b6*/
              break;
            case 0x42444F4D: /*0x4a9094*/
              goto LABEL_28; /*0x4a90a2*/
          }
        }
      }
LABEL_32:
      if ( TESFile_GetNextChunk(a2) ) /*0x4a9198*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4a91a3*/
        if ( ChunkType ) /*0x4a91aa*/
          continue; /*0x4a91aa*/
      }
      return 1; /*0x4a91aa*/
    }
  }
  return 1; /*0x4a91b5*/
}
