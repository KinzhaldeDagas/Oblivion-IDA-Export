// Load an Oblivion TESObjectLIGH record. DATA is exactly +0x70..+0x87; zero falloff exponent and projector FOV are normalized to 1.0 and 90.0. The separate FNAM chunk loads fade_88, which later seeds NiLight::m_fDimmer and attached-light target dimmer updates.
char __thiscall TESObjectLIGH_LoadFormRecord(TESObjectLIGH_DecodedLayout *self, Data *record)
{
  signed int ChunkType; // esi
  int v5[3]; // [esp+0h] [ebp-14h] BYREF
  void *v6; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(record) != 0x1A ) /*0x4b0d31*/
    return 0; /*0x4b0d35*/
  TESFile_InitializeFormFromRecord(record, (TESForm *)self, v5[0], v5[1]); /*0x4b0d3d*/
  TESForm_SetIsLinked((TESForm *)self, 0); /*0x4b0d46*/
  self->projectorFovDegrees_84 = 0.0; /*0x4b0d4d*/
  self->falloffExponent_80 = 0.0; /*0x4b0d55*/
  ChunkType = TESFile_GetChunkType(record); /*0x4b0d60*/
  if ( ChunkType ) /*0x4b0d66*/
  {
    while ( 1 ) /*0x4b0d72*/
    {
      if ( ChunkType > 0x4C4C5546 ) /*0x4b0d78*/
      {
        if ( ChunkType <= 0x4E4F4349 ) /*0x4b0e39*/
        {
          switch ( ChunkType ) /*0x4b0e3b*/
          {
            case 0x4E4F4349: /*0x4b0e3b*/
              TESTexture_Load((int)&self->base_00[0x48], record); /*0x4b0e79*/
              break;
            case 0x4D414E46: /*0x4b0e3b*/
              TESFile_GetChunkData4(record, (char *)&self->fade_88);// Load the four-byte Oblivion LIGH FNAM subrecord into TESObjectLIGH::fade_88. /*0x4b0e6d*/
              break;
            case 0x4D414E53: /*0x4b0e3b*/
              v6 = 0; /*0x4b0e4b*/
              TESFile_GetChunkData4(record, (char *)&v6); /*0x4b0e54*/
              self->soundForm_8C = v6; /*0x4b0e5c*/
              break;
          }
          goto LABEL_32; /*0x4b0e62*/
        }
        if ( ChunkType == 0x54444F4D ) /*0x4b0e89*/
          goto LABEL_26; /*0x4b0e89*/
      }
      else
      {
        if ( ChunkType == 0x4C4C5546 ) /*0x4b0d7e*/
        {
          TESFullname_Load((TESFullName *)&self->base_00[0x24], record); /*0x4b0e26*/
          goto LABEL_32; /*0x4b0e2e*/
        }
        if ( ChunkType > 0x44494445 ) /*0x4b0d8a*/
        {
          if ( ChunkType == 0x49524353 ) /*0x4b0dec*/
          {
            v6 = 0; /*0x4b0dff*/
            TESFile_GetChunkData4(record, (char *)&v6); /*0x4b0e08*/
            *(_DWORD *)&self->base_00[0x58] = v6; /*0x4b0e14*/
            TESScriptableForm_Link((int)&self->base_00[0x54], (TESForm *)self); /*0x4b0e17*/
            goto LABEL_32; /*0x4b0e1c*/
          }
          if ( ChunkType == 0x4C444F4D ) /*0x4b0df4*/
LABEL_26:
            TESModel_Load((float *)&self->base_00[0x30], record); /*0x4b0e8b*/
        }
        else
        {
          switch ( ChunkType ) /*0x4b0d8c*/
          {
            case 0x44494445: /*0x4b0d8c*/
              _alloca_(v5[0]); /*0x4b0dc0*/
              TESFile_GetChunkData(record, (char *)v5, 0x200u); /*0x4b0dcf*/
              (*(void (__thiscall **)(TESObjectLIGH_DecodedLayout *, int *))(*(_DWORD *)self->base_00 + 0xD8))(self, v5); /*0x4b0ddf*/
              break; /*0x4b0de1*/
            case 0x41544144: /*0x4b0d8c*/
              TESForm_LoadGenericComponents((TESForm *)self, record, &self->time_70, 0x18u); /*0x4b0db0*/
              if ( 0.0 == self->projectorFovDegrees_84 ) /*0x4b0ead*/
                self->projectorFovDegrees_84 = flt_A430CC; /*0x4b0eb5*/
              if ( 0.0 == self->falloffExponent_80 ) /*0x4b0ec6*/
                self->falloffExponent_80 = 1.0; /*0x4b0eca*/
              break; /*0x4b0eca*/
            case 0x42444F4D: /*0x4b0d8c*/
              goto LABEL_26; /*0x4b0d9c*/
          }
        }
      }
LABEL_32:
      if ( TESFile_GetNextChunk(record) ) /*0x4b0ed2*/
      {
        ChunkType = TESFile_GetChunkType(record); /*0x4b0ee2*/
        if ( ChunkType ) /*0x4b0ee6*/
          continue; /*0x4b0ee6*/
      }
      return 1; /*0x4b0ee6*/
    }
  }
  return 1; /*0x4b0ef1*/
}
