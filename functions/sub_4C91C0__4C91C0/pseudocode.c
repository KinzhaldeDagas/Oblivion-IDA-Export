UInt32 __usercall sub_4C91C0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm *v3; // esi
  size_t v5; // [esp-10h] [ebp-18h]
  size_t v6; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord(this, a2);
  TESTexture_Save((int)(this + 1), 0x4E4F4349);
  LODWORD(v6) = 3;
  TESForm_PutFormRecordChunkData(0x4D414E48, (char *)this + 0x28, v6);
  LODWORD(v5) = 1;
  TESForm_PutFormRecordChunkData(0x4D414E53, (char *)this + 0x2B, v5);
  v3 = (TESForm *)((char *)this + 0x2C);
  if ( this != (TESForm *)0xFFFFFFD4 )
  {
    do
    {
      if ( !*(_DWORD *)&v3->member.type && !v3->vtbl )
        break;
      TESForm_PutCurrentChunkData4(0x4D414E47, (int)v3->vtbl->super.CompareTo);
      v3 = *(TESForm **)&v3->member.type;
    }
    while ( v3 );
  }
  return TESForm_FinalizeFormRecord(this);
}
