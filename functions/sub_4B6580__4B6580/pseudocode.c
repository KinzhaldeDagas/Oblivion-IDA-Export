UInt32 __usercall sub_4B6580@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  int v4; // eax
  int v5; // eax
  size_t v7; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x34));
  TESModel_Save((void *)(this + 0x40), 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESScriptableForm_Save((_DWORD *)(this + 0x58));
  TESContainer_SaveComponent((_DWORD *)(this + 0x24));
  LODWORD(v7) = 1;
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x78), v7);
  v4 = *(_DWORD *)(this + 0x70);
  if ( v4 )
    TESForm_PutCurrentChunkData4(0x4D414E53, *(_DWORD *)(v4 + 0xC));
  v5 = *(_DWORD *)(this + 0x74);
  if ( v5 )
    TESForm_PutCurrentChunkData4(0x4D414E51, *(_DWORD *)(v5 + 0xC));
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
