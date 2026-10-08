UInt32 __usercall TESGlobal_SaveFormRecord@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-10h] [ebp-14h]
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2); /*0x4f9433*/
  LODWORD(v5) = 1; /*0x4f9438*/
  j_TESForm_PutCurrentChunkData(0x4D414E46, (char *)this + 0x20, v5); /*0x4f9443*/
  LODWORD(v4) = 4; /*0x4f9448*/
  TESForm_PutFormRecordChunkData(0x56544C46, (char *)this + 0x24, v4); /*0x4f9453*/
  return TESForm_FinalizeFormRecord(this); /*0x4f945d*/
}
