UInt32 __usercall sub_4B4500@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4b4503*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24)); /*0x4b450b*/
  TESModel_Save((void *)(this + 0x30), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b4522*/
  TESTexture_Save(this + 0x48, 0x4E4F4349); /*0x4b452f*/
  TESScriptableForm_Save((_DWORD *)(this + 0x54)); /*0x4b4537*/
  LODWORD(v5) = 1; /*0x4b453c*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x78), v5); /*0x4b4544*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4b454b*/
}
