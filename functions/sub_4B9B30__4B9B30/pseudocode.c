// Verified Oblivion TREE record dispatch: accepts TREE record type 0x1C, initializes the base form, and handles MODL/MODB, MODT, EDID, and DMTL (texture-hash cache) chunks. Unlike Fallout TESObjectTREE::Load/Save, this dispatcher has no SNAM seed-array or BNAM billboard-size case. The loader's complete switch and the Fallout routines establish this as a schema divergence; the source of Oblivion seed-array population outside this loader remains Unknown.
char __thiscall TESObjectTREE_LoadFormRecord(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this, Data *file)
{
  signed int ChunkType; // eax
  int v5[3]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(file) != 0x1C ) /*0x4b9b4f*/
    return 0; /*0x4b9b53*/
  TESFile_InitializeFormFromRecord(file, (TESForm *)this, v5[0], v5[1]); /*0x4b9b5b*/
  ChunkType = TESFile_GetChunkType(file); /*0x4b9b62*/
  if ( ChunkType )                              // Verified chunk dispatch loop. The local switch branches to TESModel_Load for MODL/MODB and MODT, EDID uses the TESObjectTREE vtable setter, and DMTL is handled by TESObjectTREE_LoadTextureHashChunk. No local SNAM or BNAM branch exists in the complete dispatch. /*0x4b9b69*/
  {
    while ( 1 ) /*0x4b9b70*/
    {
      if ( ChunkType > 0x4C444F4D ) /*0x4b9b75*/
      {                                         // Verified DMTL record branch: delegates the TREE DMTL chunk to TESObjectTREE_LoadTextureHashChunk. Fallout TREE load has no matching DMTL branch in its inspected chunk switch.
        if ( ChunkType == 0x4C544D44 ) /*0x4b9bb5*/
        {
          TESObjectTREE_LoadTextureHashChunk((TESObjectTREE *)this, file); /*0x4b9be2*/
        }
        else if ( ChunkType == 0x54444F4D ) /*0x4b9bbc*/
        {
          goto LABEL_11; /*0x4b9bbc*/
        }
      }
      else
      {
        if ( ChunkType == 0x4C444F4D || ChunkType == 0x42444F4D ) /*0x4b9b7e*/
        {
LABEL_11:
          if ( this ) /*0x4b9bc0*/
            TESModel_Load((float *)&this->prefix_000_047[0x24], file); /*0x4b9bc7*/
          else
            TESModel_Load(0, file); /*0x4b9bd5*/
          goto LABEL_15; /*0x4b9bcf*/
        }
        if ( ChunkType == 0x44494445 )          // Verified EDID branch: reads the form editor ID and passes it through TESObjectTREE vtable slot +0xD8. Chunk code is EDID (little-endian immediate 0x44494445), not DEDI. /*0x4b9b85*/
        {
          _alloca_(v5[0]); /*0x4b9b8d*/
          TESFile_GetChunkData(file, (char *)v5, 0x200u); /*0x4b9b9c*/
          (*(void (__thiscall **)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *, int *))(*(_DWORD *)this->prefix_000_047 /*0x4b9bac*/
                                                                                             + 0xD8))(
            this,
            v5);
        }
      }
LABEL_15:
      if ( TESFile_GetNextChunk(file) ) /*0x4b9be9*/
      {
        ChunkType = TESFile_GetChunkType(file); /*0x4b9bf4*/
        if ( ChunkType ) /*0x4b9bfb*/
          continue; /*0x4b9bfb*/
      }
      return 1; /*0x4b9bfb*/
    }
  }
  return 1; /*0x4b9c06*/
}
