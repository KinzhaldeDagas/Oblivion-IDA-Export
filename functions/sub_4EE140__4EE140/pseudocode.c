UInt32 __usercall sub_4EE140@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESForm *v3; // esi
  size_t v5; // [esp-28h] [ebp-30h]
  size_t v6; // [esp-1Ch] [ebp-24h]
  size_t v7; // [esp-10h] [ebp-18h]
  size_t v8; // [esp-4h] [ebp-Ch]
  size_t v9; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord(this, a2); /*0x4ee144*/
  TESTexture_Save((int)this + 0x24, 0x4D414E43); /*0x4ee151*/
  TESTexture_Save((int)(this + 1), 0x4D414E44); /*0x4ee15e*/
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4ee175*/
  LODWORD(v8) = 0xA0; /*0x4ee17a*/
  TESForm_PutFormRecordChunkData(0x304D414E, (char *)this + 0x68, v8); /*0x4ee188*/
  LODWORD(v7) = 0x10; /*0x4ee18d*/
  TESForm_PutFormRecordChunkData(0x4D414E46, (char *)this + 0x58, v7); /*0x4ee198*/
  LODWORD(v6) = 0x38; /*0x4ee19d*/
  TESForm_PutFormRecordChunkData(0x4D414E48, (char *)this + 0x110, v6); /*0x4ee1ab*/
  LODWORD(v5) = 0xF; /*0x4ee1b0*/
  TESForm_PutFormRecordChunkData(0x41544144, this + 3, v5); /*0x4ee1bb*/
  v3 = this + 0xB; /*0x4ee1c0*/
  if ( this != (TESForm *)0xFFFFFEF8 ) /*0x4ee1cb*/
  {
    do /*0x4ee1eb*/
    {
      if ( !v3->vtbl ) /*0x4ee1d0*/
        break; /*0x4ee1d4*/
      LODWORD(v9) = 8; /*0x4ee1d6*/
      TESForm_PutFormRecordChunkData(0x4D414E53, v3->vtbl, v9); /*0x4ee1de*/
      v3 = *(TESForm **)&v3->member.type; /*0x4ee1e3*/
    }
    while ( v3 ); /*0x4ee1eb*/
  }
  return TESForm_FinalizeFormRecord(this); /*0x4ee1ef*/
}
