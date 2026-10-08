char __thiscall sub_4B63A0(int this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // eax
  float *v6; // eax
  int v7[3]; // [esp+0h] [ebp-1Ch] BYREF
  char Dst[4]; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x17 ) /*0x4b63c1*/
    return 0; /*0x4b63c5*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v7[0], v7[1]); /*0x4b63cd*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4b63d7*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4b63de*/
  if ( ChunkType ) /*0x4b63e5*/
  {
    while ( 1 ) /*0x4b63f0*/
    {
      if ( ChunkType > 0x4C4C5546 ) /*0x4b63f5*/
      {
        if ( ChunkType <= 0x4F544E43 ) /*0x4b64c1*/
        {
          if ( ChunkType == 0x4F544E43 ) /*0x4b64c3*/
          {
            *(_DWORD *)Dst = 0; /*0x4b6507*/
            v9 = 0; /*0x4b650a*/
            TESFile_GetChunkData(a2, Dst, 8u); /*0x4b650d*/
            TESContainer_SetLinkFlag((_BYTE *)(this + 0x24), 0); /*0x4b6519*/
            TESContainer_AddUnlinkedForm((_BYTE *)(this + 0x24), Dst); /*0x4b6524*/
          }
          else
          {
            v5 = ChunkType - 0x4D414E51; /*0x4b64c5*/
            if ( v5 ) /*0x4b64ca*/
            {
              if ( v5 == 2 ) /*0x4b64cf*/
              {
                v10 = 0; /*0x4b64d7*/
                TESFile_GetChunkData4(a2, (char *)&v10); /*0x4b64da*/
                *(_DWORD *)(this + 0x70) = v10; /*0x4b64e2*/
              }
            }
            else
            {
              v10 = 0; /*0x4b64ed*/
              TESFile_GetChunkData4(a2, (char *)&v10); /*0x4b64f0*/
              *(_DWORD *)(this + 0x74) = v10; /*0x4b64f8*/
            }
          }
          goto LABEL_32; /*0x4b64e5*/
        }
        if ( ChunkType == 0x54444F4D ) /*0x4b6532*/
        {
LABEL_28:
          if ( this ) /*0x4b6536*/
            v6 = (float *)(this + 0x40); /*0x4b6538*/
          else
            v6 = 0; /*0x4b653d*/
          TESModel_Load(v6, a2); /*0x4b6541*/
        }
      }
      else
      {
        if ( ChunkType == 0x4C4C5546 ) /*0x4b63fb*/
        {
          if ( this ) /*0x4b649d*/
            TESFullname_Load((TESFullName *)(this + 0x34), a2); /*0x4b64a4*/
          else
            TESFullname_Load(0, a2); /*0x4b64b2*/
          goto LABEL_32; /*0x4b64a9*/
        }
        if ( ChunkType > 0x44494445 ) /*0x4b6406*/
        {
          if ( ChunkType == 0x49524353 ) /*0x4b6467*/
          {
            v10 = 0; /*0x4b647f*/
            TESFile_GetChunkData4(a2, (char *)&v10); /*0x4b6482*/
            *(_DWORD *)(this + 0x5C) = v10; /*0x4b648e*/
            TESScriptableForm_Link(this + 0x58, (TESForm *)this); /*0x4b6491*/
          }
          else if ( ChunkType == 0x4C444F4D ) /*0x4b646e*/
          {
            goto LABEL_28; /*0x4b646e*/
          }
        }
        else
        {
          switch ( ChunkType ) /*0x4b6408*/
          {
            case 0x44494445: /*0x4b6408*/
              _alloca_(v7[0]); /*0x4b643a*/
              TESFile_GetChunkData(a2, (char *)v7, 0x200u); /*0x4b6449*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v7); /*0x4b6459*/
              break;
            case 0x41544144: /*0x4b6408*/
              TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x78), 1u); /*0x4b642a*/
              break;
            case 0x42444F4D: /*0x4b6408*/
              goto LABEL_28; /*0x4b6416*/
          }
        }
      }
LABEL_32:
      if ( TESFile_GetNextChunk(a2) ) /*0x4b654b*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4b6556*/
        if ( ChunkType ) /*0x4b655d*/
          continue; /*0x4b655d*/
      }
      return 1; /*0x4b655d*/
    }
  }
  return 1; /*0x4b6568*/
}
