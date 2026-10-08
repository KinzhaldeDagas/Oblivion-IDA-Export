UInt32 __usercall sub_4C91C0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm *v3; // esi
  size_t v5; // [esp-10h] [ebp-18h]
  size_t v6; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord(this, a2); /*0x4c91c4*/
  TESTexture_Save((int)(this + 1), 0x4E4F4349); /*0x4c91d1*/
  LODWORD(v6) = 3; /*0x4c91d6*/
  TESForm_PutFormRecordChunkData(0x4D414E48, (char *)this + 0x28, v6); /*0x4c91e1*/
  LODWORD(v5) = 1; /*0x4c91e6*/
  TESForm_PutFormRecordChunkData(0x4D414E53, (char *)this + 0x2B, v5); /*0x4c91f1*/
  v3 = (TESForm *)((char *)this + 0x2C); /*0x4c91f6*/
  if ( this != (TESForm *)0xFFFFFFD4 ) /*0x4c91fe*/
  {
    do /*0x4c9223*/
    {
      if ( !*(_DWORD *)&v3->member.type && !v3->vtbl ) /*0x4c9206*/
        break; /*0x4c9209*/
      TESForm_PutCurrentChunkData4(0x4D414E47, (int)v3->vtbl->super.CompareTo); /*0x4c9216*/
      v3 = *(TESForm **)&v3->member.type; /*0x4c921b*/
    }
    while ( v3 ); /*0x4c9223*/
  }
  return TESForm_FinalizeFormRecord(this); /*0x4c9227*/
}
