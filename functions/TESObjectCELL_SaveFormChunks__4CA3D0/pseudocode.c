// 0x4CA421: CELL writer0x4CA3D0 invokes shared ExtraDataList_Save0x422F10 with cell extra list; shared writer has no owner form or CELL filter. It can serialize surviving runtime CELL XLOC/XTEL; XESP was removed by owner check. Candidate decoding and lossless parser recompile must not be mistaken for this resolved native save.
UInt32 __usercall TESObjectCELL_SaveFormChunks@<eax>(TESForm *this@<ecx>, int a2@<ebx>, char a3@<bpl>)
{
  void *v4; // eax
  size_t v6; // [esp-4h] [ebp-Ch]
  size_t v7; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord(this, a3); /*0x4ca3d4*/
  TESFullName_Save((TESForm::ModReferenceList *)this + 3); /*0x4ca3dc*/
  LODWORD(v6) = 1; /*0x4ca3e1*/
  j_TESForm_PutCurrentChunkData(0x41544144, (char *)this + 0x24, v6);// Verified CELL plugin-record writer: writes the full TESObjectCELLMembr.flags0 byte as DATA. TESObjectCELL_LoadForm reads that byte and may clear bit 0x40 unless DataHandler retainActiveFile is set. /*0x4ca3ec*/
  v4 = *((void **)this + 0xF); /*0x4ca3f1*/
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4ca3fa*/
  {
    if ( v4 ) /*0x4ca3fe*/
    {
      LODWORD(v7) = 0x28; /*0x4ca400*/
      TESForm_PutFormRecordChunkData(0x4C4C4358, v4, v7); /*0x4ca408*/
    }
  }
  else if ( v4 ) /*0x4ca40c*/
  {
    LODWORD(v7) = 8; /*0x4ca40e*/
    TESForm_PutFormRecordChunkData(0x434C4358, v4, v7); /*0x4ca416*/
  }
  ExtraDataList_Save((ExtraDataList *)this + 2, a2); /*0x4ca421*/
  return TESForm_FinalizeFormRecord(this); /*0x4ca426*/
}
