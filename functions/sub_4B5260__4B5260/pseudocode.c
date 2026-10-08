UInt32 __usercall sub_4B5260@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4b5263*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24)); /*0x4b526b*/
  TESModel_Save((void *)(this + 0x30), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b5282*/
  TESTexture_Save(this + 0x48, 0x4E4F4349); /*0x4b528f*/
  TESScriptableForm_Save((_DWORD *)(this + 0x54)); /*0x4b5297*/
  TESEnchantableForm_SaveComponent((_DWORD *)(this + 0x60)); /*0x4b529f*/
  TESDescription_Save(this + 0x80, a3); /*0x4b52aa*/
  LODWORD(v5) = 2; /*0x4b52af*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x88), v5); /*0x4b52ba*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4b52c1*/
}
