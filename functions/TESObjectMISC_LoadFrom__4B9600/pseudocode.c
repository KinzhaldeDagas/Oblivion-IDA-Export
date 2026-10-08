char __thiscall TESObjectMISC_LoadFrom(int this, Data *a2)
{
  signed int ChunkType; // eax
  TESFullName *v4; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x4b961b*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4b9624*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4b962b*/
  if ( ChunkType ) /*0x4b9632*/
  {
    while ( 1 ) /*0x4b9640*/
    {
      if ( ChunkType > 0x4C444F4D ) /*0x4b9645*/
      {
        switch ( ChunkType ) /*0x4b96e1*/
        {
          case 0x4C4C5546: /*0x4b96e1*/
            if ( this ) /*0x4b9729*/
              v4 = (TESFullName *)(this + 0x24); /*0x4b972b*/
            else
              v4 = 0; /*0x4b9730*/
            TESFullname_Load(v4, a2); /*0x4b9734*/
            break; /*0x4b9734*/
          case 0x4E4F4349: /*0x4b96e1*/
            if ( this ) /*0x4b970e*/
              TESTexture_Load(this + 0x48, a2); /*0x4b9715*/
            else
              TESTexture_Load(0, a2); /*0x4b9720*/
            break; /*0x4b971a*/
          case 0x54444F4D: /*0x4b96e1*/
LABEL_16:
            if ( this ) /*0x4b96f3*/
              TESModel_Load((float *)(this + 0x30), a2); /*0x4b96fa*/
            else
              TESModel_Load(0, a2); /*0x4b9705*/
            break;
        }
      }
      else
      {
        if ( ChunkType == 0x4C444F4D ) /*0x4b964b*/
          goto LABEL_16; /*0x4b964b*/
        if ( ChunkType > 0x44494445 ) /*0x4b9656*/
        {
          if ( ChunkType == 0x49524353 ) /*0x4b96b3*/
          {
            v7 = 0; /*0x4b96bf*/
            TESFile_GetChunkData4(a2, (char *)&v7); /*0x4b96c6*/
            *(_DWORD *)(this + 0x58) = v7; /*0x4b96ce*/
            TESScriptableForm_Link(this + 0x54, (TESForm *)this); /*0x4b96d5*/
          }
          goto LABEL_26; /*0x4b96da*/
        }
        switch ( ChunkType ) /*0x4b9658*/
        {
          case 0x44494445: /*0x4b9658*/
            _alloca_(v6[0]); /*0x4b9688*/
            TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4b9697*/
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6); /*0x4b96a7*/
            break;
          case 0x41544144: /*0x4b9658*/
            TESForm_LoadGenericComponents((TESForm *)this, a2, 0, 0); /*0x4b9678*/
            break;
          case 0x42444F4D: /*0x4b9658*/
            goto LABEL_16; /*0x4b9666*/
        }
      }
LABEL_26:
      if ( TESFile_GetNextChunk(a2) ) /*0x4b973e*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4b9749*/
        if ( ChunkType ) /*0x4b9750*/
          continue; /*0x4b9750*/
      }
      return 1; /*0x4b9750*/
    }
  }
  return 1; /*0x4b975b*/
}
