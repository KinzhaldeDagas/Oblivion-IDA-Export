UInt32 __usercall TESSkill_SaveFormChunks@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  size_t v4; // [esp-4h] [ebp-Ch]
  size_t v5; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord(this, a2);
  LODWORD(v4) = 4;
  TESForm_PutFormRecordChunkData(0x58444E49, (char *)this + 0x2C, v4);
  TESDescription_Save(this + 1);
  TESTexture_Save((int)this + 0x20, 0x4E4F4349);
  LODWORD(v5) = 0x14;
  TESForm_SaveGenericComponents(this, (int)this + 0x2C, (char *)this + 0x2C, v5);
  TESDescription_SaveComponent((int)this + 0x40, 0x4D414E41);
  TESDescription_SaveComponent((int)(this + 3), 0x4D414E4A);
  TESDescription_SaveComponent((int)this + 0x50, 0x4D414E45);
  TESDescription_SaveComponent((int)this + 0x58, 0x4D414E4D);
  return TESForm_FinalizeFormRecord(this);
}
