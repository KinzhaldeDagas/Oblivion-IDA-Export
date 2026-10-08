// Save an Oblivion TESObjectLIGH record. DATA serializes +0x70..+0x87; the separate four-byte FNAM chunk serializes fade_88, and SNAM serializes the linked sound form.
UInt32 __usercall TESObjectLIGH_SaveFormRecord@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  int v4; // eax
  int v5; // eax
  size_t v7; // [esp-4h] [ebp-Ch]
  size_t v8; // [esp-4h] [ebp-Ch]
  size_t v9; // [esp-4h] [ebp-Ch]
  int Src; // [esp+4h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4b0f14*/
  TESModel_Save((void *)(this + 0x30), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b0f2b*/
  TESScriptableForm_Save((_DWORD *)(this + 0x54)); /*0x4b0f33*/
  v4 = *(_DWORD *)(this + 0x7C); /*0x4b0f38*/
  if ( (v4 & 2) != 0 ) /*0x4b0f3d*/
  {
    TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24)); /*0x4b0f42*/
    TESTexture_Save(this + 0x48, 0x4E4F4349); /*0x4b0f4f*/
  }
  else
  {
    *(_DWORD *)(this + 0x7C) = v4 & 0xFFFFFFDF; /*0x4b0f59*/
    *(_DWORD *)(this + 0x70) = 0xFFFFFFFF; /*0x4b0f5c*/
  }
  LODWORD(v7) = 0x18; /*0x4b0f63*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x70), v7); /*0x4b0f6b*/
  LODWORD(v8) = 4; /*0x4b0f70*/
  TESForm_PutFormRecordChunkData(0x4D414E46, (void *)(this + 0x88), v8);// Save TESObjectLIGH::fade_88 as the four-byte Oblivion LIGH FNAM subrecord. /*0x4b0f7e*/
  v5 = *(_DWORD *)(this + 0x8C); /*0x4b0f83*/
  if ( v5 ) /*0x4b0f8e*/
  {
    LODWORD(v9) = 4; /*0x4b0f93*/
    Src = *(_DWORD *)(v5 + 0xC); /*0x4b0f9f*/
    TESForm_PutFormRecordChunkData(0x4D414E53, &Src, v9); /*0x4b0fa3*/
  }
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4b0fb2*/
}
