0x582160: push    0FFFFFFFFh
0x582162: push    offset InterfaceManager_GetSingleton_SEH
0x582167: mov     eax, large fs:0
0x58216D: push    eax
0x58216E: mov     eax, ds:0B30AACh
0x582173: xor     eax, esp
0x582175: push    eax
0x582176: lea     eax, [esp+10h+var_C]
0x58217A: mov     large fs:0, eax
0x582180: cmp     [esp+10h+canCreate], 0
0x582185: mov     eax, ds:0B3A6E0h
0x58218A: jz      short loc_5821D6
0x58218C: test    eax, eax
0x58218E: jnz     short loc_5821D6
0x582190: push    134h; Size
0x582195: call    FormHeapAlloc
0x58219A: add     esp, 4
0x58219D: mov     dword ptr [esp+10h+canCreate], eax
0x5821A1: test    eax, eax
0x5821A3: mov     [esp+10h+var_4], 0
0x5821AB: jz      short loc_5821B6
0x5821AD: mov     ecx, eax; this
0x5821AF: call    InitializeInterfaceManager
0x5821B4: jmp     short loc_5821B8
0x5821B6: xor     eax, eax
0x5821B8: mov     ecx, dword ptr [esp+10h+arg1]
0x5821BC: push    ecx; a4
0x5821BD: mov     ecx, eax; this
0x5821BF: mov     [esp+14h+var_4], 0FFFFFFFFh
0x5821C7: mov     ds:0B3A6E0h, eax
0x5821CC: call    sub_581CC0
0x5821D1: mov     eax, ds:0B3A6E0h
0x5821D6: mov     ecx, [esp+10h+var_C]
0x5821DA: mov     large fs:0, ecx
0x5821E1: pop     ecx
0x5821E2: add     esp, 0Ch
0x5821E5: retn
0x9BECE0: mov     eax, [ebp+4]
0x9BECE3: push    eax
0x9BECE4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BECE9: pop     ecx
0x9BECEA: retn
0x9BECEB: mov     edx, dword ptr [esp+arg1]
0x9BECEF: lea     eax, [edx]
0x9BECF1: mov     ecx, [edx-4]
0x9BECF4: xor     ecx, eax
0x9BECF6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BECFB: mov     eax, offset stru_AE8368
0x9BED00: jmp     ___CxxFrameHandler3
