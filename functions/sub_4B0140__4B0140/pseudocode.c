UInt32 __usercall sub_4B0140@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm_InitializeFormRecord(this, a2); /*0x4b0143*/
  TESLeveledList_SaveComponent((int)this + 0x24); /*0x4b014b*/
  return TESForm_FinalizeFormRecord(this); /*0x4b0152*/
}
