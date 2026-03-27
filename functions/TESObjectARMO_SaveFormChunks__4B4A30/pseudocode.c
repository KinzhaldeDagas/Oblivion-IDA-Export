UInt32 __usercall TESObjectARMO_SaveFormChunks@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24));
  TESScriptableForm_Save((_DWORD *)(this + 0x30));
  TESEnchantableForm_SaveComponent((_DWORD *)(this + 0x3C));
  TESBipedModelForm_SaveComponent(this + 0x64);
  LODWORD(v5) = 2;
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0xE4), v5);
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
