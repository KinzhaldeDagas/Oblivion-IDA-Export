0x77D270: mov     eax, [ecx+2Ch]
0x77D273: test    eax, eax
0x77D275: jz      short loc_77D2BB
0x77D277: mov     edx, [esp+arg_0]
0x77D27B: push    esi
0x77D27C: push    edi
0x77D27D: mov     edi, [edx+24h]
0x77D280: xor     esi, esi
0x77D282: cmp     [eax+24h], edi
0x77D285: ja      short loc_77D29E
0x77D287: mov     esi, eax
0x77D289: mov     eax, [eax+3Ch]
0x77D28C: test    eax, eax
0x77D28E: jnz     short loc_77D282
0x77D290: mov     [esi+3Ch], edx
0x77D293: mov     [edx+40h], esi
0x77D296: mov     [edx+3Ch], eax
0x77D299: pop     edi
0x77D29A: pop     esi
0x77D29B: retn    4
0x77D29E: test    esi, esi
0x77D2A0: jz      short loc_77D2A5
0x77D2A2: mov     [esi+3Ch], edx
0x77D2A5: mov     [eax+40h], edx
0x77D2A8: mov     [edx+3Ch], eax
0x77D2AB: mov     [edx+40h], esi
0x77D2AE: cmp     eax, [ecx+2Ch]
0x77D2B1: jnz     short loc_77D299
0x77D2B3: pop     edi
0x77D2B4: mov     [ecx+2Ch], edx
0x77D2B7: pop     esi
0x77D2B8: retn    4
0x77D2BB: mov     eax, [esp+arg_0]
0x77D2BF: mov     [ecx+2Ch], eax
0x77D2C2: mov     dword ptr [eax+3Ch], 0
0x77D2C9: mov     eax, [ecx+2Ch]
0x77D2CC: mov     dword ptr [eax+40h], 0
0x77D2D3: retn    4
