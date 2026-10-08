char __thiscall sub_4B45C0(int this, Data *a2)
{
  signed int ChunkType; // eax
  TESFullName *v5; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x13 ) /*0x4b45e1*/
    return 0; /*0x4b45e5*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x4b45ed*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4b45f6*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4b45fd*/
  if ( ChunkType ) /*0x4b4604*/
  {
    while ( 1 ) /*0x4b4610*/
    {
      if ( ChunkType > 0x4C444F4D ) /*0x4b4615*/
      {
        switch ( ChunkType ) /*0x4b46b3*/
        {
          case 0x4C4C5546: /*0x4b46b3*/
            if ( this ) /*0x4b46fb*/
              v5 = (TESFullName *)(this + 0x24); /*0x4b46fd*/
            else
              v5 = 0; /*0x4b4702*/
            TESFullname_Load(v5, a2); /*0x4b4706*/
            break; /*0x4b4706*/
          case 0x4E4F4349: /*0x4b46b3*/
            if ( this ) /*0x4b46e0*/
              TESTexture_Load(this + 0x48, a2); /*0x4b46e7*/
            else
              TESTexture_Load(0, a2); /*0x4b46f2*/
            break; /*0x4b46ec*/
          case 0x54444F4D: /*0x4b46b3*/
LABEL_18:
            if ( this ) /*0x4b46c5*/
              TESModel_Load((float *)(this + 0x30), a2); /*0x4b46cc*/
            else
              TESModel_Load(0, a2); /*0x4b46d7*/
            break;
        }
      }
      else
      {
        if ( ChunkType == 0x4C444F4D ) /*0x4b461b*/
          goto LABEL_18; /*0x4b461b*/
        if ( ChunkType > 0x44494445 ) /*0x4b4626*/
        {
          if ( ChunkType == 0x49524353 ) /*0x4b4685*/
          {
            v7 = 0; /*0x4b4691*/
            TESFile_GetChunkData4(a2, (char *)&v7); /*0x4b4698*/
            *(_DWORD *)(this + 0x58) = v7; /*0x4b46a4*/
            TESScriptableForm_Link(this + 0x54, (TESForm *)this); /*0x4b46a7*/
          }
          goto LABEL_28; /*0x4b46ac*/
        }
        switch ( ChunkType ) /*0x4b4628*/
        {
          case 0x44494445: /*0x4b4628*/
            _alloca_(v6[0]); /*0x4b465a*/
            TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4b4669*/
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6); /*0x4b4679*/
            break;
          case 0x41544144: /*0x4b4628*/
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x78), 1u); /*0x4b464a*/
            break;
          case 0x42444F4D: /*0x4b4628*/
            goto LABEL_18; /*0x4b4636*/
        }
      }
LABEL_28:
      if ( TESFile_GetNextChunk(a2) ) /*0x4b4710*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4b471b*/
        if ( ChunkType ) /*0x4b4722*/
          continue; /*0x4b4722*/
      }
      return 1; /*0x4b4722*/
    }
  }
  return 1; /*0x4b472d*/
}
