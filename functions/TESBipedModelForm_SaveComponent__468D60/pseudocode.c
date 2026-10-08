unsigned int __thiscall TESBipedModelForm_SaveComponent(int this)
{
  size_t v3; // [esp-4h] [ebp-8h]

  LODWORD(v3) = 4; /*0x468d63*/
  TESForm_PutFormRecordChunkData(0x54444D42, (void *)(this + 4), v3); /*0x468d6e*/
  TESModel_Save((void *)(this + 8), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x468d88*/
  TESModel_Save((void *)(this + 0x38), 0x32444F4D, 0x42324F4D, 0x54324F4D); /*0x468d9f*/
  TESTexture_Save(this + 0x68, 0x4E4F4349); /*0x468dac*/
  TESModel_Save((void *)(this + 0x20), 0x33444F4D, 0x42334F4D, 0x54334F4D); /*0x468dc3*/
  TESModel_Save((void *)(this + 0x50), 0x34444F4D, 0x42344F4D, 0x54344F4D); /*0x468dda*/
  return TESTexture_Save(this + 0x74, 0x324F4349); /*0x468dec*/
}
