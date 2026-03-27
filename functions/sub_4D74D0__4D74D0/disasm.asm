0x4D74D0: push    esi
0x4D74D1: mov     esi, ecx
0x4D74D3: cmp     dword ptr [esi+1Ch], 0
0x4D74D7: jz      short loc_4D7506
0x4D74D9: mov     eax, [esi]
0x4D74DB: mov     edx, [eax+170h]
0x4D74E1: call    edx
0x4D74E3: cmp     byte ptr [eax+4], 24h ; '$'
0x4D74E7: jnz     short loc_4D7506
0x4D74E9: mov     eax, [esi]
0x4D74EB: mov     edx, [eax+170h]
0x4D74F1: mov     ecx, esi
0x4D74F3: call    edx
0x4D74F5: test    eax, eax
0x4D74F7: jz      short loc_4D7506
0x4D74F9: cmp     byte ptr [eax+104h], 4
0x4D7500: jnz     short loc_4D7506
0x4D7502: mov     al, 1
0x4D7504: pop     esi
0x4D7505: retn
0x4D7506: xor     al, al
0x4D7508: pop     esi
0x4D7509: retn
