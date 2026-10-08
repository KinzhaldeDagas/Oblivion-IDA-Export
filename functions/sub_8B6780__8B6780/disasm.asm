0x8B6780: push    0FFFFFFFFh
0x8B6782: push    offset SEH_8C8900
0x8B6787: mov     eax, large fs:0
0x8B678D: push    eax
0x8B678E: push    ecx
0x8B678F: mov     eax, ds:0B30AACh
0x8B6794: xor     eax, esp
0x8B6796: push    eax
0x8B6797: lea     eax, [esp+14h+var_C]
0x8B679B: mov     large fs:0, eax
0x8B67A1: push    14h; Size
0x8B67A3: call    FormHeapAlloc
0x8B67A8: add     esp, 4
0x8B67AB: mov     [esp+14h+var_10], eax
0x8B67AF: test    eax, eax
0x8B67B1: mov     [esp+14h+var_4], 0
0x8B67B9: jz      short loc_8B67D2
0x8B67BB: mov     ecx, eax
0x8B67BD: call    sub_8B6650
0x8B67C2: mov     ecx, [esp+14h+var_C]
0x8B67C6: mov     large fs:0, ecx
0x8B67CD: pop     ecx
0x8B67CE: add     esp, 10h
0x8B67D1: retn
0x8B67D2: xor     eax, eax
0x8B67D4: mov     ecx, [esp+14h+var_C]
0x8B67D8: mov     large fs:0, ecx
0x8B67DF: pop     ecx
0x8B67E0: add     esp, 10h
0x8B67E3: retn
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
