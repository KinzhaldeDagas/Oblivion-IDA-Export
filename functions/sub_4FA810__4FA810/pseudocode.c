UInt32 __usercall sub_4FA810@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2); /*0x4fa813*/
  LODWORD(v4) = 0x14; /*0x4fa818*/
  TESForm_PutFormRecordChunkData(0x52484353, this + 1, v4); /*0x4fa823*/
  return TESForm_FinalizeFormRecord(this); /*0x4fa82d*/
}
