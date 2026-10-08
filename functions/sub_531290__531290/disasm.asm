0x531290: push    ebp; Oblivion lazy INFO result-script loader. For a newly requested INFO, initializes a fresh shared temporary Script, opens the winning override record saved by the main INFO loader, and replays its entire chunk stream. Recognized result-script tags are SCHR, SCDA, and SCRO only. SCHD, SCTX, SLSD, SCVR, and SCRV are ignored. Repeated SCHR prefix-overlays ScriptInfo, repeated SCDA replaces compiled storage/size, and every SCRO appends in stream order. No inherited base-script state is reconstructed for a partial override.
0x531291: mov     ebp, esp
0x531293: push    0FFFFFFFFh
0x531295: push    offset SEH_531290
0x53129A: mov     eax, large fs:0
0x5312A0: push    eax
0x5312A1: sub     esp, 5Ch
0x5312A4: mov     eax, ds:0B30AACh
0x5312A9: xor     eax, ebp
0x5312AB: mov     [ebp+var_10], eax
0x5312AE: push    ebx
0x5312AF: push    esi
0x5312B0: push    edi
0x5312B1: push    eax
0x5312B2: lea     eax, [ebp+var_C]
0x5312B5: mov     large fs:0, eax
0x5312BB: mov     esi, ecx
0x5312BD: mov     [ebp+var_14], esi
0x5312C0: cmp     esi, ds:0B3652Ch
0x5312C6: jz      loc_531440
0x5312CC: lea     ecx, [ebp+var_68]
0x5312CF: mov     ds:0B3652Ch, esi
0x5312D5: call    Script_Constructor
0x5312DA: lea     eax, [ebp+var_68]
0x5312DD: xor     edi, edi
0x5312DF: push    eax
0x5312E0: mov     ecx, offset g_cachedTopicInfoResultScript
0x5312E5: mov     [ebp+var_4], edi
0x5312E8: call    Script_CopyFrom; Deep-copy Script state from another Script: copy the five ScriptInfo dwords, replace compiled data through Script_SetCompiledData, copy variables/references/source text, and mirror linked state. TESTopicInfo::GetResultScript uses this to reset its shared cache from a freshly constructed default Script before scanning the winning INFO record.
0x5312ED: push    edi; a2
0x5312EE: mov     ecx, offset g_cachedTopicInfoResultScript; this
0x5312F3: call    TESForm_SetIsLinked
0x5312F8: mov     ecx, offset g_cachedTopicInfoResultScript; this
0x5312FD: call    TESForm_MakeTemporary
0x531302: push    0FFFFFFFFh; a2
0x531304: mov     ecx, esi; this
0x531306: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x53130B: cmp     eax, edi
0x53130D: jz      loc_531431
0x531313: cmp     [esi+34h], edi
0x531316: jz      loc_531431
0x53131C: mov     ecx, eax
0x53131E: call    TESFile_GetThreadSafeFile; Returns the root TESFile on the main thread; on worker threads returns the per-thread clone selected by GetCurrentThreadId via TESFile_GetThreadSafeFileForThread.
0x531323: mov     ecx, [esi+34h]
0x531326: mov     ebx, eax
0x531328: push    ecx; Buffer
0x531329: mov     ecx, ebx
0x53132B: call    TESFIle_JumpToRecord
0x531330: test    al, al
0x531332: jz      loc_531431
0x531338: mov     ecx, ebx
0x53133A: call    TESFile_GetRecordType
0x53133F: movzx   ecx, byte ptr [esi+4]
0x531343: lea     edx, [ecx+ecx*2]
0x531346: cmp     al, ds:0B05E00h[edx*4]
0x53134D: jnz     loc_531431
0x531353: mov     ecx, ebx
0x531355: call    TESFile_GetChunkType
0x53135A: cmp     eax, edi
0x53135C: jz      loc_531426
0x531362: cmp     eax, 41444353h
0x531367: jz      short loc_5313D6
0x531369: cmp     eax, 4F524353h
0x53136E: jz      short loc_531394; Lazy INFO result-script dispatch checks SCRO then SCHR. A SCHD tag (0x44484353) matches neither and goes directly to next chunk without reading or mutating Script state.
0x531370: cmp     eax, 52484353h
0x531375: jnz     loc_53140C; Only SCHR (0x52484353) is accepted as INFO result-script header. Every occurrence is copied unbounded into shared ScriptInfo; canonical width is 20 bytes. SCHD is not an alias.
0x53137B: push    edi; a4
0x53137C: push    offset g_cachedTopicInfoResultScriptInfo; Dst
0x531381: mov     ecx, ebx; a1
0x531383: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x531388: mov     ecx, offset g_cachedTopicInfoResultScriptInfo; this
0x53138D: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x531392: jmp     short loc_53140C
0x531394: push    10h; Size
0x531396: call    FormHeapAlloc; SCRO occurrence: allocate a 16-byte reference node, bounded-read the UInt32 value into node+8, and append to the shared result Script reference list. Every SCRO appends; no SCRV dispatch exists.
0x53139B: add     esp, 4
0x53139E: cmp     eax, edi
0x5313A0: jz      short loc_5313B6
0x5313A2: mov     [eax], edi
0x5313A4: mov     [eax+4], di
0x5313A8: mov     [eax+6], di
0x5313AC: mov     [eax+8], edi
0x5313AF: mov     [eax+0Ch], edi
0x5313B2: mov     esi, eax
0x5313B4: jmp     short loc_5313B8
0x5313B6: xor     esi, esi
0x5313B8: lea     eax, [ebp+var_18]
0x5313BB: push    eax
0x5313BC: mov     ecx, ebx
0x5313BE: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x5313C3: mov     ecx, [ebp+var_18]
0x5313C6: mov     [esi+8], ecx
0x5313C9: push    esi
0x5313CA: mov     ecx, offset g_cachedTopicInfoResultScriptRefs
0x5313CF: call    BSSimpleList_PushBack
0x5313D4: jmp     short loc_531409
0x5313D6: mov     esi, [ebx+254h]; SCDA occurrence: use current chunk length, allocate/zero exact stack storage, read all bytes, then replace the shared result Script compiled buffer and compiledSize. A later SCHR may overwrite compiledSize, so serialized stream order remains observable.
0x5313DC: mov     eax, esi
0x5313DE: call    __alloca?
0x5313E3: mov     edi, esp
0x5313E5: push    esi
0x5313E6: push    0
0x5313E8: push    edi
0x5313E9: call    __memset; Zero the exact SCDA-sized temporary buffer before reading; Script_SetCompiledData then deep-copies it and updates compiledSize.
0x5313EE: add     esp, 0Ch
0x5313F1: push    0; a4
0x5313F3: push    edi; Dst
0x5313F4: mov     ecx, ebx; a1
0x5313F6: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x5313FB: push    edi; Src
0x5313FC: push    esi; int
0x5313FD: mov     ecx, offset g_cachedTopicInfoResultScript
0x531402: call    Script_SetCompiledData; Replace cached INFO result Script compiled data using this SCDA chunk's exact length. Repeated SCDA therefore last-pointer-wins and rewrites compiledSize.
0x531407: xor     edi, edi
0x531409: mov     esi, [ebp+var_14]
0x53140C: mov     ecx, ebx
0x53140E: call    TESFile_GetNextChunk; Continue over the entire winning INFO subrecord stream. Unrecognized chunks—including SCHD and SCTX—are inert and do not terminate result-script scanning.
0x531413: test    al, al
0x531415: jz      short loc_531426
0x531417: mov     ecx, ebx
0x531419: call    TESFile_GetChunkType
0x53141E: cmp     eax, edi
0x531420: jnz     loc_531362
0x531426: push    esi
0x531427: mov     ecx, offset g_cachedTopicInfoResultScript
0x53142C: call    sub_4FBB60
0x531431: lea     ecx, [ebp+var_68]
0x531434: mov     [ebp+var_4], 0FFFFFFFFh
0x53143B: call    Script_StaticDestructor
0x531440: mov     eax, offset g_cachedTopicInfoResultScript
0x531445: lea     esp, [ebp-78h]
0x531448: mov     ecx, [ebp+var_C]
0x53144B: mov     large fs:0, ecx
0x531452: pop     ecx
0x531453: pop     edi
0x531454: pop     esi
0x531455: pop     ebx
0x531456: mov     ecx, [ebp+var_10]
0x531459: xor     ecx, ebp
0x53145B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x531460: mov     esp, ebp
0x531462: pop     ebp
0x531463: retn
0x9B8BF0: lea     ecx, [ebp+var_68]
0x9B8BF3: jmp     Script_StaticDestructor
0x9B8BF8: mov     edx, [esp-4+arg_4]
0x9B8BFC: lea     eax, [edx+0Ch]
0x9B8BFF: mov     ecx, [edx-6Ch]
0x9B8C02: xor     ecx, eax
0x9B8C04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8C09: mov     ecx, [edx-4]
0x9B8C0C: xor     ecx, eax
0x9B8C0E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8C13: mov     eax, offset stru_AE3080
0x9B8C18: jmp     ___CxxFrameHandler3
