UInt32 __usercall TESObjectCLOT_SaveFormChunks@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4b5b33*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24)); /*0x4b5b3b*/
  TESScriptableForm_Save((_DWORD *)(this + 0x30)); /*0x4b5b43*/
  TESEnchantableForm_SaveComponent((_DWORD *)(this + 0x3C)); /*0x4b5b4b*/
  TESBipedModelForm_SaveComponent(this + 0x5C); /*0x4b5b53*/
  LODWORD(v5) = 0; /*0x4b5b58*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, 0, v5); /*0x4b5b5e*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4b5b65*/
}
