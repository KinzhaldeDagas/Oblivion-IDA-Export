// Runtime TESTopic XIDX writer initializes/finalizes a DIAL record chunk and emits four bytes from the field at TESTopic+0x30 under XIDX. This confirms XIDX is a persisted raw U32 field in Oblivion.
UInt32 __usercall sub_52EC30@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2); /*0x52ec33*/
  LODWORD(v4) = 4; /*0x52ec38*/
  TESForm_PutFormRecordChunkData(0x58444958, this + 2, v4); /*0x52ec43*/
  unk_B3650C = (int)this; /*0x52ec4b*/
  return TESForm_FinalizeFormRecord(this); /*0x52ec53*/
}
