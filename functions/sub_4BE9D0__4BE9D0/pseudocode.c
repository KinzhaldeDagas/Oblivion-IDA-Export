// Verified: saves Climate WLS(T) weather list from +0x30, two textures at +0x38, model at +0x18, and 6-byte climate data at +0x50.
UInt32 __usercall TESClimate_SaveRecord@<eax>(TESForm *this@<ecx>, char a2@<bpl>, int a3@<esi>)
{
  int v4; // esi
  char *v5; // edi
  size_t v7; // [esp-4h] [ebp-10h]

  TESForm_InitializeFormRecord(this, a2); /*0x4be9d5*/
  OblivionTESWeatherList_SaveChunk((signed int)(this + 2), a3, 0x54534C57); /*0x4be9e2*/
  v4 = 0; /*0x4be9e7*/
  v5 = (char *)this + 0x38; /*0x4be9e9*/
  do /*0x4bea07*/
  {
    TESTexture_Save((int)v5, v4 + 0x4D414E46); /*0x4be9f9*/
    ++v4; /*0x4be9fe*/
    v5 += 0xC; /*0x4bea01*/
  }
  while ( v4 < 2 ); /*0x4bea07*/
  TESModel_Save(this + 1, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4bea1b*/
  LODWORD(v7) = 6; /*0x4bea20*/
  TESForm_PutFormRecordChunkData(0x4D414E54, (char *)this + 0x50, v7); /*0x4bea2b*/
  return TESForm_FinalizeFormRecord(this); /*0x4bea33*/
}
