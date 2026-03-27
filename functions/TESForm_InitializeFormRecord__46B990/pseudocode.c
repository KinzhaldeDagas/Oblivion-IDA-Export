_DWORD *__usercall TESForm_InitializeFormRecord@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  _DWORD *result; // eax
  TESForm::FormFlags flags; // ecx
  int v5; // [esp+0h] [ebp-4h]

  result = (_DWORD *)((unsigned int)this->member.flags >> 0xE);
  if ( (this->member.flags & 0x4000) == 0 )
  {
    TESForm_Static_FormRecordSize = 0x14;
    result = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000014uLL, v5);
    TESForm_Static_FormRecordBuffer = result;
    flags = this->member.flags;
    result[2] = flags;
    if ( this->member.type != kFormType_TES4 )
      result[2] = flags & 0x30EE0;
    *result = *(_DWORD *)(0xC * (unsigned __int8)this->member.type + 0xB05E08);
    result[3] = this->member.refID;
    result[1] = 0;
    result[4] = 0;
  }
  return result;
}
