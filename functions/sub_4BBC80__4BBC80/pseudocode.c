UInt32 __usercall sub_4BBC80@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-10h] [ebp-14h]
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24));
  TESModel_Save((void *)(this + 0x30), 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESTexture_Save(this + 0x48, 0x4E4F4349);
  TESScriptableForm_Save((_DWORD *)(this + 0x54));
  LODWORD(v6) = 0;
  TESForm_SaveGenericComponents((TESForm *)this, a3, 0, v6);
  LODWORD(v7) = 1;
  TESForm_PutFormRecordChunkData(0x4C554F53, (void *)(this + 0x70), v7);
  LODWORD(v5) = 1;
  TESForm_PutFormRecordChunkData(0x50434C53, (void *)(this + 0x71), v5);
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
