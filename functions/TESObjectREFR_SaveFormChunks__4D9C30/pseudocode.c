UInt32 __usercall TESObjectREFR_SaveFormChunks@<eax>(
        TESChildCELL *this@<ecx>,
        int a2@<ebx>,
        char a3@<bpl>,
        int a4@<edi>)
{
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  size_t v10; // [esp+0h] [ebp-28h]
  size_t v11; // [esp+4h] [ebp-24h]
  int Src; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v13[6]; // [esp+10h] [ebp-18h] BYREF

  TESForm_InitializeFormRecord((TESForm *)this, a3);
  if ( (*(_DWORD *)(this + 2) & 0x20) == 0 )
  {
    HIDWORD(v10) = a4;
    LODWORD(v10) = 4;
    Src = *(_DWORD *)(*((_DWORD *)this + 7) + 0xC);
    TESForm_PutFormRecordChunkData(0x454D414E, &Src, v10);
    ExtraDataList_Save((ExtraDataList *)(this + 0x11), a2);
    if ( 1.0 != *((float *)this + 0xE) )
      TESForm_PutCurrentChunkData4(0x4C435358, COERCE_INT(*((float *)this + 0xE)));
    if ( sub_41F830((ExtraDataList *)(this + 0x11), 8) )
      sub_46BA10(0x4D414E4F);
    v5 = *((_DWORD *)this + 0xC);
    v6 = *((_DWORD *)this + 0xD);
    v13[0] = *(this + 0xB);
    v13[3] = *(this + 8);
    LODWORD(v11) = 0x18;
    v13[1] = v5;
    v7 = *((_DWORD *)this + 9);
    v13[2] = v6;
    v8 = *((_DWORD *)this + 0xA);
    v13[4] = v7;
    v13[5] = v8;
    TESForm_PutFormRecordChunkData(0x41544144, v13, v11);
  }
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
