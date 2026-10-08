UInt32 __usercall sub_5664D0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  unsigned __int8 *v3; // ecx
  unsigned __int8 *v4; // ecx
  size_t v6; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord(this, a2); /*0x5664d3*/
  LODWORD(v6) = 8; /*0x5664d8*/
  TESForm_PutFormRecordChunkData(0x54444B50, (char *)this + 0x1C, v6); /*0x5664e3*/
  v3 = *((unsigned __int8 **)this + 9); /*0x5664e8*/
  if ( v3 ) /*0x5664f0*/
    sub_569AD0(v3); /*0x5664f2*/
  if ( this != (TESForm *)0xFFFFFFD4 ) /*0x5664fc*/
    sub_569DB0((char *)this + 0x2C); /*0x5664fe*/
  v4 = *((unsigned __int8 **)this + 0xA); /*0x566503*/
  if ( v4 ) /*0x566508*/
    sub_56A0F0(v4); /*0x56650a*/
  if ( this != (TESForm *)0xFFFFFFCC ) /*0x566514*/
    sub_56A450((int **)this + 0xD); /*0x566516*/
  return TESForm_FinalizeFormRecord(this); /*0x56651d*/
}
