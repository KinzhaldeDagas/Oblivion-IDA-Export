0x89EA70: sub     esp, 44h
0x89EA73: push    ebx
0x89EA74: mov     ebx, ecx
0x89EA76: push    esi
0x89EA77: mov     esi, [ebx+10h]
0x89EA7A: test    esi, esi
0x89EA7C: jz      short loc_89EAD0
0x89EA7E: push    edi
0x89EA7F: mov     edi, [esi+8]
0x89EA82: test    edi, edi
0x89EA84: jz      short loc_89EACF
0x89EA86: mov     ecx, [edi+50h]
0x89EA89: mov     eax, [ecx]
0x89EA8B: mov     edx, [eax+8]
0x89EA8E: call    edx
0x89EA90: cmp     eax, 7
0x89EA93: jnz     short loc_89EA9B
0x89EA95: cmp     dword ptr [edi+8], 0
0x89EA99: jnz     short loc_89EACF
0x89EA9B: lea     eax, [esp+50h+var_44]
0x89EA9F: push    eax
0x89EAA0: mov     ecx, esi
0x89EAA2: call    sub_4D6950
0x89EAA7: lea     ecx, [esp+50h+var_34]
0x89EAAB: push    ecx
0x89EAAC: lea     ecx, [esp+54h+var_44]
0x89EAB0: call    sub_47C600
0x89EAB5: lea     edx, [esp+50h+var_10]
0x89EAB9: push    edx
0x89EABA: mov     ecx, esi
0x89EABC: call    sub_4D6900
0x89EAC1: mov     eax, [ebx]
0x89EAC3: mov     edx, [eax+78h]
0x89EAC6: lea     ecx, [esp+50h+var_34]
0x89EACA: push    ecx
0x89EACB: mov     ecx, ebx
0x89EACD: call    edx
0x89EACF: pop     edi
0x89EAD0: pop     esi
0x89EAD1: pop     ebx
0x89EAD2: add     esp, 44h
0x89EAD5: retn
