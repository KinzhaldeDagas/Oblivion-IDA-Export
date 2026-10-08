0x6FBA20: push    0FFFFFFFFh
0x6FBA22: push    offset SEH_8C62B0
0x6FBA27: mov     eax, large fs:0
0x6FBA2D: push    eax
0x6FBA2E: push    ecx
0x6FBA2F: push    esi
0x6FBA30: mov     eax, ds:0B30AACh
0x6FBA35: xor     eax, esp
0x6FBA37: push    eax
0x6FBA38: lea     eax, [esp+18h+var_C]
0x6FBA3C: mov     large fs:0, eax
0x6FBA42: push    24h ; '$'; Size
0x6FBA44: call    FormHeapAlloc
0x6FBA49: add     esp, 4
0x6FBA4C: mov     [esp+18h+var_10], eax
0x6FBA50: test    eax, eax
0x6FBA52: mov     [esp+18h+var_4], 0
0x6FBA5A: jz      short loc_6FBA67
0x6FBA5C: mov     ecx, eax
0x6FBA5E: call    BSBound_BSBound; Pass269 native BSBound constructor used only for one of four selected exact-root TESObjectSTAT sources when BBX is absent; center/extents are filled from that source's own world bound.
0x6FBA63: mov     esi, eax
0x6FBA65: jmp     short loc_6FBA69
0x6FBA67: xor     esi, esi
0x6FBA69: push    0; Src
0x6FBA6B: mov     ecx, esi
0x6FBA6D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6FBA75: call    sub_721440
0x6FBA7A: mov     eax, esi
0x6FBA7C: mov     ecx, [esp+18h+var_C]
0x6FBA80: mov     large fs:0, ecx
0x6FBA87: pop     ecx
0x6FBA88: pop     esi
0x6FBA89: add     esp, 10h
0x6FBA8C: retn
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
