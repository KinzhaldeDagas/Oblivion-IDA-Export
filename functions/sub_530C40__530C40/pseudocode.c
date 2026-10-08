// Oblivion lazy INFO response-stream reader. Rebuilds a shared list from the last override TESFile plus TESTopicInfo+0x34 record offset. Recognizes only TRDT and NAM1; NAM2 actor notes are runtime-inert.
TESResponseListView *__thiscall TESTopicInfo::GetResponseList(OblivionTopicInfo *this)
{
  OblivionTopicInfo *v1; // ebx
  Data *OverrideFile; // eax
  TESResponse *v3; // esi
  Data *ThreadSafeFile; // edi
  UInt32 i; // eax
  TESResponse *v6; // eax
  TESResponseListView *ResponseList; // eax
  unsigned int length; // esi
  char v10[16]; // [esp+0h] [ebp-28h] BYREF
  OblivionTopicInfo *v11; // [esp+10h] [ebp-18h]
  BSStringT *v12; // [esp+14h] [ebp-14h]
  unsigned int v13; // [esp+24h] [ebp-4h]

  v1 = this; /*0x530c6b*/
  v11 = this; /*0x530c6d*/
  if ( this != (OblivionTopicInfo *)g_cachedTopicInfoForResponses )// Per-topic shared response cache: same TESTopicInfo reuses the current list; switching topics clears and reconstructs it. /*0x530c76*/
  {
    g_cachedTopicInfoForResponses = (int)this;  // Only one TESTopicInfo's lazy response stream is cached globally at a time. Switching INFO clears the previous shared cache; runtime MenuTopics/DialogueItems survive because CollectResponses deep-clones before consuming it. /*0x530c7c*/
    TESTopicInfo_ClearSharedResponseCache(); /*0x530c82*/
    OverrideFile = TESForm_GetOverrideFile(&v1->super, 0xFFFFFFFF);// GetOverrideFile(-1) walks the form file list and returns the final/winning override file used for lazy response reread. /*0x530c8b*/
    v3 = 0; /*0x530c90*/
    if ( OverrideFile ) /*0x530c94*/
    {                                           // Require the stored winning INFO record offset. This makes the runtime response view single-record/patch-local even when the form itself was loaded as a no-reset partial override.
      if ( v1->sourceFileOffset ) /*0x530c9a*/
      {
        ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x530caa*/
        if ( TESFIle_JumpToRecord(ThreadSafeFile, (char *)v1->sourceFileOffset) ) /*0x530cb2*/
        {
          if ( (unsigned __int8)TESFile_GetRecordType(ThreadSafeFile) == *(_BYTE *)(0xC /*0x530cd4*/
                                                                                  * (unsigned __int8)v1->super.member.type
                                                                                  + 0xB05E00) )
          {
            v12 = 0;                            // Reset currentResponse to null for every lazy reconstruction. Leading NAM1 is ignored; no inherited response cursor crosses record/invocation boundaries. /*0x530cdc*/
            for ( i = TESFile_GetChunkType(ThreadSafeFile); i; v3 = 0 ) /*0x530ce6*/
            {                                   // NAM1 is the only runtime text chunk. If currentResponse exists it replaces that response's text, even after unrelated intervening chunks; repeated NAM1 is last-write-wins. NAM2 is not dispatched.
              if ( i == 0x314D414E ) /*0x530cf1*/
              {                                 // NAM1 guard: with null currentResponse (for example before the first TRDT) the chunk is ignored.
                if ( v12 ) /*0x530d3d*/
                {
                  length = ThreadSafeFile->currentChunk.length; /*0x530d3f*/
                  _alloca_(*(int *)v10); /*0x530d47*/
                  TESFile_GetChunkData(ThreadSafeFile, v10, length);// Read exactly NAM1 chunk length into an equally sized stack buffer, then BSStringT_Set(...,0) calls strlen. No terminator is synthesized; malformed non-NUL or zero-length NAM1 can read beyond the serialized buffer. /*0x530d52*/
                  BSStringT_Set(v12 + 2, v10, 0); /*0x530d60*/
                  v1 = v11; /*0x530d65*/
                }
              }
              else if ( i == 0x54445254 )       // Every TRDT allocates a fresh TESResponse, loads its fixed data, appends it, and becomes currentResponse. Serialized response order is preserved. /*0x530cf8*/
              {
                v6 = (TESResponse *)FormHeapAlloc(0x18u); /*0x530cfc*/
                v12 = (BSStringT *)v6; /*0x530d04*/
                v13 = 0; /*0x530d09*/
                if ( v6 ) /*0x530d0c*/
                  v3 = TESResponse::TESResponse(v6); /*0x530d15*/
                v13 = 0xFFFFFFFF; /*0x530d1a*/
                v12 = (BSStringT *)v3;          // Install the new TRDT response as currentResponse before appending; subsequent NAM1 attaches until a later TRDT replaces the cursor. /*0x530d21*/
                TESResponse::LoadTRDT(v3, ThreadSafeFile); /*0x530d24*/
                ResponseList = TESTopicInfo::GetResponseList(v1); /*0x530d2c*/
                BSSimpleList_PushBack(ResponseList, (int)v3);// Append each TRDT response to the shared response list in encounter order. /*0x530d33*/
              }
              if ( !TESFile_GetNextChunk(ThreadSafeFile) )// All non-TRDT/non-NAM1 chunks fall through without clearing currentResponse. This includes NAM2, DATA, QSTI, CTDA/CTDT, links, and script chunks. /*0x530d6a*/
                break; /*0x530d71*/
              i = TESFile_GetChunkType(ThreadSafeFile); /*0x530d75*/
            }
          }
        }
      }
    }
  }
  return (TESResponseListView *)&g_cachedTopicInfoResponseList; /*0x530d8c*/
}
