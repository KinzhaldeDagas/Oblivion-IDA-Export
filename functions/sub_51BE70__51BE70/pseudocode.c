// Write an Oblivion CLAS form: FULL, DESC, ICON, then exactly 0x34 bytes of DATA beginning at TESClass+0x38. The payload contains seven majors and no minor collection.
UInt32 __usercall TESClass_SaveFormChunks@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x51be73*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x18)); /*0x51be7b*/
  TESDescription_Save((void *)(this + 0x24)); /*0x51be83*/
  TESTexture_Save(this + 0x2C, 0x4E4F4349); /*0x51be90*/
  LODWORD(v5) = 0x34;                           // Authoritative CLAS DATA size is 0x34 bytes. /*0x51be95*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x38), v5); /*0x51be9d*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x51bea4*/
}
