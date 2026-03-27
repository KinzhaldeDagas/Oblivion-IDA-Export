UInt32 __usercall sub_4EE140@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm *v3; // esi
  size_t v5; // [esp-28h] [ebp-30h]
  size_t v6; // [esp-1Ch] [ebp-24h]
  size_t v7; // [esp-10h] [ebp-18h]
  size_t v8; // [esp-4h] [ebp-Ch]
  size_t v9; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord(this, a2);
  TESTexture_Save((int)this + 0x24, 0x4D414E43);
  TESTexture_Save((int)(this + 1), 0x4D414E44);
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  LODWORD(v8) = 0xA0;
  TESForm_PutFormRecordChunkData(0x304D414E, (char *)this + 0x68, v8);
  LODWORD(v7) = 0x10;
  TESForm_PutFormRecordChunkData(0x4D414E46, (char *)this + 0x58, v7);
  LODWORD(v6) = 0x38;
  TESForm_PutFormRecordChunkData(0x4D414E48, (char *)this + 0x110, v6);
  LODWORD(v5) = 0xF;
  TESForm_PutFormRecordChunkData(0x41544144, this + 3, v5);
  v3 = this + 0xB;
  if ( this != (TESForm *)0xFFFFFEF8 )
  {
    do
    {
      if ( !v3->vtbl )
        break;
      LODWORD(v9) = 8;
      TESForm_PutFormRecordChunkData(0x4D414E53, v3->vtbl, v9);
      v3 = *(TESForm **)&v3->member.type;
    }
    while ( v3 );
  }
  return TESForm_FinalizeFormRecord(this);
}
