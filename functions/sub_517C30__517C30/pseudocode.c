UInt32 __usercall sub_517C30@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2); /*0x517c33*/
  sub_46F100((int)this + 0x24); /*0x517c3b*/
  LODWORD(v4) = 0xC; /*0x517c40*/
  TESForm_PutFormRecordChunkData(0x58444E53, (char *)this + 0x38, v4); /*0x517c4b*/
  return TESForm_FinalizeFormRecord(this); /*0x517c55*/
}
