char __thiscall TESObjectWEAP_LoadForm(_BYTE *this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // eax
  float *v6; // eax
  const char *v7; // eax
  int v8; // [esp-4h] [ebp-18h]
  int v9[3]; // [esp+0h] [ebp-14h] BYREF
  int v10; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x21 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v9[0], v9[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4C4C5546 )
      {
        if ( ChunkType <= 0x4E4F4349 )
        {
          if ( ChunkType == 0x4E4F4349 )
          {
            if ( this )
              TESTexture_Load((int)(this + 0x48), a2);
            else
              TESTexture_Load(0, a2);
          }
          else
          {
            v5 = ChunkType - 0x4D414E41;
            if ( v5 )
            {
              if ( v5 == 4 )
              {
                v10 = 0;
                TESFile_GetChunkData4(a2, (char *)&v10);
                *((_DWORD *)this + 0x19) = v10;
              }
            }
            else
            {
              v10 = 0;
              TESFile_GetChunkData2(a2, (char *)&v10);
              *((_WORD *)this + 0x34) = v10;
            }
          }
          goto LABEL_34;
        }
        if ( ChunkType == 0x54444F4D )
        {
LABEL_30:
          if ( this )
            v6 = (float *)(this + 0x30);
          else
            v6 = 0;
          TESModel_Load(v6, a2);
        }
      }
      else
      {
        if ( ChunkType == 0x4C4C5546 )
        {
          if ( this )
            TESFullname_Load((TESFullName *)this + 3, a2);
          else
            TESFullname_Load(0, a2);
          goto LABEL_34;
        }
        if ( ChunkType > 0x44494445 )
        {
          if ( ChunkType == 0x49524353 )
          {
            v10 = 0;
            TESFile_GetChunkData4(a2, (char *)&v10);
            *((_DWORD *)this + 0x16) = v10;
            TESScriptableForm_Link((int)(this + 0x54), (TESForm *)this);
          }
          else if ( ChunkType == 0x4C444F4D )
          {
            goto LABEL_30;
          }
        }
        else
        {
          switch ( ChunkType )
          {
            case 0x44494445:
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v9, 0x200u);
              (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)this + 0xD8))(this, v9);
              break;
            case 0x41544144:
              TESForm_LoadGenericComponents((TESForm *)this, a2, this + 0x90, 0x10u);
              break;
            case 0x42444F4D:
              goto LABEL_30;
          }
        }
      }
LABEL_34:
      if ( TESFile_GetNextChunk(a2) )
      {
        ChunkType = TESFile_GetChunkType(a2);
        if ( ChunkType )
          continue;
      }
      break;
    }
  }
  if ( (char)*(this + 0x90) >= 6 )
  {
    v7 = (const char *)(*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 0xD4))(this, *((_DWORD *)this + 3));
    PrintError("Clearing invalid type on weapon '%s' (%08X).", v7, v8);
    *(this + 0x90) = 0;
  }
  return 1;
}
