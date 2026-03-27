UInt32 __usercall sub_5664D0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  unsigned __int8 *v3; // ecx
  unsigned __int8 *v4; // ecx
  size_t v6; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2);
  LODWORD(v6) = 8;
  TESForm_PutFormRecordChunkData(0x54444B50, (char *)this + 0x1C, v6);
  v3 = *((unsigned __int8 **)this + 9);
  if ( v3 )
    sub_569AD0(v3);
  if ( this != (TESForm *)0xFFFFFFD4 )
    sub_569DB0((char *)this + 0x2C);
  v4 = *((unsigned __int8 **)this + 0xA);
  if ( v4 )
    sub_56A0F0(v4);
  if ( this != (TESForm *)0xFFFFFFCC )
    sub_56A450((int **)this + 0xD);
  return TESForm_FinalizeFormRecord(this);
}
