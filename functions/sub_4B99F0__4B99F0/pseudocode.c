// Verified save-record handler from local sequence: initializes form record, serializes the TESModel chunks, calls TESObjectTREE_WriteTextureHashChunk, then finalizes the record. The DMTL writer helper reaches a one-instruction `retn 8` no-op, so this Oblivion path emits no texture-hash chunk.
UInt32 __usercall TESObjectTREE_SaveFormRecord@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm_InitializeFormRecord(this, a2); /*0x4b99f3*/
  TESModel_Save((char *)this + 0x24, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b9a0a*/
  TESObjectTREE_WriteTextureHashChunk((TESObjectTREE *)this); /*0x4b9a11*/
  return TESForm_FinalizeFormRecord(this); /*0x4b9a18*/
}
