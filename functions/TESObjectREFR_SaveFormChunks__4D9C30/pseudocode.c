// Common SaveFormChunks implementation shared by TESObjectREFR/Character(ACHR)/Creature(ACRE). Writes NAME4, ExtraDataList stream, optional XSCL4, empty ONAM when action bit 0x08 is set, then DATA24. Extra widths/order below are authoritative writer normalization, not xEdit assumptions.
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

  TESForm_InitializeFormRecord((TESForm *)this, a3); /*0x4d9c36*/
  if ( (*(_DWORD *)(this + 2) & 0x20) == 0 ) /*0x4d9c43*/
  {
    HIDWORD(v10) = a4; /*0x4d9c4f*/
    LODWORD(v10) = 4; /*0x4d9c50*/
    Src = *(_DWORD *)(*((_DWORD *)this + 7) + 0xC);// Verified REFR NAME writer source: serializes `TESObjectREFR.member.baseForm->refID` as a four-byte NAME chunk. The embedded CELL/REFR parser resolves that same NAME chunk into its DistantLOD map key. /*0x4d9c5c*/
    TESForm_PutFormRecordChunkData(0x454D414E, &Src, v10); /*0x4d9c60*/
    ExtraDataList_Save((ExtraDataList *)(this + 0x11), a2);// Verified REFR plugin save path calls ExtraDataList_Save before writing the reference DATA chunk, so an ExtraDistantData XLOD normal is included in the normal REFR record. /*0x4d9c6d*/
    if ( 1.0 != *((float *)this + 0xE) ) /*0x4d9c7c*/
      TESForm_PutCurrentChunkData4(0x4C435358, COERCE_INT(*((float *)this + 0xE))); /*0x4d9c8a*/
    if ( ExtraDataList_TestActionFlagBits((ExtraDataList *)(this + 0x11), 8) )// Test ExtraAction bit 0x08 after all extra chunks; when set, append an empty ONAM at 0x4D9CA5. Thus save output can contain XACT carrying bit 0x08 and the redundant semantic ONAM marker. /*0x4d9c96*/
      TESForm_AddChunk(0x4D414E4F); /*0x4d9ca5*/
    v5 = *((_DWORD *)this + 0xC); /*0x4d9cb0*/
    v6 = *((_DWORD *)this + 0xD); /*0x4d9cb3*/
    v13[0] = *(this + 0xB); /*0x4d9cb6*/
    v13[3] = *(this + 8); /*0x4d9cbd*/
    LODWORD(v11) = 0x18; /*0x4d9cc1*/
    v13[1] = v5; /*0x4d9cc7*/
    v7 = *((_DWORD *)this + 9); /*0x4d9ccb*/
    v13[2] = v6; /*0x4d9cce*/
    v8 = *((_DWORD *)this + 0xA); /*0x4d9cd2*/
    v13[4] = v7; /*0x4d9cdb*/
    v13[5] = v8; /*0x4d9cdf*/
    TESForm_PutFormRecordChunkData(0x41544144, v13, v11); /*0x4d9ce3*/
  }
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4d9cf2*/
}
