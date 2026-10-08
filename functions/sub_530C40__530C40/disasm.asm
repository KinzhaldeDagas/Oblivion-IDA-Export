0x530C40: push    ebp; Oblivion lazy INFO response-stream reader. Rebuilds a shared list from the last override TESFile plus TESTopicInfo+0x34 record offset. Recognizes only TRDT and NAM1; NAM2 actor notes are runtime-inert.
0x530C41: mov     ebp, esp
0x530C43: push    0FFFFFFFFh
0x530C45: push    offset SEH_530C40
0x530C4A: mov     eax, large fs:0
0x530C50: push    eax
0x530C51: sub     esp, 0Ch
0x530C54: mov     eax, ds:0B30AACh
0x530C59: xor     eax, ebp
0x530C5B: mov     [ebp+var_10], eax
0x530C5E: push    ebx
0x530C5F: push    esi
0x530C60: push    edi
0x530C61: push    eax
0x530C62: lea     eax, [ebp+var_C]
0x530C65: mov     large fs:0, eax
0x530C6B: mov     ebx, ecx
0x530C6D: mov     [ebp+var_18], ebx
0x530C70: cmp     ebx, ds:0B36528h
0x530C76: jz      loc_530D84; Per-topic shared response cache: same TESTopicInfo reuses the current list; switching topics clears and reconstructs it.
0x530C7C: mov     ds:0B36528h, ebx; Only one TESTopicInfo's lazy response stream is cached globally at a time. Switching INFO clears the previous shared cache; runtime MenuTopics/DialogueItems survive because CollectResponses deep-clones before consuming it.
0x530C82: call    TESTopicInfo_ClearSharedResponseCache
0x530C87: push    0FFFFFFFFh; a2
0x530C89: mov     ecx, ebx; this
0x530C8B: call    TESForm_GetOverrideFile; GetOverrideFile(-1) walks the form file list and returns the final/winning override file used for lazy response reread.
0x530C90: xor     esi, esi
0x530C92: cmp     eax, esi
0x530C94: jz      loc_530D84
0x530C9A: cmp     [ebx+34h], esi; Require the stored winning INFO record offset. This makes the runtime response view single-record/patch-local even when the form itself was loaded as a no-reset partial override.
0x530C9D: jz      loc_530D84
0x530CA3: mov     ecx, eax
0x530CA5: call    TESFile_GetThreadSafeFile; Returns the root TESFile on the main thread; on worker threads returns the per-thread clone selected by GetCurrentThreadId via TESFile_GetThreadSafeFileForThread.
0x530CAA: mov     edi, eax
0x530CAC: mov     eax, [ebx+34h]
0x530CAF: push    eax; Buffer
0x530CB0: mov     ecx, edi
0x530CB2: call    TESFIle_JumpToRecord
0x530CB7: test    al, al
0x530CB9: jz      loc_530D84
0x530CBF: mov     ecx, edi
0x530CC1: call    TESFile_GetRecordType
0x530CC6: movzx   ecx, byte ptr [ebx+4]
0x530CCA: lea     ecx, [ecx+ecx*2]
0x530CCD: cmp     al, ds:0B05E00h[ecx*4]
0x530CD4: jnz     loc_530D84
0x530CDA: mov     ecx, edi
0x530CDC: mov     [ebp+var_14], esi; Reset currentResponse to null for every lazy reconstruction. Leading NAM1 is ignored; no inherited response cursor crosses record/invocation boundaries.
0x530CDF: call    TESFile_GetChunkType
0x530CE4: cmp     eax, esi
0x530CE6: jz      loc_530D84
0x530CEC: cmp     eax, 314D414Eh; NAM1 is the only runtime text chunk. If currentResponse exists it replaces that response's text, even after unrelated intervening chunks; repeated NAM1 is last-write-wins. NAM2 is not dispatched.
0x530CF1: jz      short loc_530D3A; NAM1 chunk: attach its text to the most recently parsed TESResponse.
0x530CF3: cmp     eax, 54445254h; Every TRDT allocates a fresh TESResponse, loads its fixed data, appends it, and becomes currentResponse. Serialized response order is preserved.
0x530CF8: jnz     short loc_530D68; TRDT chunk: allocate a 0x18-byte TESResponse, load the fixed 16-byte TRDT payload, and append it before a following NAM1 supplies responseText.
0x530CFA: push    18h; Size
0x530CFC: call    FormHeapAlloc
0x530D01: add     esp, 4
0x530D04: mov     [ebp+var_14], eax
0x530D07: cmp     eax, esi
0x530D09: mov     [ebp+var_4], esi
0x530D0C: jz      short loc_530D17
0x530D0E: mov     ecx, eax; this
0x530D10: call    TESResponse__TESResponse; TESResponse defaults before TRDT overlay: DWORD0=0, DWORD4=50, DWORD8=0, byte12=0; bytes13..15 are not explicitly initialized. Response text starts empty.
0x530D15: mov     esi, eax
0x530D17: push    edi; file
0x530D18: mov     ecx, esi; this
0x530D1A: mov     [ebp+var_4], 0FFFFFFFFh
0x530D21: mov     [ebp+var_14], esi; Install the new TRDT response as currentResponse before appending; subsequent NAM1 attaches until a later TRDT replaces the cursor.
0x530D24: call    TESResponse__LoadTRDT; TRDT loader delegates to GetChunkData with max 16. Size 0 is a successful no-op; sizes 1..16 prefix-overlay constructor state; sizes >16 truncate to 15 bytes and force byte 15 to NUL while logging.
0x530D29: push    esi
0x530D2A: mov     ecx, ebx; this
0x530D2C: call    TESTopicInfo__GetResponseList; Oblivion lazy INFO response-stream reader. Rebuilds a shared list from the last override TESFile plus TESTopicInfo+0x34 record offset. Recognizes only TRDT and NAM1; NAM2 actor notes are runtime-inert.
0x530D31: mov     ecx, eax
0x530D33: call    BSSimpleList_PushBack; Append each TRDT response to the shared response list in encounter order.
0x530D38: jmp     short loc_530D68
0x530D3A: cmp     [ebp+var_14], esi; NAM1 guard: with null currentResponse (for example before the first TRDT) the chunk is ignored.
0x530D3D: jz      short loc_530D68
0x530D3F: mov     esi, [edi+254h]
0x530D45: mov     eax, esi
0x530D47: call    __alloca?
0x530D4C: mov     ebx, esp
0x530D4E: push    esi; a4
0x530D4F: push    ebx; Dst
0x530D50: mov     ecx, edi; a1
0x530D52: call    TESFile_GetChunkData; Read exactly NAM1 chunk length into an equally sized stack buffer, then BSStringT_Set(...,0) calls strlen. No terminator is synthesized; malformed non-NUL or zero-length NAM1 can read beyond the serialized buffer.
0x530D57: mov     ecx, [ebp+var_14]
0x530D5A: push    0; a3
0x530D5C: push    ebx; a2
0x530D5D: add     ecx, 10h; this
0x530D60: call    BSStringT_Set
0x530D65: mov     ebx, [ebp+var_18]
0x530D68: mov     ecx, edi; All non-TRDT/non-NAM1 chunks fall through without clearing currentResponse. This includes NAM2, DATA, QSTI, CTDA/CTDT, links, and script chunks.
0x530D6A: call    TESFile_GetNextChunk
0x530D6F: test    al, al
0x530D71: jz      short loc_530D84
0x530D73: mov     ecx, edi
0x530D75: call    TESFile_GetChunkType
0x530D7A: xor     esi, esi
0x530D7C: cmp     eax, esi
0x530D7E: jnz     loc_530CEC
0x530D84: mov     eax, offset g_cachedTopicInfoResponseList
0x530D89: lea     esp, [ebp-28h]
0x530D8C: mov     ecx, [ebp+var_C]
0x530D8F: mov     large fs:0, ecx
0x530D96: pop     ecx
0x530D97: pop     edi
0x530D98: pop     esi
0x530D99: pop     ebx
0x530D9A: mov     ecx, [ebp+var_10]
0x530D9D: xor     ecx, ebp
0x530D9F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x530DA4: mov     esp, ebp
0x530DA6: pop     ebp
0x530DA7: retn
0x9B8B90: mov     eax, [ebp+var_14]
0x9B8B93: push    eax
0x9B8B94: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B8B99: pop     ecx
0x9B8B9A: retn
0x9B8B9B: mov     edx, [esp-4+arg_4]
0x9B8B9F: lea     eax, [edx+0Ch]
0x9B8BA2: mov     ecx, [edx-1Ch]
0x9B8BA5: xor     ecx, eax
0x9B8BA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8BAC: mov     ecx, [edx-4]
0x9B8BAF: xor     ecx, eax
0x9B8BB1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8BB6: mov     eax, offset stru_AE3028
0x9B8BBB: jmp     ___CxxFrameHandler3
