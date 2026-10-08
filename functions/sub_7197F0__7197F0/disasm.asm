0x7197F0: push    0FFFFFFFFh
0x7197F2: push    offset SEH_8C8900
0x7197F7: mov     eax, large fs:0
0x7197FD: push    eax
0x7197FE: push    ecx
0x7197FF: mov     eax, ds:0B30AACh
0x719804: xor     eax, esp
0x719806: push    eax
0x719807: lea     eax, [esp+14h+var_C]
0x71980B: mov     large fs:0, eax
0x719811: push    114h; Size
0x719816: call    FormHeapAlloc
0x71981B: add     esp, 4
0x71981E: mov     [esp+14h+var_10], eax
0x719822: test    eax, eax
0x719824: mov     [esp+14h+var_4], 0
0x71982C: jz      short loc_719845
0x71982E: mov     ecx, eax
0x719830: call    sub_719760
0x719835: mov     ecx, [esp+14h+var_C]
0x719839: mov     large fs:0, ecx
0x719840: pop     ecx
0x719841: add     esp, 10h
0x719844: retn
0x719845: xor     eax, eax
0x719847: mov     ecx, [esp+14h+var_C]
0x71984B: mov     large fs:0, ecx
0x719852: pop     ecx
0x719853: add     esp, 10h
0x719856: retn
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
