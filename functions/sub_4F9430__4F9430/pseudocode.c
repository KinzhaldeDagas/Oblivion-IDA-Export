UInt32 __usercall sub_4F9430@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-10h] [ebp-14h]
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2);
  LODWORD(v5) = 1;
  j_TESForm_PutCurrentChunkData(0x4D414E46, (char *)this + 0x20, v5);
  LODWORD(v4) = 4;
  TESForm_PutFormRecordChunkData(0x56544C46, (char *)this + 0x24, v4);
  return TESForm_FinalizeFormRecord(this);
}
