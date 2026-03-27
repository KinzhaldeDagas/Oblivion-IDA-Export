UInt32 __usercall sub_4A9B90@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  void *v3; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2);
  LODWORD(v5) = 0x7C;
  TESForm_PutFormRecordChunkData(0x44545343, this + 1, v5);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *, int))this->vtbl[1].SetFromActiveFile)(this, 1) )
  {
    v3 = *((void **)this + 0x25);
    if ( v3 )
    {
      LODWORD(v6) = 0x54;
      TESForm_PutFormRecordChunkData(0x44415343, v3, v6);
      return TESForm_FinalizeFormRecord(this);
    }
    *((_BYTE *)this + 0x68) &= ~1u;
  }
  return TESForm_FinalizeFormRecord(this);
}
