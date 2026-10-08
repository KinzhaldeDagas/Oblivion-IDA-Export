char __thiscall sub_4EDF20(TESForm *this, Data *a2)
{
  signed int ChunkType; // eax
  UInt32 length; // eax
  char *v6; // eax
  char *v7; // ebx
  int v8[3]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x2D ) /*0x4edf3f*/
    return 0; /*0x4edf43*/
  TESFile_InitializeFormFromRecord(a2, this, v8[0], v8[1]); /*0x4edf4b*/
  TESForm_SetIsLinked(this, 0); /*0x4edf54*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4edf5b*/
  if ( ChunkType ) /*0x4edf62*/
  {
    while ( 1 ) /*0x4edf70*/
    {
      if ( ChunkType > 0x4D414E43 ) /*0x4edf75*/
      {
        switch ( ChunkType ) /*0x4ee078*/
        {
          case 0x4D414E44: /*0x4ee078*/
            TESTexture_Load((int)(this + 1), a2); /*0x4ee084*/
            break; /*0x4ee08c*/
          case 0x4D414E46: /*0x4ee078*/
            TESFile_GetChunkData(a2, (char *)this + 0x58, 0x10u); /*0x4ee096*/
            break; /*0x4ee09b*/
          case 0x4D414E48: /*0x4ee078*/
            TESFile_GetChunkData(a2, (char *)this + 0x110, 0x38u); /*0x4ee0a8*/
            break; /*0x4ee0ad*/
          case 0x4D414E53: /*0x4ee078*/
            v6 = (char *)FormHeapAlloc(8u); /*0x4ee0b1*/
            if ( v6 ) /*0x4ee0bb*/
            {
              *(_DWORD *)v6 = 0; /*0x4ee0bf*/
              *((_DWORD *)v6 + 1) = 0; /*0x4ee0c1*/
              v7 = v6; /*0x4ee0c4*/
            }
            else
            {
              v7 = 0; /*0x4ee0c8*/
            }
            TESFile_GetChunkData(a2, v7, 8u); /*0x4ee0cf*/
            TESForm_ResolveFormID((UInt32 *)v7, a2); /*0x4ee0d6*/
            BSSimpleList_PushBack((_DWORD *)this + 0x42, (int)v7); /*0x4ee0e5*/
            break; /*0x4ee0e5*/
          default:
            goto LABEL_29;
        }
        goto LABEL_29;
      }
      if ( ChunkType == 0x4D414E43 ) /*0x4edf7b*/
      {
        TESTexture_Load((int)this + 0x24, a2); /*0x4ee05a*/
      }
      else
      {
        if ( ChunkType <= 0x42444F4D ) /*0x4edf86*/
        {
          if ( ChunkType != 0x42444F4D ) /*0x4edf88*/
          {
            if ( ChunkType == 0x304D414E ) /*0x4edf93*/
            {
              if ( a2->currentChunk.length == 0xA0 ) /*0x4edfea*/
                TESFile_GetChunkData(a2, (char *)this + 0x68, 0xA0u); /*0x4edffb*/
            }
            else if ( ChunkType == 0x41544144 ) /*0x4edf9a*/
            {
              length = a2->currentChunk.length; /*0x4edfa0*/
              if ( length == 0xF ) /*0x4edfa9*/
              {
                TESFile_GetChunkData(a2, (char *)this + 0x48, 0xFu); /*0x4edfb2*/
              }
              else if ( length == 0xC ) /*0x4edfbf*/
              {
                TESFile_GetChunkData(a2, (char *)this + 0x48, 0xCu); /*0x4edfcc*/
                *((_WORD *)this + 0x2A) = 0xFFFF; /*0x4edfd4*/
                *((_BYTE *)this + 0x56) = 0xFF; /*0x4edfd8*/
              }
            }
            goto LABEL_29; /*0x4edfb7*/
          }
LABEL_18:
          TESModel_Load((float *)this + 0xC, a2); /*0x4ee017*/
          goto LABEL_29; /*0x4ee024*/
        }
        if ( ChunkType != 0x44494445 ) /*0x4ee00a*/
        {
          if ( ChunkType != 0x4C444F4D ) /*0x4ee011*/
            goto LABEL_29; /*0x4ee011*/
          goto LABEL_18; /*0x4ee011*/
        }
        _alloca_(v8[0]); /*0x4ee02f*/
        TESFile_GetChunkData(a2, (char *)v8, 0x200u); /*0x4ee03e*/
        this->vtbl->SetEditorID(this, (const char *)v8); /*0x4ee04e*/
      }
LABEL_29:
      if ( TESFile_GetNextChunk(a2) ) /*0x4ee0ec*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4ee0f7*/
        if ( ChunkType ) /*0x4ee0fe*/
          continue; /*0x4ee0fe*/
      }
      return 1; /*0x4ee0fe*/
    }
  }
  return 1; /*0x4ee109*/
}
