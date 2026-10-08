UInt32 __usercall sub_519330@<eax>(TESForm *this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  TESForm_InitializeFormRecord(this, a2); /*0x519333*/
  TESFullName_Save((TESForm::ModReferenceList *)this + 3); /*0x51933b*/
  TESTexture_Save((int)this + 0x24, 0x4E4F4349); /*0x519348*/
  TESDescription_Save((int)(this + 2), a3); /*0x519350*/
  TESSpellList_SaveComponent((int *)this + 0xE); /*0x519358*/
  return TESForm_FinalizeFormRecord(this); /*0x51935f*/
}
