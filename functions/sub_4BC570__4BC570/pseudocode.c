// Verified record-load virtual (vtable +0x1C): accepts only record type 0x29, initializes form metadata, clears linked state, reads EDID and a 12-byte DNAM vector, truncates the three float components to UInt16, and recalculates boundRadius from the half-extents. No SubSpace-specific index registration occurs in this loader.
char __thiscall TESSubSpace_LoadFormRecord(TESSubSpace *this, Data *record)
{
  UInt32 i; // eax
  int dimensionsY; // edx
  int dimensionsZ; // eax
  double v7; // st7
  double v8; // rt0
  int v9[3]; // [esp+0h] [ebp-24h] BYREF
  char Dst[4]; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+1Ch] [ebp-8h]

  if ( (unsigned __int8)TESFile_GetRecordType(record) != 0x29 ) /*0x4bc591*/
    return 0; /*0x4bc593*/
  TESFile_InitializeFormFromRecord(record, (TESForm *)this, v9[0], v9[1]); /*0x4bc59d*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4bc5a6*/
  for ( i = TESFile_GetChunkType(record); i; i = TESFile_GetChunkType(record) ) /*0x4bc5b4*/
  {
    if ( i == 0x44494445 ) /*0x4bc5c5*/
    {
      _alloca_(v9[0]); /*0x4bc654*/
      TESFile_GetChunkData(record, (char *)v9, 0x200u); /*0x4bc663*/
      this->super.vtbl->super.super.SetEditorID((TESForm *)this, (const char *)v9); /*0x4bc673*/
    }
    else if ( i == 0x4D414E44 ) /*0x4bc5d0*/
    {
      TESFile_GetChunkData(record, Dst, 0xCu); /*0x4bc5de*/
      this->dimensionsX = (int)*(float *)Dst; /*0x4bc5ff*/
      this->dimensionsY = (int)v11; /*0x4bc622*/
      LODWORD(v13) = (int)v12; /*0x4bc63e*/
      this->dimensionsZ = LOWORD(v13); /*0x4bc645*/
    }
    if ( !TESFile_GetNextChunk(record) ) /*0x4bc677*/
      break; /*0x4bc67e*/
  }
  dimensionsY = this->dimensionsY; /*0x4bc693*/
  dimensionsZ = this->dimensionsZ; /*0x4bc697*/
  LODWORD(v13) = this->dimensionsX; /*0x4bc69b*/
  v7 = (double)SLODWORD(v13); /*0x4bc69e*/
  v13 = *(float *)&dimensionsY; /*0x4bc6a1*/
  v8 = dbl_A2FAA0; /*0x4bc6ac*/
  *(float *)Dst = v7 * v8; /*0x4bc6ae*/
  v11 = (double)dimensionsY * v8; /*0x4bc6b9*/
  v12 = v8 * (double)dimensionsZ; /*0x4bc6c1*/
  v13 = *(float *)Dst * *(float *)Dst + v11 * v11 + v12 * v12; /*0x4bc6dd*/
  v13 = sqrt(v13); /*0x4bc6e8*/
  this->boundRadius = v13; /*0x4bc6f0*/
  return 1; /*0x4bc6f6*/
}
