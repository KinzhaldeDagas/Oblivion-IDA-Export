UInt32 __usercall TESObjectMISC_SaveFormChunks@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4b94f3*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24)); /*0x4b94fb*/
  TESModel_Save((void *)(this + 0x30), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b9512*/
  TESTexture_Save(this + 0x48, 0x4E4F4349); /*0x4b951f*/
  TESScriptableForm_Save((_DWORD *)(this + 0x54)); /*0x4b9527*/
  LODWORD(v5) = 0; /*0x4b952c*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, 0, v5); /*0x4b9532*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4b9539*/
}
