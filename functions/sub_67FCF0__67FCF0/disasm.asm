0x67FCF0: push    0FFFFFFFFh; Verified lazy initialization of LowPathSearchGlobals.doorLinkMap: if null, allocates a 0x10-byte outer NiTPointerMap<TESForm*,NiTPointerMap<TESForm*,BSSimpleList<AStarWorldNode*>*>*> with 0xBF buckets. Called from WinMain and after map teardown during save/load reconciliation.
0x67FCF2: push    offset SEH_8C8900
0x67FCF7: mov     eax, large fs:0
0x67FCFD: push    eax
0x67FCFE: push    ecx
0x67FCFF: mov     eax, ds:0B30AACh
0x67FD04: xor     eax, esp
0x67FD06: push    eax
0x67FD07: lea     eax, [esp+14h+var_C]
0x67FD0B: mov     large fs:0, eax
0x67FD11: cmp     dword ptr ds:0B3BE00h, 0
0x67FD18: jnz     short loc_67FD5C
0x67FD1A: push    10h; Size
0x67FD1C: call    FormHeapAlloc
0x67FD21: add     esp, 4
0x67FD24: mov     [esp+14h+var_10], eax
0x67FD28: test    eax, eax
0x67FD2A: mov     [esp+14h+var_4], 0
0x67FD32: jz      short loc_67FD55
0x67FD34: push    0BFh ; '¿'; bucketCount
0x67FD39: mov     ecx, eax; this
0x67FD3B: call    ??0?$NiTPointerMap@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@QAE@XZ; Verified outer map constructor and vtable identity: NiTPointerMap<TESForm*,NiTPointerMap<TESForm*,BSSimpleList<AStarWorldNode*>*>*>; initializes vtable, bucket count, zeroed bucket-head array, and entry count.
0x67FD40: mov     ds:0B3BE00h, eax
0x67FD45: mov     ecx, [esp+14h+var_C]
0x67FD49: mov     large fs:0, ecx
0x67FD50: pop     ecx
0x67FD51: add     esp, 10h
0x67FD54: retn
0x67FD55: xor     eax, eax
0x67FD57: mov     ds:0B3BE00h, eax
0x67FD5C: mov     ecx, [esp+14h+var_C]
0x67FD60: mov     large fs:0, ecx
0x67FD67: pop     ecx
0x67FD68: add     esp, 10h
0x67FD6B: retn
0x9C74D0: mov     eax, [ebp-10h]
0x9C74D3: push    eax
0x9C74D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C74D9: pop     ecx
0x9C74DA: retn
0x9C74DB: mov     edx, [esp+arg_4]
0x9C74DF: lea     eax, [edx-4]
0x9C74E2: mov     ecx, [edx-8]
0x9C74E5: xor     ecx, eax
0x9C74E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C74EC: mov     eax, offset stru_AEF928
0x9C74F1: jmp     ___CxxFrameHandler3
