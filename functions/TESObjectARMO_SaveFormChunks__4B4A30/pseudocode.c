UInt32 __usercall TESObjectARMO_SaveFormChunks@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4b4a33*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24)); /*0x4b4a3b*/
  TESScriptableForm_Save((_DWORD *)(this + 0x30)); /*0x4b4a43*/
  TESEnchantableForm_SaveComponent((_DWORD *)(this + 0x3C)); /*0x4b4a4b*/
  TESBipedModelForm_SaveComponent(this + 0x64); /*0x4b4a53*/
  LODWORD(v5) = 2; /*0x4b4a58*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0xE4), v5); /*0x4b4a63*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4b4a6a*/
}
