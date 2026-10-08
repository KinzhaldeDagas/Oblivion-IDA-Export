UInt32 __usercall sub_51ED40@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x51ed43*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x18)); /*0x51ed4b*/
  TESTexture_Save(this + 0x24, 0x4E4F4349); /*0x51ed58*/
  LODWORD(v5) = 1; /*0x51ed5d*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x30), v5); /*0x51ed65*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x51ed6c*/
}
