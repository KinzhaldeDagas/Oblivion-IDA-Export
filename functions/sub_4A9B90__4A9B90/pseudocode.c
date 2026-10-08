UInt32 __usercall sub_4A9B90@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  void *v3; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2); /*0x4a9b93*/
  LODWORD(v5) = 0x7C; /*0x4a9b98*/
  TESForm_PutFormRecordChunkData(0x44545343, this + 1, v5); /*0x4a9ba3*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *, int))this->vtbl[1].SetFromActiveFile)(this, 1) ) /*0x4a9bb7*/
  {
    v3 = *((void **)this + 0x25); /*0x4a9bbd*/
    if ( v3 ) /*0x4a9bc5*/
    {
      LODWORD(v6) = 0x54; /*0x4a9bc7*/
      TESForm_PutFormRecordChunkData(0x44415343, v3, v6); /*0x4a9bcf*/
      return TESForm_FinalizeFormRecord(this); /*0x4a9bda*/
    }
    *((_BYTE *)this + 0x68) &= ~1u; /*0x4a9bdf*/
  }
  return TESForm_FinalizeFormRecord(this); /*0x4a9bd9*/
}
