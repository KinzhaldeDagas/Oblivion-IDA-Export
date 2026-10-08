UInt32 __usercall sub_4ADEF0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm_InitializeFormRecord(this, a2); /*0x4adef3*/
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24)); /*0x4adefb*/
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4adf12*/
  TESScriptableForm_Save((_DWORD *)this + 0x12); /*0x4adf1a*/
  sub_46E0D0((_DWORD *)this + 0xFFFFFFFD); /*0x4adf22*/
  return TESForm_FinalizeFormRecord(this); /*0x4adf29*/
}
