char __thiscall TESSoulGem::LoadFromFile(TESSoulGem *this, Data *a2)
{
  signed int ChunkType; // eax
  float *p_model; // eax
  int v6[2]; // [esp+0h] [ebp-14h] BYREF
  Script *v7; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != kFormType_SoulGem ) /*0x4bbde1*/
    return 0; /*0x4bbde5*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x4bbded*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4bbdf6*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4bbdfd*/
  if ( ChunkType ) /*0x4bbe04*/
  {
    while ( 1 ) /*0x4bbe10*/
    {
      if ( ChunkType > 0x4C4C5546 ) /*0x4bbe15*/
      {
        if ( ChunkType <= 1346587731 ) /*0x4bbede*/
        {
          switch ( ChunkType ) /*0x4bbee0*/
          {
            case 1346587731: /*0x4bbee0*/
              if ( a2->currentChunk.length == 1 ) /*0x4bbf2a*/
                TESFile_GetChunkData(a2, (char *)&this->members.capacity, 1u); /*0x4bbf34*/
              break;
            case 1280659283: /*0x4bbee0*/
              if ( a2->currentChunk.length == 1 ) /*0x4bbf12*/
                TESFile_GetChunkData(a2, (char *)&this->members.soul, 1u); /*0x4bbf1c*/
              break;
            case 1313817417: /*0x4bbee0*/
              if ( this ) /*0x4bbef2*/
                TESTexture_Load((int)&this->members.icon, a2); /*0x4bbef9*/
              else
                TESTexture_Load(0, a2); /*0x4bbf04*/
              break;
          }
          goto LABEL_36; /*0x4bbefe*/
        }
        if ( ChunkType == 0x54444F4D ) /*0x4bbf40*/
        {
LABEL_32:
          if ( this ) /*0x4bbf44*/
            p_model = (float *)&this->members.model; /*0x4bbf46*/
          else
            p_model = 0; /*0x4bbf4b*/
          TESModel_Load(p_model, a2); /*0x4bbf4f*/
        }
      }
      else
      {
        if ( ChunkType == 0x4C4C5546 ) /*0x4bbe1b*/
        {
          if ( this ) /*0x4bbebd*/
            TESFullname_Load(&this->members.fullName, a2); /*0x4bbec4*/
          else
            TESFullname_Load(0, a2); /*0x4bbed2*/
          goto LABEL_36; /*0x4bbec9*/
        }
        if ( ChunkType > 0x44494445 ) /*0x4bbe26*/
        {
          if ( ChunkType == 0x49524353 ) /*0x4bbe83*/
          {
            v7 = 0; /*0x4bbe9b*/
            TESFile_GetChunkData4(a2, (char *)&v7); /*0x4bbea2*/
            this->members.scriptable.script = v7; /*0x4bbeaa*/
            TESScriptableForm_Link((int)&this->members.scriptable, (TESForm *)this); /*0x4bbeb1*/
          }
          else if ( ChunkType == 0x4C444F4D ) /*0x4bbe8a*/
          {
            goto LABEL_32; /*0x4bbe8a*/
          }
        }
        else
        {
          switch ( ChunkType ) /*0x4bbe28*/
          {
            case 0x44494445: /*0x4bbe28*/
              _alloca_(v6[0]); /*0x4bbe58*/
              TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4bbe67*/
              this->__vtable->super.super.SetEditorID((TESForm *)this, (const char *)v6); /*0x4bbe77*/
              break;
            case 0x41544144: /*0x4bbe28*/
              TESForm_LoadGenericComponents((TESForm *)this, a2, 0, 0); /*0x4bbe48*/
              break;
            case 0x42444F4D: /*0x4bbe28*/
              goto LABEL_32; /*0x4bbe36*/
          }
        }
      }
LABEL_36:
      if ( TESFile_GetNextChunk(a2) ) /*0x4bbf59*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4bbf64*/
        if ( ChunkType ) /*0x4bbf6b*/
          continue; /*0x4bbf6b*/
      }
      return 1; /*0x4bbf6b*/
    }
  }
  return 1; /*0x4bbf76*/
}
