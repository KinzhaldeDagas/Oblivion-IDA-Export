UInt32 __usercall sub_4A8F00@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4a8f03*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24)); /*0x4a8f0b*/
  TESModel_Save((void *)(this + 0x30), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4a8f22*/
  TESTexture_Save(this + 0x48, 0x4E4F4349); /*0x4a8f2f*/
  TESEnchantableForm_SaveComponent((_DWORD *)(this + 0x54)); /*0x4a8f37*/
  LODWORD(v5) = 8; /*0x4a8f3c*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x7C), v5); /*0x4a8f44*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4a8f4b*/
}
