UInt32 __usercall sub_4B3F10@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax

  TESForm_InitializeFormRecord(this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24));
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESScriptableForm_Save((_DWORD *)this + 0x12);
  v3 = *((_DWORD *)this + 0x15);
  if ( v3 )
    TESForm_PutCurrentChunkData4(0x4D414E53, *(_DWORD *)(v3 + 0xC));
  return TESForm_FinalizeFormRecord(this);
}
