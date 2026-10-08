// Verified TESPathGrid form-type 0x34 loader. It reads DATA pointCount, and on the active file or alternate graph-loading mode delegates remaining PGRI/PGRL/PGRP/PGRR chunks to TESPathGrid_LoadSerializedGraphChunks. The PathGrid is a separate form record associated with its parent cell.
bool __thiscall TESPathGrid_LoadForm(TESPathGrid *this, Data *file)
{
  UInt32 refID; // edi
  UInt32 v5; // eax
  signed int ChunkType; // eax
  int v7[3]; // [esp+0h] [ebp-18h] BYREF
  char Dst[6]; // [esp+Ch] [ebp-Ch] BYREF
  char v9; // [esp+12h] [ebp-6h]
  bool SerializedGraphChunks; // [esp+13h] [ebp-5h]

  if ( (unsigned __int8)TESFile_GetRecordType(file) != 0x34 ) /*0x4e7501*/
    return 0; /*0x4e7505*/
  refID = this->base.member.refID; /*0x4e750a*/
  TESFile_InitializeFormFromRecord(file, &this->base, v7[0], v7[1]); /*0x4e7510*/
  if ( refID ) /*0x4e7517*/
  {
    v5 = this->base.member.refID; /*0x4e7519*/
    if ( refID != v5 ) /*0x4e751e*/
      PrintError("Potentially duplicate PathGrid (%08x) encountered in file %s.", v5, file->name); /*0x4e752a*/
  }
  v9 = 0;                                       // Runtime graph chunks load only for the active file or the alternate runtime-loading mode. /*0x4e7534*/
  if ( TESFile_IsActive(file) || sub_4C9FF0() ) /*0x4e7541*/
    v9 = 1; /*0x4e754a*/
  SerializedGraphChunks = 1; /*0x4e754e*/
  do /*0x4e75da*/
  {
    ChunkType = TESFile_GetChunkType(file); /*0x4e7554*/
    if ( ChunkType > 0x4C524750 ) /*0x4e755e*/
    {
      if ( ChunkType == 0x50524750 || ChunkType == 0x52524750 ) /*0x4e75c5*/
        goto LABEL_20;                          // PGRP or PGRR dispatch (PGRI/PGRL share the earlier switch target): the helper consumes the remaining graph-chunk stream. /*0x4e75c5*/
    }
    else
    {
      switch ( ChunkType ) /*0x4e7560*/
      {
        case 0x4C524750: /*0x4e7560*/
          goto LABEL_20;                        // Recognized runtime graph chunks are PGRI/PGRL/PGRP/PGRR. Serialized PGAG is not dispatched by this Oblivion loader. /*0x4e7560*/
        case 0x41544144: /*0x4e7560*/
          TESFile_GetChunkData(file, Dst, 2u);  // Each DATA encountered before graph-helper delegation overwrites the u16 point count. Once the helper is entered it consumes the remaining stream and ignores later DATA. /*0x4e75aa*/
          this->pointCount = *(_WORD *)Dst; /*0x4e75b3*/
          break; /*0x4e75b7*/
        case 0x44494445: /*0x4e7560*/
          _alloca_(v7[0]); /*0x4e757f*/
          TESFile_GetChunkData(file, (char *)v7, 0x200u); /*0x4e758e*/
          this->base.vtbl->SetEditorID((TESForm *)this, (const char *)v7); /*0x4e759e*/
          break; /*0x4e75a0*/
        case 0x49524750: /*0x4e7560*/
LABEL_20:
          if ( v9 ) /*0x4e75cb*/
            SerializedGraphChunks = TESPathGrid_LoadSerializedGraphChunks(this, file); /*0x4e75d5*/
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(file) ); /*0x4e75da*/
  if ( (this->base.member.flags & 0x20) != 0 ) /*0x4e75ef*/
    this->pointCount = 0; /*0x4e75f1*/
  return SerializedGraphChunks; /*0x4e75fd*/
}
