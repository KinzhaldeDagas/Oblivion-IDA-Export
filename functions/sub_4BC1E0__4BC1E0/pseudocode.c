UInt32 __usercall sub_4BC1E0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // ecx
  int v4; // edx
  size_t v6; // [esp-4h] [ebp-18h]
  float Src[3]; // [esp+8h] [ebp-Ch] BYREF

  TESForm_InitializeFormRecord(this, a2);
  v3 = *((unsigned __int16 *)this + 0x13);
  v4 = *((unsigned __int16 *)this + 0x14);
  LODWORD(v6) = 0xC;
  Src[0] = (float)*((unsigned __int16 *)this + 0x12);
  Src[1] = (float)v3;
  Src[2] = (float)v4;
  TESForm_PutFormRecordChunkData(0x4D414E44, Src, v6);
  return TESForm_FinalizeFormRecord(this);
}
