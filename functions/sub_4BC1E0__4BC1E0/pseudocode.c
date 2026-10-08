// Verified record-save virtual (vtable +0x24): this is ECX, save flag is BPL, return is EAX. Writes a 12-byte DNAM payload containing the three UInt16 dimensions converted to floats, then finalizes the record.
UInt32 __usercall TESSubSpace_SaveFormRecord@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // ecx
  int v4; // edx
  size_t v6; // [esp-4h] [ebp-18h]
  float Src[3]; // [esp+8h] [ebp-Ch] BYREF

  TESForm_InitializeFormRecord(this, a2); /*0x4bc1e6*/
  v3 = *((unsigned __int16 *)this + 0x13); /*0x4bc1ef*/
  v4 = *((unsigned __int16 *)this + 0x14); /*0x4bc1f3*/
  LODWORD(v6) = 0xC; /*0x4bc1fb*/
  Src[0] = (float)*((unsigned __int16 *)this + 0x12); /*0x4bc20f*/
  Src[1] = (float)v3; /*0x4bc21b*/
  Src[2] = (float)v4; /*0x4bc223*/
  TESForm_PutFormRecordChunkData(0x4D414E44, Src, v6); /*0x4bc227*/
  return TESForm_FinalizeFormRecord(this); /*0x4bc236*/
}
