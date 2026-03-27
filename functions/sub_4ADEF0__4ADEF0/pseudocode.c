UInt32 __usercall sub_4ADEF0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm_InitializeFormRecord(this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24));
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESScriptableForm_Save((_DWORD *)this + 0x12);
  sub_46E0D0((_DWORD *)this + 0xFFFFFFFD);
  return TESForm_FinalizeFormRecord(this);
}
