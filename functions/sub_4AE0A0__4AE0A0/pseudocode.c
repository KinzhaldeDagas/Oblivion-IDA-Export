char __fastcall sub_4AE0A0(TESForm *this, int a2, Data *a1)
{
  signed int ChunkType; // eax
  float *v5; // eax
  int v7[3]; // [esp+0h] [ebp-18h] BYREF
  char Dst[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v7[0], v7[1]); /*0x4ae0bb*/
  TESForm_SetIsLinked(this, 0); /*0x4ae0c5*/
  ChunkType = TESFile_GetChunkType(a1); /*0x4ae0cc*/
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x49524353 )
      {
        switch ( ChunkType ) /*0x4ae1a4*/
        {
          case 0x4C444F4D: /*0x4ae1a4*/
            goto LABEL_16; /*0x4ae1a4*/
          case 0x4C4C5546: /*0x4ae1a4*/
            if ( this == (TESForm *)0xC ) /*0x4ae1c5*/
              TESFullname_Load(0, a1); /*0x4ae1d7*/
            else
              TESFullname_Load((TESFullName *)this + 3, a1); /*0x4ae1cc*/
            break; /*0x4ae1d1*/
          case 0x54444F4D: /*0x4ae1a4*/
LABEL_16:
            if ( this == (TESForm *)0xC ) /*0x4ae1b9*/
              v5 = 0; /*0x4ae1de*/
            else
              v5 = (float *)(this + 2); /*0x4ae1bb*/
            TESModel_Load(v5, a1); /*0x4ae1e2*/
            break;
        }
      }
      else if ( ChunkType == 0x49524353 )
      {
        v9 = 0; /*0x4ae17d*/
        TESFile_GetChunkData4(a1, (char *)&v9); /*0x4ae180*/
        *((_DWORD *)this + 0x13) = v9; /*0x4ae191*/
        TESScriptableForm_Link((int)(this + 3), this != (TESForm *)0xC ? this : 0);
      }
      else
      {
        if ( ChunkType > 0x44494445 ) /*0x4ae0f6*/
        {
          if ( ChunkType == 0x47494650 ) /*0x4ae15b*/
          {
            v9 = 0; /*0x4ae167*/
            TESFile_GetChunkData4(a1, (char *)&v9); /*0x4ae16a*/
            *((_DWORD *)this + 0xFFFFFFFE) = v9; /*0x4ae172*/
          }
          goto LABEL_23; /*0x4ae175*/
        }
        switch ( ChunkType ) /*0x4ae0f8*/
        {
          case 0x44494445: /*0x4ae0f8*/
            _alloca_(v7[0]); /*0x4ae12e*/
            TESFile_GetChunkData(a1, (char *)v7, 0x200u); /*0x4ae13d*/
            this->vtbl->SetEditorID(this, (const char *)v7); /*0x4ae14d*/
            break;
          case 0x42444F4D: /*0x4ae0f8*/
            goto LABEL_16; /*0x4ae0ff*/
          case 0x43504650: /*0x4ae0f8*/
            TESFile_GetChunkData(a1, Dst, 4u); /*0x4ae118*/
            *((_DWORD *)this + 0xFFFFFFFF) = *(_DWORD *)Dst; /*0x4ae120*/
            break;
        }
      }
LABEL_23:
      if ( TESFile_GetNextChunk(a1) ) /*0x4ae1ec*/
      {
        ChunkType = TESFile_GetChunkType(a1); /*0x4ae1f7*/
        if ( ChunkType ) /*0x4ae1fe*/
          continue; /*0x4ae1fe*/
      }
      return 1; /*0x4ae1fe*/
    }
  }
  return 1; /*0x4ae209*/
}
