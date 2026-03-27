UInt32 __usercall sub_52EC30@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2);
  LODWORD(v4) = 4;
  TESForm_PutFormRecordChunkData(0x58444958, this + 2, v4);
  dword_B3650C = (int)this;
  return TESForm_FinalizeFormRecord(this);
}
