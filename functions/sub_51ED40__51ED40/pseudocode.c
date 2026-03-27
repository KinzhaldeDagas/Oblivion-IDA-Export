UInt32 __usercall sub_51ED40@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x18));
  TESTexture_Save(this + 0x24, 0x4E4F4349);
  LODWORD(v5) = 1;
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x30), v5);
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
