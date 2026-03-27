char __thiscall sub_4B63A0(int this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // eax
  float *v6; // eax
  int v7[3]; // [esp+0h] [ebp-1Ch] BYREF
  char Dst[4]; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x17 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v7[0], v7[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4C4C5546 )
      {
        if ( ChunkType <= 0x4F544E43 )
        {
          if ( ChunkType == 0x4F544E43 )
          {
            *(_DWORD *)Dst = 0;
            v9 = 0;
            TESFile_GetChunkData(a2, Dst, 8u);
            TESContainer_SetLinkFlag((_BYTE *)(this + 0x24), 0);
            TESContainer_AddUnlinkedForm((_BYTE *)(this + 0x24), (int)Dst);
          }
          else
          {
            v5 = ChunkType - 0x4D414E51;
            if ( v5 )
            {
              if ( v5 == 2 )
              {
                v10 = 0;
                TESFile_GetChunkData4(a2, (char *)&v10);
                *(_DWORD *)(this + 0x70) = v10;
              }
            }
            else
            {
              v10 = 0;
              TESFile_GetChunkData4(a2, (char *)&v10);
              *(_DWORD *)(this + 0x74) = v10;
            }
          }
          goto LABEL_32;
        }
        if ( ChunkType == 0x54444F4D )
        {
LABEL_28:
          if ( this )
            v6 = (float *)(this + 0x40);
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
            TESFullname_Load((TESFullName *)(this + 0x34), a2);
          else
            TESFullname_Load(0, a2);
          goto LABEL_32;
        }
        if ( ChunkType > 0x44494445 )
        {
          if ( ChunkType == 0x49524353 )
          {
            v10 = 0;
            TESFile_GetChunkData4(a2, (char *)&v10);
            *(_DWORD *)(this + 0x5C) = v10;
            TESScriptableForm_Link(this + 0x58, (TESForm *)this);
          }
          else if ( ChunkType == 0x4C444F4D )
          {
            goto LABEL_28;
          }
        }
        else
        {
          switch ( ChunkType )
          {
            case 0x44494445:
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v7, 0x200u);
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v7);
              break;
            case 0x41544144:
              TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x78), 1u);
              break;
            case 0x42444F4D:
              goto LABEL_28;
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
