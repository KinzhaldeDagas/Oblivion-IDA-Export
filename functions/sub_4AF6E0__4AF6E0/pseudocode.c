UInt32 __usercall sub_4AF6E0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  size_t v5; // [esp-4h] [ebp-Ch]
  int Src; // [esp+4h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord(this, a2); /*0x4af6e4*/
  TESLeveledList_SaveComponent((int)this + 0x24); /*0x4af6ec*/
  TESScriptableForm_Save((_DWORD *)this + 0xD); /*0x4af6f4*/
  v3 = *((_DWORD *)this + 0x10); /*0x4af6f9*/
  if ( v3 ) /*0x4af6fe*/
  {
    LODWORD(v5) = 4; /*0x4af703*/
    Src = *(_DWORD *)(v3 + 0xC); /*0x4af70f*/
    TESForm_PutFormRecordChunkData(0x4D414E54, &Src, v5); /*0x4af713*/
  }
  return TESForm_FinalizeFormRecord(this); /*0x4af71d*/
}
