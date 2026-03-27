UInt32 __thiscall MagicItemObject_SaveFormChunks(TESForm *this)
{
  int v2; // eax
  void *v4; // [esp-8h] [ebp-10h]
  size_t v5; // [esp-4h] [ebp-Ch]
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+4h] [ebp-4h]

  TESForm_InitializeFormRecord(this);
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24));
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 9) + 0x38))((char *)this + 0x24);
  LODWORD(v5) = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 9) + 0x2C))((char *)this + 0x24);
  v4 = (void *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 9) + 0x28))((char *)this + 0x24);
  v2 = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 9) + 0x24))((char *)this + 0x24);
  TESForm_PutFormRecordChunkData(v2, v4, v5);
  EffectItemList_Save(this + 2, v6, v7);
  return TESForm_FinalizeFormRecord(this);
}
