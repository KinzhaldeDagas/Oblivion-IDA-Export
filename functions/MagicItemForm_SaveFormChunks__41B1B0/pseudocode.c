UInt32 __usercall MagicItemForm_SaveFormChunks@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  void *v5; // [esp-8h] [ebp-10h]
  size_t v6; // [esp-4h] [ebp-Ch]
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+4h] [ebp-4h]

  TESForm_InitializeFormRecord(this, a2); /*0x41b1b4*/
  TESFullName_Save((TESForm::ModReferenceList *)this + 3); /*0x41b1be*/
  (*(void (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x38))(this + 1); /*0x41b1ca*/
  LODWORD(v6) = (*(int (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x2C))(this + 1); /*0x41b1d5*/
  v5 = (void *)(*(int (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x28))(this + 1); /*0x41b1df*/
  v3 = (*(int (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x24))(this + 1); /*0x41b1e7*/
  TESForm_PutFormRecordChunkData(v3, v5, v6); /*0x41b1ea*/
  EffectItemList_Save((char *)this + 0x24, v7, v8); /*0x41b1f5*/
  return TESForm_FinalizeFormRecord(this); /*0x41b1fc*/
}
