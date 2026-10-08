0x4A53F0: push    0FFFFFFFFh
0x4A53F2: push    offset SEH_8C62B0
0x4A53F7: mov     eax, large fs:0
0x4A53FD: push    eax
0x4A53FE: push    ecx
0x4A53FF: push    esi
0x4A5400: mov     eax, ds:0B30AACh
0x4A5405: xor     eax, esp
0x4A5407: push    eax
0x4A5408: lea     eax, [esp+18h+var_C]
0x4A540C: mov     large fs:0, eax
0x4A5412: mov     esi, ecx
0x4A5414: push    14h; Size
0x4A5416: call    FormHeapAlloc
0x4A541B: add     esp, 4
0x4A541E: mov     [esp+18h+var_10], eax
0x4A5422: test    eax, eax
0x4A5424: mov     [esp+18h+var_4], 0
0x4A542C: jz      short loc_4A5447
0x4A542E: push    esi
0x4A542F: mov     ecx, eax
0x4A5431: call    TESRegionSoundRecord_CopyFrom; Verified: record-copy helper for the 12-byte OblivionTESRegionSoundRecord; first field maps to a live form; remaining fields are copied without interpretation.
0x4A5436: mov     ecx, [esp+18h+var_C]
0x4A543A: mov     large fs:0, ecx
0x4A5441: pop     ecx
0x4A5442: pop     esi
0x4A5443: add     esp, 10h
0x4A5446: retn
0x4A5447: xor     eax, eax
0x4A5449: mov     ecx, [esp+18h+var_C]
0x4A544D: mov     large fs:0, ecx
0x4A5454: pop     ecx
0x4A5455: pop     esi
0x4A5456: add     esp, 10h
0x4A5459: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
