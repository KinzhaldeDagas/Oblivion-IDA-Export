char __thiscall sub_4B43A0(TESForm *this, Data *a2)
{
  signed int ChunkType; // eax
  float *v5; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int Dst; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x41 ) /*0x4b43c1*/
    return 0; /*0x4b43c5*/
  TESFile_InitializeFormFromRecord(a2, this, v6[0], v6[1]); /*0x4b43cd*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4b43d4*/
  if ( ChunkType ) /*0x4b43db*/
  {
    while ( ChunkType <= 0x44494445 ) /*0x4b43e6*/
    {
      switch ( ChunkType ) /*0x4b43e8*/
      {
        case 0x44494445: /*0x4b43e8*/
          _alloca_(v6[0]); /*0x4b441d*/
          TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4b442c*/
          this->vtbl->SetEditorID(this, (const char *)v6); /*0x4b443c*/
          break;
        case 0x41544144: /*0x4b43e8*/
          Dst = 0; /*0x4b4403*/
          TESForm_LoadGenericComponents(this, a2, &Dst, 4u); /*0x4b440a*/
          *((_DWORD *)this + 0xC) = Dst; /*0x4b4412*/
          break;
        case 0x42444F4D: /*0x4b43e8*/
          goto LABEL_13; /*0x4b43f6*/
      }
LABEL_17:
      if ( TESFile_GetNextChunk(a2) ) /*0x4b4465*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4b4470*/
        if ( ChunkType ) /*0x4b4477*/
          continue; /*0x4b4477*/
      }
      return 1; /*0x4b4477*/
    }
    if ( ChunkType != 0x4C444F4D && ChunkType != 0x54444F4D ) /*0x4b444c*/
      goto LABEL_17; /*0x4b444c*/
LABEL_13:
    if ( this ) /*0x4b4450*/
      v5 = (float *)(this + 1); /*0x4b4452*/
    else
      v5 = 0; /*0x4b4457*/
    TESModel_Load(v5, a2); /*0x4b445b*/
    goto LABEL_17; /*0x4b445b*/
  }
  return 1; /*0x4b4482*/
}
