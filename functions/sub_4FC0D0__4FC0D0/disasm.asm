0x4FC0D0: push    ebp; Authoritative Oblivion SCPT runtime loader. Stream-replays every chunk: SCHR and SCDA mutate singleton fields (later chunks win); SLSD and SCRO/SCRV append; SCVR names only the latest SLSD created during this call. Unlike TESCS, Oblivion has no SCTX handler. SCHD is also absent.
0x4FC0D1: mov     ebp, esp
0x4FC0D3: push    0FFFFFFFFh
0x4FC0D5: push    offset SEH_4FC0D0
0x4FC0DA: mov     eax, large fs:0
0x4FC0E0: push    eax
0x4FC0E1: sub     esp, 14h
0x4FC0E4: mov     eax, ds:0B30AACh
0x4FC0E9: xor     eax, ebp
0x4FC0EB: mov     [ebp+var_10], eax
0x4FC0EE: push    ebx
0x4FC0EF: push    esi
0x4FC0F0: push    edi
0x4FC0F1: push    eax
0x4FC0F2: lea     eax, [ebp+var_C]
0x4FC0F5: mov     large fs:0, eax
0x4FC0FB: mov     ebx, ecx
0x4FC0FD: mov     [ebp+var_14], ebx
0x4FC100: mov     esi, [ebp+a1]
0x4FC103: mov     ecx, esi
0x4FC105: mov     [ebp+var_18], 0; Per-call local-variable cursor starts null. A partial SCVR cannot name an inherited/base variable; leading SCVR is ignored until this invocation sees SLSD.
0x4FC10C: call    TESFile_GetRecordType
0x4FC111: cmp     eax, 0Dh
0x4FC114: jz      short loc_4FC11D
0x4FC116: xor     al, al
0x4FC118: jmp     loc_4FC33F
0x4FC11D: push    ebx
0x4FC11E: mov     ecx, esi
0x4FC120: call    TESFile_InitializeFormFromRecord; Header-only form initialization (type/flags/FormID/source file). Derived Script fields are not cleared here; partial preservation is decided by TESDataHandler_LoadFormRecord before this call.
0x4FC125: mov     ecx, esi
0x4FC127: call    TESFile_GetChunkType
0x4FC12C: mov     edi, eax
0x4FC12E: test    edi, edi
0x4FC130: jz      loc_4FC319
0x4FC136: cmp     edi, 4F524353h
0x4FC13C: jg      loc_4FC23D; Dispatch proof: handled SCPT chunks are EDID, SCDA, SLSD, RNAM, SCRO, SCRV, SCVR, SCHR. There is no comparison for SCHD or SCTX, so both are skipped by GetNextChunk without materialization.
0x4FC142: jz      loc_4FC25D
0x4FC148: cmp     edi, 44534C53h
0x4FC14E: jg      loc_4FC221
0x4FC154: jz      loc_4FC1E2
0x4FC15A: cmp     edi, 41444353h
0x4FC160: jz      short loc_4FC19A
0x4FC162: cmp     edi, 44494445h
0x4FC168: jnz     loc_4FC2FD
0x4FC16E: mov     eax, [esi+254h]
0x4FC174: call    __alloca?
0x4FC179: mov     edi, esp
0x4FC17B: push    200h; a4
0x4FC180: push    edi; Dst
0x4FC181: mov     ecx, esi; a1
0x4FC183: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4FC188: mov     eax, [ebx]
0x4FC18A: mov     edx, [eax+0D8h]
0x4FC190: push    edi
0x4FC191: mov     ecx, ebx
0x4FC193: call    edx
0x4FC195: jmp     loc_4FC2FD
0x4FC19A: mov     edi, [esi+254h]; SCDA uses the current chunk's full UInt32 length as the allocation/copy size. There is no agreement check against SCHR.dataLength and no upper bound before allocation.
0x4FC1A0: push    1; Even length zero reaches FormHeap allocation; MemoryHeap_Allocate promotes sizes below 8 to 8 on the initialized heap. Thus zero-length SCDA can install a non-null active data pointer.
0x4FC1A2: push    edi
0x4FC1A3: mov     ecx, offset FormHeap
0x4FC1A8: call    j_MemoryHeap_Alloc
0x4FC1AD: push    edi
0x4FC1AE: mov     ebx, eax
0x4FC1B0: push    0
0x4FC1B2: push    ebx
0x4FC1B3: call    __memset
0x4FC1B8: mov     eax, [ebp+var_14]
0x4FC1BB: push    edi
0x4FC1BC: push    0
0x4FC1BE: push    ebx
0x4FC1BF: mov     [eax+30h], ebx; Install new SCDA pointer directly at Script+0x30 before reading. Every repeated SCDA replaces this pointer; the replaced allocation is not freed at this site (last pointer wins, prior pointer leaks).
0x4FC1C2: call    __memset
0x4FC1C7: mov     ecx, [ebp+var_14]
0x4FC1CA: mov     edx, [ecx+30h]
0x4FC1CD: add     esp, 18h
0x4FC1D0: push    0; a4
0x4FC1D2: push    edx; Dst
0x4FC1D3: mov     ecx, esi; a1
0x4FC1D5: call    TESFile_GetChunkData; Copy the entire SCDA payload into the just-allocated buffer. Allocation/read failures are not checked here; oversized/failed allocations can fault.
0x4FC1DA: mov     ebx, [ebp+var_14]
0x4FC1DD: jmp     loc_4FC2FD
0x4FC1E2: push    20h ; ' '; Each SLSD allocates a new 0x20-byte VariableInfo and makes it the per-call current variable. Repeated SLSD never replaces/deduplicates an earlier entry.
0x4FC1E4: call    FormHeapAlloc
0x4FC1E9: add     esp, 4
0x4FC1EC: mov     [ebp+var_18], eax
0x4FC1EF: xor     edi, edi
0x4FC1F1: cmp     eax, edi
0x4FC1F3: mov     [ebp+var_4], edi
0x4FC1F6: jz      short loc_4FC201
0x4FC1F8: mov     ecx, eax
0x4FC1FA: call    ScriptVariableInfo_Constructor; Construct 0x20-byte Script VariableInfo: initializes selected runtime fields and empty BSString at +0x18, but does not guarantee every SLSD data byte is initialized before a short/zero chunk read.
0x4FC1FF: mov     edi, eax
0x4FC201: push    esi
0x4FC202: mov     ecx, edi
0x4FC204: mov     [ebp+var_4], 0FFFFFFFFh
0x4FC20B: mov     [ebp+var_18], edi
0x4FC20E: call    ScriptVariableInfo_LoadSLSD; SLSD load calls GetChunkData(max=0x18). Size 0 performs no write; short payloads leave unread constructor/heap state; exactly 24 copies all bytes; >24 logs and truncates to 23 payload bytes plus a forced NUL at byte 23.
0x4FC213: push    edi
0x4FC214: lea     ecx, [ebx+48h]
0x4FC217: call    BSSimpleList_PushBack; Append non-null VariableInfo to Script+0x48 with BSSimpleList_PushBack, preserving encounter order. In partial loads this appends to the inherited/base list because list clearing was bypassed.
0x4FC21C: jmp     loc_4FC2FD
0x4FC221: cmp     edi, 4D414E52h
0x4FC227: jnz     loc_4FC2FD
0x4FC22D: lea     eax, [ebp+var_20]
0x4FC230: push    eax
0x4FC231: mov     ecx, esi
0x4FC233: call    TESFile_GetChunkData4; RNAM is read through the 4-byte bounded helper into a stack temporary and then discarded; it does not change persistent Script state in Oblivion.
0x4FC238: jmp     loc_4FC2FD
0x4FC23D: cmp     edi, 52484353h
0x4FC243: jz      loc_4FC2F0; Runtime cases here are SCHR, SCVR, and SCRV. SCTX has no case and is ignored by Oblivion runtime loading.
0x4FC249: cmp     edi, 52564353h
0x4FC24F: jz      short loc_4FC2C0
0x4FC251: cmp     edi, 56524353h
0x4FC257: jnz     loc_4FC2FD
0x4FC25D: push    10h; Every SCRO or SCRV allocates a fresh 0x10-byte RefVariable entry; there is no deduplication or replacement.
0x4FC25F: call    FormHeapAlloc
0x4FC264: xor     ebx, ebx
0x4FC266: add     esp, 4
0x4FC269: cmp     eax, ebx
0x4FC26B: jz      short loc_4FC27F
0x4FC26D: mov     [eax], ebx
0x4FC26F: mov     [eax+4], bx
0x4FC273: mov     [eax+6], bx
0x4FC277: mov     [eax+8], ebx
0x4FC27A: mov     [eax+0Ch], ebx
0x4FC27D: mov     ebx, eax
0x4FC27F: lea     ecx, [ebp+var_1C]
0x4FC282: push    ecx
0x4FC283: mov     ecx, esi
0x4FC285: call    TESFile_GetChunkData4; SCRO/SCRV payload uses GetChunkData(max=4) without size validation. Size 0 leaves the stack value uninitialized; sizes 1..3 overwrite only a prefix; size 4 is exact; >4 becomes three payload bytes plus zero high byte and logs truncation.
0x4FC28A: cmp     edi, 4F524353h
0x4FC290: jnz     short loc_4FC2A9
0x4FC292: mov     edx, [ebp+var_1C]
0x4FC295: mov     ecx, [ebp+var_14]
0x4FC298: push    ebx
0x4FC299: add     ecx, 40h ; '@'
0x4FC29C: mov     [ebx+8], edx
0x4FC29F: call    BSSimpleList_PushBack; SCRO stores the decoded/malformed 4-byte temporary at RefVariable+8 and appends it to Script+0x40 in encounter order. Partial loads append to inherited references.
0x4FC2A4: mov     ebx, [ebp+var_14]
0x4FC2A7: jmp     short loc_4FC2FD
0x4FC2A9: mov     eax, [ebp+var_1C]
0x4FC2AC: mov     ecx, [ebp+var_14]
0x4FC2AF: push    ebx
0x4FC2B0: add     ecx, 40h ; '@'
0x4FC2B3: mov     [ebx+0Ch], eax; SCRV stores the decoded/malformed 4-byte temporary at RefVariable+0x0C and appends it to the same ordered reference list. SCRO and SCRV share one index sequence.
0x4FC2B6: call    BSSimpleList_PushBack
0x4FC2BB: mov     ebx, [ebp+var_14]
0x4FC2BE: jmp     short loc_4FC2FD
0x4FC2C0: cmp     [ebp+var_18], 0; SCVR is acted on only when this loader invocation has already seen an SLSD. The cursor is not consumed after one SCVR, so repeated SCVR chunks keep targeting the same latest variable; a later SLSD retargets it.
0x4FC2C4: jz      short loc_4FC2FD
0x4FC2C6: mov     eax, [esi+254h]
0x4FC2CC: call    __alloca?
0x4FC2D1: mov     edi, esp
0x4FC2D3: push    200h; a4
0x4FC2D8: push    edi; Dst
0x4FC2D9: mov     ecx, esi; a1
0x4FC2DB: call    TESFile_GetChunkData; SCVR calls GetChunkData(max=0x200) into alloca(chunkLength). Size 0 supplies no initialized string; <=512 copies exact bytes and relies on payload NUL termination; >512 copies 511 bytes and forces byte 511 to NUL.
0x4FC2E0: mov     ecx, [ebp+var_18]
0x4FC2E3: push    0; a3
0x4FC2E5: push    edi; a2
0x4FC2E6: add     ecx, 18h; this
0x4FC2E9: call    BSStringT_Set; Set name on the latest per-call VariableInfo. BSStringT_Set replaces/frees its previous name, so repeated SCVR is last-name-wins.
0x4FC2EE: jmp     short loc_4FC2FD
0x4FC2F0: push    0; SCHR is copied with max=0 directly into Script+0x18. Size 0 is a no-op; a short SCHR overlays only its prefix (retaining prior tail on partial loads); repeated chunks overwrite in order; oversized chunks spill past ScriptInfo into following Script fields.
0x4FC2F2: lea     ecx, [ebx+18h]
0x4FC2F5: push    ecx; Dst
0x4FC2F6: mov     ecx, esi; a1
0x4FC2F8: call    TESFile_GetChunkData; Each SCHR copies into the same ScriptInfo storage at Script+0x18; later SCHR overwrites earlier header bytes.
0x4FC2FD: mov     ecx, esi
0x4FC2FF: call    TESFile_GetNextChunk
0x4FC304: test    al, al
0x4FC306: jz      short loc_4FC319
0x4FC308: mov     ecx, esi
0x4FC30A: call    TESFile_GetChunkType
0x4FC30F: mov     edi, eax
0x4FC311: test    edi, edi
0x4FC313: jnz     loc_4FC136
0x4FC319: cmp     dword ptr [ebx+30h], 0; Compiled-state test is only Script.data != NULL after replay. SCTX is irrelevant. Missing SCDA on a partial record retains a base pointer and avoids the warning; zero-length SCDA can also be non-null because allocation still occurs.
0x4FC31D: jnz     short loc_4FC33D
0x4FC31F: mov     edx, [ebx]
0x4FC321: mov     eax, [edx+0D4h]
0x4FC327: add     esi, 1Ch
0x4FC32A: push    esi
0x4FC32B: mov     ecx, ebx
0x4FC32D: call    eax
0x4FC32F: push    eax; ArgList
0x4FC330: push    offset aScriptSInFileS; "Script '%s' in file '%s' has not been c"...
0x4FC335: call    PrintError
0x4FC33A: add     esp, 0Ch
0x4FC33D: mov     al, 1
0x4FC33F: lea     esp, [ebp-30h]
0x4FC342: mov     ecx, [ebp+var_C]
0x4FC345: mov     large fs:0, ecx
0x4FC34C: pop     ecx
0x4FC34D: pop     edi
0x4FC34E: pop     esi
0x4FC34F: pop     ebx
0x4FC350: mov     ecx, [ebp+var_10]
0x4FC353: xor     ecx, ebp
0x4FC355: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FC35A: mov     esp, ebp
0x4FC35C: pop     ebp
0x4FC35D: retn    4
0x9B6BD0: mov     eax, [ebp+var_18]
0x9B6BD3: push    eax
0x9B6BD4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B6BD9: pop     ecx
0x9B6BDA: retn
0x9B6BDB: mov     edx, [esp-4+arg_4]
0x9B6BDF: lea     eax, [edx+0Ch]
0x9B6BE2: mov     ecx, [edx-24h]
0x9B6BE5: xor     ecx, eax
0x9B6BE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6BEC: mov     ecx, [edx-4]
0x9B6BEF: xor     ecx, eax
0x9B6BF1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6BF6: mov     eax, offset stru_AE1950
0x9B6BFB: jmp     ___CxxFrameHandler3
