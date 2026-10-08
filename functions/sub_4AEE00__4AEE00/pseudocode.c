UInt32 __usercall sub_4AEE00@<eax>(TESForm *this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  size_t v5; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2); /*0x4aee03*/
  TESModel_Save((char *)this + 0x24, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4aee1a*/
  LODWORD(v5) = 0x20; /*0x4aee1f*/
  TESForm_SaveGenericComponents(this, a3, (char *)this + 0x3C, v5); /*0x4aee27*/
  return TESForm_FinalizeFormRecord(this); /*0x4aee2e*/
}
