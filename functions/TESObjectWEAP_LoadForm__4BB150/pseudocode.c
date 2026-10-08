char __thiscall TESObjectWEAP_LoadForm(_BYTE *this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // eax
  float *v6; // eax
  const char *v7; // eax
  int v8; // [esp-4h] [ebp-18h]
  int v9[3]; // [esp+0h] [ebp-14h] BYREF
  int v10; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x21 ) /*0x4bb171*/
    return 0; /*0x4bb175*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v9[0], v9[1]); /*0x4bb17d*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4bb187*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4bb18e*/
  if ( ChunkType ) /*0x4bb195*/
  {
    while ( 1 ) /*0x4bb1a0*/
    {
      if ( ChunkType > 0x4C4C5546 ) /*0x4bb1a5*/
      {
        if ( ChunkType <= 0x4E4F4349 ) /*0x4bb271*/
        {
          if ( ChunkType == 0x4E4F4349 ) /*0x4bb273*/
          {
            if ( this ) /*0x4bb2b1*/
              TESTexture_Load((int)(this + 0x48), a2); /*0x4bb2b8*/
            else
              TESTexture_Load(0, a2); /*0x4bb2c3*/
          }
          else
          {
            v5 = ChunkType - 0x4D414E41; /*0x4bb275*/
            if ( v5 ) /*0x4bb27a*/
            {
              if ( v5 == 4 ) /*0x4bb27f*/
              {
                v10 = 0; /*0x4bb287*/
                TESFile_GetChunkData4(a2, (char *)&v10); /*0x4bb28a*/
                *((_DWORD *)this + 0x19) = v10; /*0x4bb292*/
              }
            }
            else
            {
              v10 = 0; /*0x4bb29d*/
              TESFile_GetChunkData2(a2, (char *)&v10); /*0x4bb2a0*/
              *((_WORD *)this + 0x34) = v10; /*0x4bb2a9*/
            }
          }
          goto LABEL_34; /*0x4bb295*/
        }
        if ( ChunkType == 0x54444F4D ) /*0x4bb2cf*/
        {
LABEL_30:
          if ( this ) /*0x4bb2d3*/
            v6 = (float *)(this + 0x30); /*0x4bb2d5*/
          else
            v6 = 0; /*0x4bb2da*/
          TESModel_Load(v6, a2); /*0x4bb2de*/
        }
      }
      else
      {
        if ( ChunkType == 0x4C4C5546 ) /*0x4bb1ab*/
        {
          if ( this ) /*0x4bb250*/
            TESFullname_Load((TESFullName *)this + 3, a2); /*0x4bb257*/
          else
            TESFullname_Load(0, a2); /*0x4bb265*/
          goto LABEL_34; /*0x4bb25c*/
        }
        if ( ChunkType > 0x44494445 ) /*0x4bb1b6*/
        {
          if ( ChunkType == 0x49524353 ) /*0x4bb21a*/
          {
            v10 = 0; /*0x4bb232*/
            TESFile_GetChunkData4(a2, (char *)&v10); /*0x4bb235*/
            *((_DWORD *)this + 0x16) = v10; /*0x4bb241*/
            TESScriptableForm_Link((int)(this + 0x54), (TESForm *)this); /*0x4bb244*/
          }
          else if ( ChunkType == 0x4C444F4D ) /*0x4bb221*/
          {
            goto LABEL_30; /*0x4bb221*/
          }
        }
        else
        {
          switch ( ChunkType ) /*0x4bb1b8*/
          {
            case 0x44494445: /*0x4bb1b8*/
              _alloca_(v9[0]); /*0x4bb1ed*/
              TESFile_GetChunkData(a2, (char *)v9, 0x200u); /*0x4bb1fc*/
              (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)this + 0xD8))(this, v9); /*0x4bb20c*/
              break;
            case 0x41544144: /*0x4bb1b8*/
              TESForm_LoadGenericComponents((TESForm *)this, a2, this + 0x90, 0x10u); /*0x4bb1dd*/
              break;
            case 0x42444F4D: /*0x4bb1b8*/
              goto LABEL_30; /*0x4bb1c6*/
          }
        }
      }
LABEL_34:
      if ( TESFile_GetNextChunk(a2) ) /*0x4bb2e8*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4bb2f3*/
        if ( ChunkType ) /*0x4bb2fa*/
          continue; /*0x4bb2fa*/
      }
      break; /*0x4bb2fa*/
    }
  }
  if ( (char)*(this + 0x90) >= 6 ) /*0x4bb307*/
  {
    v7 = (const char *)(*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 0xD4))(this, *((_DWORD *)this + 3)); /*0x4bb317*/
    PrintError("Clearing invalid type on weapon '%s' (%08X).", v7, v8); /*0x4bb31f*/
    *(this + 0x90) = 0; /*0x4bb327*/
  }
  return 1; /*0x4bb333*/
}
