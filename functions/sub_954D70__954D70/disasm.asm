0x954D70: mov     eax, [esp+arg_C]
0x954D74: mov     ecx, [eax+8]
0x954D77: sub     ecx, 8
0x954D7A: test    ecx, ecx
0x954D7C: jg      short loc_954D80
0x954D7E: xor     ecx, ecx
0x954D80: push    esi
0x954D81: mov     esi, [esp+4+arg_8]
0x954D85: mov     edx, [esi+24h]
0x954D88: mov     eax, edx
0x954D8A: sub     eax, ecx
0x954D8C: cmp     eax, edx
0x954D8E: jle     short loc_954D92
0x954D90: mov     eax, edx
0x954D92: cmp     eax, 2
0x954D95: mov     eax, [esp+4+arg_0]
0x954D99: pop     esi
0x954D9A: jle     short loc_954DA2
0x954D9C: mov     byte ptr [eax], 1
0x954D9F: retn    10h
0x954DA2: mov     byte ptr [eax], 0
0x954DA5: retn    10h
