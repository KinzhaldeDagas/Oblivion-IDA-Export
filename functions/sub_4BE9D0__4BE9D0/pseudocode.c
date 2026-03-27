UInt32 __usercall sub_4BE9D0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // edx
  int v4; // esi
  char *v5; // edi
  size_t v7; // [esp-4h] [ebp-10h]

  TESForm_InitializeFormRecord(this, a2);
  sub_4EEB30((signed int)(this + 2), v3, 0x54534C57);
  v4 = 0;
  v5 = (char *)this + 0x38;
  do
  {
    TESTexture_Save((int)v5, v4 + 0x4D414E46);
    ++v4;
    v5 += 0xC;
  }
  while ( v4 < 2 );
  TESModel_Save(this + 1, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  LODWORD(v7) = 6;
  TESForm_PutFormRecordChunkData(0x4D414E54, (char *)this + 0x50, v7);
  return TESForm_FinalizeFormRecord(this);
}
