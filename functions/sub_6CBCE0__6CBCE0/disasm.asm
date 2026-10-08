0x6CBCE0: push    0FFFFFFFFh
0x6CBCE2: push    offset SEH_8C62B0
0x6CBCE7: mov     eax, large fs:0
0x6CBCED: push    eax
0x6CBCEE: push    ecx
0x6CBCEF: push    esi
0x6CBCF0: mov     eax, ds:0B30AACh
0x6CBCF5: xor     eax, esp
0x6CBCF7: push    eax
0x6CBCF8: lea     eax, [esp+18h+var_C]
0x6CBCFC: mov     large fs:0, eax
0x6CBD02: push    30h ; '0'; Size
0x6CBD04: call    FormHeapAlloc
0x6CBD09: mov     esi, eax
0x6CBD0B: add     esp, 4
0x6CBD0E: mov     [esp+18h+var_10], esi
0x6CBD12: xor     eax, eax
0x6CBD14: cmp     esi, eax
0x6CBD16: mov     [esp+18h+var_4], eax
0x6CBD1A: jz      short loc_6CBD2B
0x6CBD1C: mov     ecx, esi
0x6CBD1E: call    sub_6CC4E0
0x6CBD23: mov     dword ptr [esi], offset ??_7NiBlendTransformInterpolator@@6B@; const NiBlendTransformInterpolator::`vftable'
0x6CBD29: mov     eax, esi
0x6CBD2B: mov     ecx, [esp+18h+var_C]
0x6CBD2F: mov     large fs:0, ecx
0x6CBD36: pop     ecx
0x6CBD37: pop     esi
0x6CBD38: add     esp, 10h
0x6CBD3B: retn
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
