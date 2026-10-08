UInt32 __usercall sub_51FDA0@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x51fda3*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x18)); /*0x51fdab*/
  TESModel_Save((void *)(this + 0x24), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x51fdc2*/
  TESTexture_Save(this + 0x3C, 0x4E4F4349); /*0x51fdcf*/
  LODWORD(v5) = 1; /*0x51fdd4*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x48), v5); /*0x51fddc*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x51fde3*/
}
