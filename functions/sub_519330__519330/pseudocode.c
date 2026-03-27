UInt32 __usercall sub_519330@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm_InitializeFormRecord(this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)this + 3);
  TESTexture_Save((int)this + 0x24, 0x4E4F4349);
  TESDescription_Save(this + 2);
  TESSpellList_SaveComponent((int *)this + 0xE);
  return TESForm_FinalizeFormRecord(this);
}
