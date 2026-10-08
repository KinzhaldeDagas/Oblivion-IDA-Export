0x6D4620: push    0FFFFFFFFh
0x6D4622: push    offset SEH_8C62B0
0x6D4627: mov     eax, large fs:0
0x6D462D: push    eax
0x6D462E: push    ecx
0x6D462F: push    esi
0x6D4630: mov     eax, ds:0B30AACh
0x6D4635: xor     eax, esp
0x6D4637: push    eax
0x6D4638: lea     eax, [esp+18h+var_C]
0x6D463C: mov     large fs:0, eax
0x6D4642: push    40h ; '@'; Size
0x6D4644: call    FormHeapAlloc
0x6D4649: mov     esi, eax
0x6D464B: add     esp, 4
0x6D464E: mov     [esp+18h+var_10], esi
0x6D4652: xor     eax, eax
0x6D4654: cmp     esi, eax
0x6D4656: mov     [esp+18h+var_4], eax
0x6D465A: jz      short loc_6D466B
0x6D465C: mov     ecx, esi
0x6D465E: call    sub_6EC630
0x6D4663: mov     dword ptr [esi], offset ??_7NiVisController@@6B@; const NiVisController::`vftable'
0x6D4669: mov     eax, esi
0x6D466B: mov     ecx, [esp+18h+var_C]
0x6D466F: mov     large fs:0, ecx
0x6D4676: pop     ecx
0x6D4677: pop     esi
0x6D4678: add     esp, 10h
0x6D467B: retn
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
