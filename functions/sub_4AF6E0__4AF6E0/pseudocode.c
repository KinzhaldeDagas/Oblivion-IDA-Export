UInt32 __usercall sub_4AF6E0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  size_t v5; // [esp-4h] [ebp-Ch]
  int Src; // [esp+4h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord(this, a2);
  TESLeveledList_SaveComponent((int)this + 0x24);
  TESScriptableForm_Save((_DWORD *)this + 0xD);
  v3 = *((_DWORD *)this + 0x10);
  if ( v3 )
  {
    LODWORD(v5) = 4;
    Src = *(_DWORD *)(v3 + 0xC);
    TESForm_PutFormRecordChunkData(0x4D414E54, &Src, v5);
  }
  return TESForm_FinalizeFormRecord(this);
}
