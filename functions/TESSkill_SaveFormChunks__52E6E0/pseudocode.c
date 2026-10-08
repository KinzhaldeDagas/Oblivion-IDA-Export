// Oblivion SKIL save: DATA is exactly 0x14 bytes = actorValue, governingAttribute, specialization, useValue0, useValue1. Major membership is not stored here; TESClass owns seven major-skill AVs.
UInt32 __usercall TESSkill_SaveFormChunks@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-4h] [ebp-Ch]
  size_t v5; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord(this, a2); /*0x52e6e4*/
  LODWORD(v4) = 4; /*0x52e6e9*/
  TESForm_PutFormRecordChunkData(0x58444E49, (char *)this + 0x2C, v4); /*0x52e6f4*/
  TESDescription_Save(this + 1); /*0x52e6ff*/
  TESTexture_Save((int)this + 0x20, 0x4E4F4349); /*0x52e70c*/
  LODWORD(v5) = 0x14;                           // Persist the fixed five-dword SKIL DATA payload: actorValue, governingAttribute, specialization, and two skill-specific use values. /*0x52e711*/
  TESForm_SaveGenericComponents(this, (int)this + 0x2C, (char *)this + 0x2C, v5); /*0x52e716*/
  TESDescription_SaveComponent((int)this + 0x40, 0x4D414E41); /*0x52e724*/
  TESDescription_SaveComponent((int)(this + 3), 0x4D414E4A); /*0x52e732*/
  TESDescription_SaveComponent((int)this + 0x50, 0x4D414E45); /*0x52e740*/
  TESDescription_SaveComponent((int)this + 0x58, 0x4D414E4D); /*0x52e74e*/
  return TESForm_FinalizeFormRecord(this); /*0x52e756*/
}
