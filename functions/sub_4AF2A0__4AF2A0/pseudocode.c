char __thiscall sub_4AF2A0(int this, Data *a2)
{
  signed int ChunkType; // eax
  float *v5; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int *v7; // [esp+Ch] [ebp-8h]

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x1D ) /*0x4af2c1*/
    return 0; /*0x4af2c5*/
  *(_DWORD *)(this + 0x3C) = 0; /*0x4af2cf*/
  *(_DWORD *)(this + 0x40) = 0; /*0x4af2d1*/
  *(_DWORD *)(this + 0x44) = 0; /*0x4af2d4*/
  *(_DWORD *)(this + 0x48) = 0; /*0x4af2d7*/
  *(_DWORD *)(this + 0x4C) = 0; /*0x4af2da*/
  *(_DWORD *)(this + 0x50) = 0; /*0x4af2dd*/
  *(_DWORD *)(this + 0x54) = 0; /*0x4af2e0*/
  *(_DWORD *)(this + 0x58) = 0; /*0x4af2e6*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x4af2e9*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4af2f2*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4af2f9*/
  if ( ChunkType ) /*0x4af300*/
  {
    while ( ChunkType <= 0x44494445 ) /*0x4af30b*/
    {
      switch ( ChunkType ) /*0x4af30d*/
      {
        case 0x44494445: /*0x4af30d*/
          _alloca_(v6[0]); /*0x4af332*/
          v7 = v6; /*0x4af341*/
          TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4af344*/
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v7); /*0x4af357*/
          break;
        case 0x41544144: /*0x4af30d*/
          TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x3C), 0x20u); /*0x4af325*/
          break;
        case 0x42444F4D: /*0x4af30d*/
          goto LABEL_13; /*0x4af31b*/
      }
LABEL_17:
      if ( TESFile_GetNextChunk(a2) ) /*0x4af380*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4af38b*/
        if ( ChunkType ) /*0x4af392*/
          continue; /*0x4af392*/
      }
      return 1; /*0x4af392*/
    }
    if ( ChunkType != 0x4C444F4D && ChunkType != 0x54444F4D ) /*0x4af367*/
      goto LABEL_17; /*0x4af367*/
LABEL_13:
    if ( this ) /*0x4af36b*/
      v5 = (float *)(this + 0x24); /*0x4af36d*/
    else
      v5 = 0; /*0x4af372*/
    TESModel_Load(v5, a2); /*0x4af376*/
    goto LABEL_17; /*0x4af376*/
  }
  return 1; /*0x4af39d*/
}
