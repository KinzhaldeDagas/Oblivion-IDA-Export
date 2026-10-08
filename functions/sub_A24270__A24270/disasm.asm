0xA24270: mov     ecx, offset dword_B12B9C
0xA24275: jmp     loc_56B720
0x56B720: push    0FFFFFFFFh
0x56B722: push    offset SEH_6EBCB0
0x56B727: mov     eax, large fs:0
0x56B72D: push    eax
0x56B72E: push    ecx
0x56B72F: push    esi
0x56B730: push    edi
0x56B731: mov     eax, ds:0B30AACh
0x56B736: xor     eax, esp
0x56B738: push    eax
0x56B739: lea     eax, [esp+1Ch+var_C]
0x56B73D: mov     large fs:0, eax
0x56B743: mov     edi, ecx
0x56B745: mov     [esp+1Ch+var_10], edi
0x56B749: mov     esi, [edi+14h]
0x56B74C: test    esi, esi
0x56B74E: mov     [esp+1Ch+var_4], 0
0x56B756: mov     dword ptr [edi+8], 0
0x56B75D: jz      short loc_56B798
0x56B75F: mov     ecx, [esi]
0x56B761: test    ecx, ecx
0x56B763: jz      short loc_56B781
0x56B765: cmp     dword ptr [ecx-4], 0
0x56B769: lea     eax, [ecx-4]
0x56B76C: jz      short loc_56B778
0x56B76E: mov     eax, [ecx]
0x56B770: mov     edx, [eax]
0x56B772: push    3
0x56B774: call    edx
0x56B776: jmp     short loc_56B781
0x56B778: push    eax
0x56B779: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x56B77E: add     esp, 4
0x56B781: mov     ecx, [esi+8]
0x56B784: test    ecx, ecx
0x56B786: jz      short loc_56B78F
0x56B788: push    1
0x56B78A: call    sub_56B680
0x56B78F: push    esi
0x56B790: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x56B795: add     esp, 4
0x56B798: mov     eax, [edi]
0x56B79A: push    eax
0x56B79B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x56B7A0: add     esp, 4
0x56B7A3: mov     ecx, [esp+1Ch+var_C]
0x56B7A7: mov     large fs:0, ecx
0x56B7AE: pop     ecx
0x56B7AF: pop     edi
0x56B7B0: pop     esi
0x56B7B1: add     esp, 10h
0x56B7B4: retn
0x9BD960: mov     ecx, [ebp-10h]; void *
0x9BD963: jmp     sub_6C4090
0x9BD968: mov     edx, [esp+arg_4]
0x9BD96C: lea     eax, [edx-0Ch]
0x9BD96F: mov     ecx, [edx-10h]
0x9BD972: xor     ecx, eax
0x9BD974: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD979: mov     eax, offset stru_AE7284
0x9BD97E: jmp     ___CxxFrameHandler3
