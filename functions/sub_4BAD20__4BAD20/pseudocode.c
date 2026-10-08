char __thiscall sub_4BAD20(float *this, Data *a1)
{
  Data *v2; // esi
  float *v3; // edi
  signed int ChunkType; // eax
  unsigned int length; // ebx
  unsigned int v7; // esi
  char *v8; // edi
  NiTArray_NiTexturingPropertyMap *v9; // ebx
  unsigned int end; // esi
  int v11[3]; // [esp+0h] [ebp-1Ch] BYREF
  char *v12; // [esp+Ch] [ebp-10h]
  unsigned int v13; // [esp+10h] [ebp-Ch]
  float *v14; // [esp+14h] [ebp-8h]

  v2 = a1; /*0x4bad32*/
  v3 = this; /*0x4bad36*/
  v14 = this; /*0x4bad3a*/
  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x1E ) /*0x4bad44*/
    return 0; /*0x4bad48*/
  TESFile_InitializeFormFromRecord(a1, (TESForm *)v3, v11[0], v11[1]); /*0x4bad50*/
  ChunkType = TESFile_GetChunkType(a1); /*0x4bad57*/
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4D414E43 )
      {
        switch ( ChunkType )
        {
          case 0x4D414E53:
            length = v2->currentChunk.length; /*0x4bae70*/
            if ( length )
            {
              if ( (length & 3) == 0 )
              {
                v7 = length >> 2; /*0x4bae89*/
                v8 = (char *)FormHeapAlloc((unsigned __int64)(length >> 2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (length >> 2));
                v12 = v8; /*0x4baeaa*/
                _memset((int)v8, 0, length); /*0x4baead*/
                TESFile_GetChunkData(a1, v8, length); /*0x4baeba*/
                v9 = (NiTArray_NiTexturingPropertyMap *)(v14 + 0x12); /*0x4baec2*/
                sub_65DD90((int)(v14 + 0x12)); /*0x4baec7*/
                if ( v7 ) /*0x4baece*/
                {
                  v13 = v7; /*0x4baed0*/
                  do /*0x4baf02*/
                  {
                    if ( *(_DWORD *)v8 ) /*0x4baed3*/
                    {
                      end = v9->end; /*0x4baed8*/
                      if ( end >= v9->capacity ) /*0x4baee2*/
                        NiTArray_SetSize((unsigned __int16 *)v9, end + v9->growSize); /*0x4baeed*/
                      NiTArray_SetAt(v9, end, v8); /*0x4baef6*/
                    }
                    v8 += 4; /*0x4baefb*/
                    --v13; /*0x4baefe*/
                  }
                  while ( v13 ); /*0x4baf02*/
                  v8 = v12; /*0x4baf04*/
                }
                FormHeapFree((unsigned int)v8); /*0x4baf08*/
                v3 = v14; /*0x4baf0d*/
                v2 = a1; /*0x4baf10*/
              }
            }
            break; /*0x4baf10*/
          case 0x4E4F4349:
            if ( v3 ) /*0x4bae4b*/
              TESTexture_Load((int)(v3 + 0xF), v2); /*0x4bae52*/
            else
              TESTexture_Load(0, v2); /*0x4bae63*/
            break; /*0x4bae5a*/
          case 0x54444F4D:
            goto LABEL_19; /*0x4bae1c*/
        }
      }
      else
      {
        if ( ChunkType == 0x4D414E43 ) /*0x4bad6f*/
        {
          if ( v2->currentChunk.length == 0x20 ) /*0x4badf1*/
            TESFile_GetChunkData(v2, (char *)v3 + 0x58, 0x20u); /*0x4badff*/
          goto LABEL_36; /*0x4bae04*/
        }
        if ( ChunkType > 0x4C444F4D ) /*0x4bad76*/
        {
          if ( ChunkType == 0x4D414E42 && v2->currentChunk.length == 8 ) /*0x4badd2*/
            TESFile_GetChunkData(v2, (char *)v3 + 0x78, 8u); /*0x4bade0*/
          goto LABEL_36; /*0x4bade5*/
        }
        if ( ChunkType == 0x4C444F4D || ChunkType == 0x42444F4D ) /*0x4bad83*/
        {
LABEL_19:
          if ( v3 ) /*0x4bae24*/
            TESModel_Load(v3 + 9, v2); /*0x4bae2b*/
          else
            TESModel_Load(0, v2); /*0x4bae3c*/
          goto LABEL_36; /*0x4bae33*/
        }
        if ( ChunkType == 0x44494445 ) /*0x4bad8e*/
        {
          _alloca_(v11[0]); /*0x4bad9a*/
          TESFile_GetChunkData(v2, (char *)v11, 0x200u); /*0x4bada9*/
          (*(void (__thiscall **)(float *, int *))(*(_DWORD *)v3 + 0xD8))(v3, v11); /*0x4badb9*/
        }
      }
LABEL_36:
      if ( TESFile_GetNextChunk(v2) ) /*0x4baf18*/
      {
        ChunkType = TESFile_GetChunkType(v2); /*0x4baf23*/
        if ( ChunkType ) /*0x4baf2a*/
          continue; /*0x4baf2a*/
      }
      return 1; /*0x4baf2a*/
    }
  }
  return 1; /*0x4baf35*/
}
