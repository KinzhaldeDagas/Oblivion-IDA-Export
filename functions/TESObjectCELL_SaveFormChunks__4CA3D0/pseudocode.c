UInt32 __usercall TESObjectCELL_SaveFormChunks@<eax>(TESForm *this@<ecx>, int a2@<ebx>, char a3@<bpl>)
{
  void *v4; // eax
  size_t v6; // [esp-4h] [ebp-Ch]
  size_t v7; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord(this, a3);
  TESFullName_Save((TESForm::ModReferenceList *)this + 3);
  LODWORD(v6) = 1;
  j_TESForm_PutCurrentChunkData(0x41544144, (char *)this + 0x24, v6);
  v4 = *((void **)this + 0xF);
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
  {
    if ( v4 )
    {
      LODWORD(v7) = 0x28;
      TESForm_PutFormRecordChunkData(0x4C4C4358, v4, v7);
    }
  }
  else if ( v4 )
  {
    LODWORD(v7) = 8;
    TESForm_PutFormRecordChunkData(0x434C4358, v4, v7);
  }
  ExtraDataList_Save((ExtraDataList *)this + 2, a2);
  return TESForm_FinalizeFormRecord(this);
}
