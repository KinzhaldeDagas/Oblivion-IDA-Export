0x43CB90: push    ecx
0x43CB91: push    ebx
0x43CB92: push    esi
0x43CB93: mov     esi, ecx
0x43CB95: mov     ecx, [esi+20h]
0x43CB98: mov     eax, [ecx]
0x43CB9A: mov     edx, [eax+170h]
0x43CBA0: push    edi
0x43CBA1: call    edx
0x43CBA3: mov     edi, eax
0x43CBA5: push    edi
0x43CBA6: call    sub_4A2A30
0x43CBAB: mov     ecx, [esi+20h]
0x43CBAE: add     esp, 4
0x43CBB1: test    ecx, ecx
0x43CBB3: mov     ebx, eax
0x43CBB5: jz      short loc_43CBC5
0x43CBB7: call    sub_4D6FD0
0x43CBBC: test    al, al
0x43CBBE: jz      short loc_43CBC5
0x43CBC0: mov     ebx, 6
0x43CBC5: mov     eax, [esi+10h]
0x43CBC8: mov     edx, [esi+14h]
0x43CBCB: push    ebx
0x43CBCC: push    esi
0x43CBCD: mov     cl, 10h
0x43CBCF: call    __allshr
0x43CBD4: mov     ecx, [esi+20h]
0x43CBD7: movzx   eax, al
0x43CBDA: push    eax
0x43CBDB: push    edi
0x43CBDC: push    ecx
0x43CBDD: mov     ecx, ModelLoaderPtr
0x43CBE3: lea     edx, [esp+24h+var_4]
0x43CBE7: push    edx
0x43CBE8: call    sub_43B780
0x43CBED: mov     eax, [esp+10h+var_4]
0x43CBF1: test    eax, eax
0x43CBF3: jz      short loc_43CC13
0x43CBF5: mov     esi, eax
0x43CBF7: add     eax, 8
0x43CBFA: push    eax; lpAddend
0x43CBFB: call    ds:InterlockedDecrement
0x43CC01: test    eax, eax
0x43CC03: jnz     short loc_43CC13
0x43CC05: test    esi, esi
0x43CC07: jz      short loc_43CC13
0x43CC09: mov     eax, [esi]
0x43CC0B: mov     edx, [eax]
0x43CC0D: push    1
0x43CC0F: mov     ecx, esi
0x43CC11: call    edx
0x43CC13: pop     edi
0x43CC14: pop     esi
0x43CC15: pop     ebx
0x43CC16: pop     ecx
0x43CC17: retn
