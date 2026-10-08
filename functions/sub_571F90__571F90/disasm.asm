0x571F90: push    0FFFFFFFFh
0x571F92: push    offset SEH_8C8900
0x571F97: mov     eax, large fs:0
0x571F9D: push    eax
0x571F9E: push    ecx
0x571F9F: mov     eax, ds:0B30AACh
0x571FA4: xor     eax, esp
0x571FA6: push    eax
0x571FA7: lea     eax, [esp+14h+var_C]
0x571FAB: mov     large fs:0, eax
0x571FB1: mov     eax, ds:0B3A6A4h
0x571FB6: test    eax, eax
0x571FB8: jnz     short loc_572000
0x571FBA: cmp     [esp+14h+arg_0], al
0x571FBE: jz      short loc_572000
0x571FC0: push    15F0h; Size
0x571FC5: call    FormHeapAlloc
0x571FCA: add     esp, 4
0x571FCD: mov     [esp+14h+var_10], eax
0x571FD1: test    eax, eax
0x571FD3: mov     [esp+14h+var_4], 0
0x571FDB: jz      short loc_571FF9
0x571FDD: mov     ecx, eax
0x571FDF: call    sub_571E80
0x571FE4: mov     ds:0B3A6A4h, eax
0x571FE9: mov     ecx, [esp+14h+var_C]
0x571FED: mov     large fs:0, ecx
0x571FF4: pop     ecx
0x571FF5: add     esp, 10h
0x571FF8: retn
0x571FF9: xor     eax, eax
0x571FFB: mov     ds:0B3A6A4h, eax
0x572000: mov     ecx, [esp+14h+var_C]
0x572004: mov     large fs:0, ecx
0x57200B: pop     ecx
0x57200C: add     esp, 10h
0x57200F: retn
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
