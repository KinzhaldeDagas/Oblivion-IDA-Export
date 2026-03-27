UInt32 __usercall sub_4B99F0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm_InitializeFormRecord(this, a2);
  TESModel_Save((char *)this + 0x24, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  sub_4B2C00((int)this);
  return TESForm_FinalizeFormRecord(this);
}
