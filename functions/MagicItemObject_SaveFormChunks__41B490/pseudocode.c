UInt32 __usercall MagicItemObject_SaveFormChunks@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  void *v5; // [esp-8h] [ebp-10h]
  size_t v6; // [esp-4h] [ebp-Ch]
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+4h] [ebp-4h]

  TESForm_InitializeFormRecord(this, a2); /*0x41b494*/
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24)); /*0x41b49e*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 9) + 0x38))((char *)this + 0x24); /*0x41b4aa*/
  LODWORD(v6) = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 9) + 0x2C))((char *)this + 0x24); /*0x41b4b5*/
  v5 = (void *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 9) + 0x28))((char *)this + 0x24); /*0x41b4bf*/
  v3 = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 9) + 0x24))((char *)this + 0x24); /*0x41b4c7*/
  TESForm_PutFormRecordChunkData(v3, v5, v6); /*0x41b4ca*/
  EffectItemList_Save(this + 2, v7, v8); /*0x41b4d5*/
  return TESForm_FinalizeFormRecord(this); /*0x41b4dc*/
}
