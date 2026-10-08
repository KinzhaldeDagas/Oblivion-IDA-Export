0x414DC0: push    0FFFFFFFFh
0x414DC2: push    offset SEH_690310
0x414DC7: mov     eax, large fs:0
0x414DCD: push    eax
0x414DCE: push    ecx
0x414DCF: push    ebx
0x414DD0: push    ebp
0x414DD1: push    esi
0x414DD2: push    edi
0x414DD3: mov     eax, ___security_cookie
0x414DD8: xor     eax, esp
0x414DDA: push    eax
0x414DDB: lea     eax, [esp+24h+var_C]
0x414DDF: mov     large fs:0, eax
0x414DE5: mov     [esp+24h+var_10], ecx
0x414DE9: call    EffectItemList_Clear
0x414DEE: mov     eax, [esp+24h+arg_0]
0x414DF2: xor     ebx, ebx
0x414DF4: cmp     eax, ebx
0x414DF6: mov     ebp, eax
0x414DF8: jz      EffectItemList_CopyFrom___Done
0x414DFE: mov     edi, edi
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
