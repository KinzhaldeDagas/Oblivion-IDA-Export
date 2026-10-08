0x70D730: push    0FFFFFFFFh
0x70D732: push    offset SEH_8C8900
0x70D737: mov     eax, large fs:0
0x70D73D: push    eax
0x70D73E: push    ecx
0x70D73F: mov     eax, ds:0B30AACh
0x70D744: xor     eax, esp
0x70D746: push    eax
0x70D747: lea     eax, [esp+14h+var_C]
0x70D74B: mov     large fs:0, eax
0x70D751: push    124h; Size
0x70D756: call    FormHeapAlloc
0x70D75B: add     esp, 4
0x70D75E: mov     [esp+14h+var_10], eax
0x70D762: test    eax, eax
0x70D764: mov     [esp+14h+var_4], 0
0x70D76C: jz      short loc_70D785
0x70D76E: mov     ecx, eax
0x70D770: call    sub_70D590
0x70D775: mov     ecx, [esp+14h+var_C]
0x70D779: mov     large fs:0, ecx
0x70D780: pop     ecx
0x70D781: add     esp, 10h
0x70D784: retn
0x70D785: xor     eax, eax
0x70D787: mov     ecx, [esp+14h+var_C]
0x70D78B: mov     large fs:0, ecx
0x70D792: pop     ecx
0x70D793: add     esp, 10h
0x70D796: retn
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
