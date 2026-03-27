UInt32 __thiscall MagicItemForm_SaveFormChunks(TESForm *this)
{
  int v2; // eax
  void *v4; // [esp-8h] [ebp-10h]
  size_t v5; // [esp-4h] [ebp-Ch]
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+4h] [ebp-4h]

  TESForm_InitializeFormRecord(this);
  TESFullName_Save((TESForm::ModReferenceList *)this + 3);
  (*(void (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x38))(this + 1);
  LODWORD(v5) = (*(int (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x2C))(this + 1);
  v4 = (void *)(*(int (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x28))(this + 1);
  v2 = (*(int (__thiscall **)(TESForm *))(*((_DWORD *)this + 6) + 0x24))(this + 1);
  TESForm_PutFormRecordChunkData(v2, v4, v5);
  EffectItemList_Save((char *)this + 0x24, v6, v7);
  return TESForm_FinalizeFormRecord(this);
}
