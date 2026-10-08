UInt32 __usercall TESObjectWEAP_SaveFormChunks@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4bb003*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24)); /*0x4bb00b*/
  TESModel_Save((void *)(this + 0x30), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4bb022*/
  TESTexture_Save(this + 0x48, 0x4E4F4349); /*0x4bb02f*/
  TESScriptableForm_Save((_DWORD *)(this + 0x54)); /*0x4bb037*/
  TESEnchantableForm_SaveComponent((_DWORD *)(this + 0x60)); /*0x4bb03f*/
  LODWORD(v5) = 0x10; /*0x4bb044*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x90), v5); /*0x4bb04f*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4bb056*/
}
