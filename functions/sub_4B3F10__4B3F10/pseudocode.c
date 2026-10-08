UInt32 __usercall sub_4B3F10@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax

  TESForm_InitializeFormRecord(this, a2); /*0x4b3f13*/
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24)); /*0x4b3f1b*/
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b3f32*/
  TESScriptableForm_Save((_DWORD *)this + 0x12); /*0x4b3f3a*/
  v3 = *((_DWORD *)this + 0x15); /*0x4b3f3f*/
  if ( v3 ) /*0x4b3f44*/
    TESForm_PutCurrentChunkData4(0x4D414E53, *(_DWORD *)(v3 + 0xC)); /*0x4b3f4f*/
  return TESForm_FinalizeFormRecord(this); /*0x4b3f59*/
}
