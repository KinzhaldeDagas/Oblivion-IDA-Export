UInt32 __usercall sub_4FA810@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2);
  LODWORD(v4) = 0x14;
  TESForm_PutFormRecordChunkData(0x52484353, this + 1, v4);
  return TESForm_FinalizeFormRecord(this);
}
