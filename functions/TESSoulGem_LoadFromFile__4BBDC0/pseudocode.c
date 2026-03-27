char __thiscall TESSoulGem::LoadFromFile(TESSoulGem *this, Data *a2)
{
  signed int ChunkType; // eax
  float *p_model; // eax
  int v6[2]; // [esp+0h] [ebp-14h] BYREF
  Script *v7; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != kFormType_SoulGem )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4C4C5546 )
      {
        if ( ChunkType <= 1346587731 )
        {
          switch ( ChunkType )
          {
            case 1346587731:
              if ( a2->currentChunk.length == 1 )
                TESFile_GetChunkData(a2, (char *)&this->members.capacity, 1u);
              break;
            case 1280659283:
              if ( a2->currentChunk.length == 1 )
                TESFile_GetChunkData(a2, (char *)&this->members.soul, 1u);
              break;
            case 1313817417:
              if ( this )
                TESTexture_Load((int)&this->members.icon, a2);
              else
                TESTexture_Load(0, a2);
              break;
          }
          goto LABEL_36;
        }
        if ( ChunkType == 0x54444F4D )
        {
LABEL_32:
          if ( this )
            p_model = (float *)&this->members.model;
          else
            p_model = 0;
          TESModel_Load(p_model, a2);
        }
      }
      else
      {
        if ( ChunkType == 0x4C4C5546 )
        {
          if ( this )
            TESFullname_Load(&this->members.fullName, a2);
          else
            TESFullname_Load(0, a2);
          goto LABEL_36;
        }
        if ( ChunkType > 0x44494445 )
        {
          if ( ChunkType == 0x49524353 )
          {
            v7 = 0;
            TESFile_GetChunkData4(a2, (char *)&v7);
            this->members.scriptable.script = v7;
            TESScriptableForm_Link((int)&this->members.scriptable, (TESForm *)this);
          }
          else if ( ChunkType == 0x4C444F4D )
          {
            goto LABEL_32;
          }
        }
        else
        {
          switch ( ChunkType )
          {
            case 0x44494445:
              _alloca_();
              TESFile_GetChunkData(a2, (char *)v6, 0x200u);
              this->__vtable->super.super.SetEditorID((TESForm *)this, (const char *)v6);
              break;
            case 0x41544144:
              TESForm_LoadGenericComponents((TESForm *)this, a2, 0, 0);
              break;
            case 0x42444F4D:
              goto LABEL_32;
          }
        }
      }
LABEL_36:
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
