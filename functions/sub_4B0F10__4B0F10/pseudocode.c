UInt32 __usercall sub_4B0F10@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  int v4; // eax
  int v5; // eax
  size_t v7; // [esp-4h] [ebp-Ch]
  size_t v8; // [esp-4h] [ebp-Ch]
  size_t v9; // [esp-4h] [ebp-Ch]
  int Src; // [esp+4h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  TESModel_Save((void *)(this + 0x30), 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESScriptableForm_Save((_DWORD *)(this + 0x54));
  v4 = *(_DWORD *)(this + 0x7C);
  if ( (v4 & 2) != 0 )
  {
    TESFullName_Save((TESForm::ModReferenceList *)(this + 0x24));
    TESTexture_Save(this + 0x48, 0x4E4F4349);
  }
  else
  {
    *(_DWORD *)(this + 0x7C) = v4 & 0xFFFFFFDF;
    *(_DWORD *)(this + 0x70) = 0xFFFFFFFF;
  }
  LODWORD(v7) = 0x18;
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x70), v7);
  LODWORD(v8) = 4;
  TESForm_PutFormRecordChunkData(0x4D414E46, (void *)(this + 0x88), v8);
  v5 = *(_DWORD *)(this + 0x8C);
  if ( v5 )
  {
    LODWORD(v9) = 4;
    Src = *(_DWORD *)(v5 + 0xC);
    TESForm_PutFormRecordChunkData(0x4D414E53, &Src, v9);
  }
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
