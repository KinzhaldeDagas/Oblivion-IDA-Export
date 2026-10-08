// Oblivion lazy INFO result-script loader. For a newly requested INFO, initializes a fresh shared temporary Script, opens the winning override record saved by the main INFO loader, and replays its entire chunk stream. Recognized result-script tags are SCHR, SCDA, and SCRO only. SCHD, SCTX, SLSD, SCVR, and SCRV are ignored. Repeated SCHR prefix-overlays ScriptInfo, repeated SCDA replaces compiled storage/size, and every SCRO appends in stream order. No inherited base-script state is reconstructed for a partial override.
TESForm *__thiscall TESTopicInfo::GetResultScript(OblivionTopicInfo *this)
{
  OblivionTopicInfo *v1; // esi
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // ebx
  UInt32 ChunkType; // eax
  int v5; // eax
  int v6; // esi
  unsigned int length; // esi
  int v9[4]; // [esp+0h] [ebp-78h] BYREF
  TESForm v10[3]; // [esp+10h] [ebp-68h] BYREF
  int v11; // [esp+60h] [ebp-18h] BYREF
  OblivionTopicInfo *v12; // [esp+64h] [ebp-14h]
  unsigned int v13; // [esp+74h] [ebp-4h]
  int savedregs; // [esp+78h] [ebp+0h] BYREF

  v1 = this; /*0x5312bb*/
  v12 = this; /*0x5312bd*/
  if ( this != (OblivionTopicInfo *)g_cachedResultScriptTopicInfo ) /*0x5312c6*/
  {
    g_cachedResultScriptTopicInfo = (int)this; /*0x5312cf*/
    Script_Constructor(v10); /*0x5312d5*/
    v13 = 0; /*0x5312e5*/
    Script_CopyFrom(&g_cachedTopicInfoResultScript, (char)&savedregs, (int)v10); /*0x5312e8*/
    TESForm_SetIsLinked(&g_cachedTopicInfoResultScript, 0); /*0x5312f3*/
    TESForm_MakeTemporary(&g_cachedTopicInfoResultScript); /*0x5312fd*/
    OverrideFile = TESForm_GetOverrideFile(&v1->super, 0xFFFFFFFF); /*0x531306*/
    if ( OverrideFile ) /*0x53130d*/
    {
      if ( v1->sourceFileOffset ) /*0x531313*/
      {
        ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x531326*/
        if ( TESFIle_JumpToRecord(ThreadSafeFile, (char *)v1->sourceFileOffset) ) /*0x53132b*/
        {
          if ( (unsigned __int8)TESFile_GetRecordType(ThreadSafeFile) == *(_BYTE *)(0xC /*0x53134d*/
                                                                                  * (unsigned __int8)v1->super.member.type
                                                                                  + 0xB05E00) )
          {
            ChunkType = TESFile_GetChunkType(ThreadSafeFile); /*0x531355*/
            if ( ChunkType ) /*0x53135c*/
            {
              while ( 1 ) /*0x531362*/
              {
                if ( ChunkType == 0x41444353 ) /*0x531367*/
                {
                  length = ThreadSafeFile->currentChunk.length;// SCDA occurrence: use current chunk length, allocate/zero exact stack storage, read all bytes, then replace the shared result Script compiled buffer and compiledSize. A later SCHR may overwrite compiledSize, so serialized stream order remains observable. /*0x5313d6*/
                  _alloca_(v9[0]); /*0x5313de*/
                  _memset((int)v9, 0, length);  // Zero the exact SCDA-sized temporary buffer before reading; Script_SetCompiledData then deep-copies it and updates compiledSize. /*0x5313e9*/
                  TESFile_GetChunkData(ThreadSafeFile, (char *)v9, 0); /*0x5313f6*/
                  Script_SetCompiledData( /*0x531402*/
                    (void **)&g_cachedTopicInfoResultScript.vtbl,
                    (char)&savedregs,
                    (int)v9,
                    length,
                    v9);                        // Replace cached INFO result Script compiled data using this SCDA chunk's exact length. Repeated SCDA therefore last-pointer-wins and rewrites compiledSize.
                }
                else
                {                               // Lazy INFO result-script dispatch checks SCRO then SCHR. A SCHD tag (0x44484353) matches neither and goes directly to next chunk without reading or mutating Script state.
                  if ( ChunkType != 0x4F524353 ) /*0x53136e*/
                  {                             // Only SCHR (0x52484353) is accepted as INFO result-script header. Every occurrence is copied unbounded into shared ScriptInfo; canonical width is 20 bytes. SCHD is not an alias.
                    if ( ChunkType == 0x52484353 ) /*0x531375*/
                    {
                      TESFile_GetChunkData(ThreadSafeFile, g_cachedTopicInfoResultScriptInfo, 0); /*0x531383*/
                      Shared_NoOpVirtual_60D0A0(g_cachedTopicInfoResultScriptInfo); /*0x53138d*/
                    }
                    goto LABEL_17; /*0x531392*/
                  }
                  v5 = FormHeapAlloc(0x10u);    // SCRO occurrence: allocate a 16-byte reference node, bounded-read the UInt32 value into node+8, and append to the shared result Script reference list. Every SCRO appends; no SCRV dispatch exists. /*0x531396*/
                  if ( v5 ) /*0x5313a0*/
                  {
                    *(_DWORD *)v5 = 0; /*0x5313a2*/
                    *(_WORD *)(v5 + 4) = 0; /*0x5313a4*/
                    *(_WORD *)(v5 + 6) = 0; /*0x5313a8*/
                    *(_DWORD *)(v5 + 8) = 0; /*0x5313ac*/
                    *(_DWORD *)(v5 + 0xC) = 0; /*0x5313af*/
                    v6 = v5; /*0x5313b2*/
                  }
                  else
                  {
                    v6 = 0; /*0x5313b6*/
                  }
                  TESFile_GetChunkData4(ThreadSafeFile, (char *)&v11); /*0x5313be*/
                  *(_DWORD *)(v6 + 8) = v11; /*0x5313c6*/
                  BSSimpleList_PushBack(g_cachedTopicInfoResultScriptRefs, v6); /*0x5313cf*/
                }
                v1 = v12; /*0x531409*/
LABEL_17:
                if ( TESFile_GetNextChunk(ThreadSafeFile) )// Continue over the entire winning INFO subrecord stream. Unrecognized chunks—including SCHD and SCTX—are inert and do not terminate result-script scanning. /*0x53140e*/
                {
                  ChunkType = TESFile_GetChunkType(ThreadSafeFile); /*0x531419*/
                  if ( ChunkType ) /*0x531420*/
                    continue; /*0x531420*/
                }
                break; /*0x531420*/
              }
            }
            sub_4FBB60(&g_cachedTopicInfoResultScript, *(float *)&v1); /*0x531426*/
          }
        }
      }
    }
    v13 = 0xFFFFFFFF; /*0x531434*/
    Script_StaticDestructor(v10); /*0x53143b*/
  }
  return &g_cachedTopicInfoResultScript; /*0x531448*/
}
