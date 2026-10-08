0x5EDCE0: push    0FFFFFFFFh
0x5EDCE2: push    offset SEH_690310
0x5EDCE7: mov     eax, large fs:0
0x5EDCED: push    eax
0x5EDCEE: push    ecx
0x5EDCEF: push    ebx
0x5EDCF0: push    ebp
0x5EDCF1: push    esi
0x5EDCF2: push    edi
0x5EDCF3: mov     eax, ds:0B30AACh
0x5EDCF8: xor     eax, esp
0x5EDCFA: push    eax
0x5EDCFB: lea     eax, [esp+24h+var_C]
0x5EDCFF: mov     large fs:0, eax
0x5EDD05: mov     ebx, ecx
0x9BD8A0: mov     eax, [ebp+4]
0x9BD8A3: push    eax
0x9BD8A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD8A9: pop     ecx
0x9BD8AA: retn
0x9BD8AB: mov     edx, [esp+arg_4]
0x9BD8AF: lea     eax, [edx-14h]
0x9BD8B2: mov     ecx, [edx-18h]
0x9BD8B5: xor     ecx, eax
0x9BD8B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD8BC: mov     eax, offset stru_AE71E0
0x9BD8C1: jmp     ___CxxFrameHandler3
