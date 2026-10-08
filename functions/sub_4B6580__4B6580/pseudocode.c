UInt32 __usercall sub_4B6580@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  int v4; // eax
  int v5; // eax
  size_t v7; // [esp-4h] [ebp-8h]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4b6583*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x34)); /*0x4b658b*/
  TESModel_Save((void *)(this + 0x40), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x4b65a2*/
  TESScriptableForm_Save((_DWORD *)(this + 0x58)); /*0x4b65aa*/
  TESContainer_SaveComponent((_DWORD *)(this + 0x24)); /*0x4b65b2*/
  LODWORD(v7) = 1; /*0x4b65b7*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x78), v7); /*0x4b65bf*/
  v4 = *(_DWORD *)(this + 0x70); /*0x4b65c4*/
  if ( v4 ) /*0x4b65c9*/
    TESForm_PutCurrentChunkData4(0x4D414E53, *(_DWORD *)(v4 + 0xC)); /*0x4b65d4*/
  v5 = *(_DWORD *)(this + 0x74); /*0x4b65dc*/
  if ( v5 ) /*0x4b65e1*/
    TESForm_PutCurrentChunkData4(0x4D414E51, *(_DWORD *)(v5 + 0xC)); /*0x4b65ec*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4b65f6*/
}
