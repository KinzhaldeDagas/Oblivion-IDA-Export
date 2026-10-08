UInt32 __usercall sub_4AE540@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2); /*0x4ae543*/
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24)); /*0x4ae54b*/
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4ae562*/
  TESScriptableForm_Save((_DWORD *)this + 0x12); /*0x4ae56a*/
  LODWORD(v4) = 4; /*0x4ae56f*/
  TESForm_PutFormRecordChunkData(0x4D414E4D, (char *)this + 0x58, v4); /*0x4ae57a*/
  return TESForm_FinalizeFormRecord(this); /*0x4ae584*/
}
