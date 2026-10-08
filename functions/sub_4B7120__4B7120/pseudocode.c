// Verified TESObjectDOOR save-record vtable hook (slot +0x24 at 0xA44A78): writes standard door chunks, FNAM doorFlags, then emits one TNAM chunk (code 0x4D414E54) per randomTeleport list entry using each linked TESForm.refID.
UInt32 __usercall TESObjectDOOR_SaveForm@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TESForm *v6; // esi
  size_t v8; // [esp-4h] [ebp-10h]
  size_t v9; // [esp-4h] [ebp-10h]
  unsigned int (__thiscall *Src)(BaseFormComponent *, BaseFormComponent *); // [esp+8h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord(this, a2); /*0x4b7125*/
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24)); /*0x4b712d*/
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b7144*/
  TESScriptableForm_Save((_DWORD *)this + 0x12); /*0x4b714c*/
  v3 = *((_DWORD *)this + 0x16); /*0x4b7151*/
  if ( v3 ) /*0x4b7156*/
  {
    LODWORD(v8) = 4; /*0x4b715b*/
    Src = *(unsigned int (__thiscall **)(BaseFormComponent *, BaseFormComponent *))(v3 + 0xC); /*0x4b7167*/
    TESForm_PutFormRecordChunkData(0x4D414E53, &Src, v8); /*0x4b716b*/
  }
  v4 = *((_DWORD *)this + 0x17); /*0x4b7173*/
  if ( v4 ) /*0x4b7178*/
  {
    LODWORD(v8) = 4; /*0x4b717d*/
    Src = *(unsigned int (__thiscall **)(BaseFormComponent *, BaseFormComponent *))(v4 + 0xC); /*0x4b7189*/
    TESForm_PutFormRecordChunkData(0x4D414E41, &Src, v8); /*0x4b718d*/
  }
  v5 = *((_DWORD *)this + 0x18); /*0x4b7195*/
  if ( v5 ) /*0x4b719a*/
  {
    LODWORD(v8) = 4; /*0x4b719f*/
    Src = *(unsigned int (__thiscall **)(BaseFormComponent *, BaseFormComponent *))(v5 + 0xC); /*0x4b71ab*/
    TESForm_PutFormRecordChunkData(0x4D414E42, &Src, v8); /*0x4b71af*/
  }
  LODWORD(v8) = 1; /*0x4b71b7*/
  TESForm_PutFormRecordChunkData(0x4D414E46, (char *)this + 0x64, v8); /*0x4b71c2*/
  v6 = (TESForm *)((char *)this + 0x68); /*0x4b71c7*/
  if ( this != (TESForm *)0xFFFFFF98 ) /*0x4b71cf*/
  {
    do /*0x4b71fe*/
    {
      if ( !*(_DWORD *)&v6->member.type && !v6->vtbl ) /*0x4b71d7*/
        break; /*0x4b71da*/
      LODWORD(v9) = 4; /*0x4b71e1*/
      Src = v6->vtbl->super.CompareTo; /*0x4b71ed*/
      TESForm_PutFormRecordChunkData(0x4D414E54, &Src, v9);// Verified TNAM serialization: reads refID at +0x0C from each randomTeleport list TESForm and writes the 4-byte ID into one TNAM record chunk. /*0x4b71f1*/
      v6 = *(TESForm **)&v6->member.type; /*0x4b71f6*/
    }
    while ( v6 ); /*0x4b71fe*/
  }
  return TESForm_FinalizeFormRecord(this); /*0x4b7207*/
}
