int __thiscall TESBipedModelForm_SaveComponent(int this)
{
  size_t v3; // [esp-4h] [ebp-8h]

  LODWORD(v3) = 4;
  TESForm_PutFormRecordChunkData(0x54444D42, (void *)(this + 4), v3);
  TESModel_Save(this + 8, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESModel_Save(this + 0x38, 0x32444F4D, 0x42324F4D, 0x54324F4D);
  TESTexture_Save(this + 0x68, 0x4E4F4349);
  TESModel_Save(this + 0x20, 0x33444F4D, 0x42334F4D, 0x54334F4D);
  TESModel_Save(this + 0x50, 0x34444F4D, 0x42344F4D, 0x54344F4D);
  return TESTexture_Save(this + 0x74, 0x324F4349);
}
