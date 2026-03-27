0x6FE090: push    esi
0x6FE091: mov     esi, [esp+4+a2]
0x6FE095: push    edi
0x6FE096: push    esi; a2
0x6FE097: mov     edi, ecx
0x6FE099: call    sub_7008A0
0x6FE09E: add     edi, 8
0x6FE0A1: push    edi
0x6FE0A2: mov     ecx, esi
0x6FE0A4: call    sub_713620
0x6FE0A9: mov     ecx, [esi+488h]
0x6FE0AF: test    ecx, ecx
0x6FE0B1: mov     edi, [edi]
0x6FE0B3: mov     [esp+8+a2], 0
0x6FE0BB: jz      short loc_6FE0DE
0x6FE0BD: test    edi, edi
0x6FE0BF: jz      short loc_6FE0DE
0x6FE0C1: lea     eax, [esp+8+a2]
0x6FE0C5: push    eax
0x6FE0C6: push    edi
0x6FE0C7: call    NiTMap_GetAt
0x6FE0CC: mov     eax, [esp+8+a2]
0x6FE0D0: test    eax, eax
0x6FE0D2: jz      short loc_6FE0DE
0x6FE0D4: mov     edx, [esi]
0x6FE0D6: push    eax
0x6FE0D7: mov     eax, [edx+24h]
0x6FE0DA: mov     ecx, esi
0x6FE0DC: call    eax
0x6FE0DE: pop     edi
0x6FE0DF: pop     esi
0x6FE0E0: retn    4
