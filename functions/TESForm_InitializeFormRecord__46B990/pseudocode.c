_DWORD *__usercall TESForm_InitializeFormRecord@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  _DWORD *result; // eax
  TESForm::FormFlags flags; // ecx
  int v5; // [esp+0h] [ebp-4h]

  result = (_DWORD *)((unsigned int)this->member.flags >> 0xE); /*0x46b996*/
  if ( (this->member.flags & 0x4000) == 0 ) /*0x46b99b*/
  {
    MEMORY[0xB33C18] = 0x14; /*0x46b9a6*/
    result = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000014uLL, v5); /*0x46b9b0*/
    MEMORY[0xB33C14] = result; /*0x46b9b5*/
    flags = this->member.flags; /*0x46b9ba*/
    result[2] = flags; /*0x46b9bd*/
    if ( this->member.type != kFormType_TES4 ) /*0x46b9c4*/
      result[2] = flags & 0x30EE0; /*0x46b9cc*/
    *result = *(_DWORD *)(0xC * (unsigned __int8)this->member.type + 0xB05E08); /*0x46b9dd*/
    result[3] = this->member.refID; /*0x46b9e2*/
    result[1] = 0; /*0x46b9e7*/
    result[4] = 0; /*0x46b9ea*/
  }
  return result; /*0x46b9ed*/
}
