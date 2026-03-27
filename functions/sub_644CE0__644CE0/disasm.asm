0x644CE0: push    esi
0x644CE1: mov     esi, ecx
0x644CE3: mov     eax, [esi+8]
0x644CE6: test    eax, eax
0x644CE8: jz      short loc_644D24
0x644CEA: mov     eax, [eax+28h]
0x644CED: test    eax, eax
0x644CEF: jz      short loc_644D24
0x644CF1: mov     ecx, eax
0x644CF3: call    sub_569E60
0x644CF8: test    eax, eax
0x644CFA: jz      short loc_644D24
0x644CFC: mov     eax, [esi+8]
0x644CFF: mov     ecx, [eax+28h]
0x644D02: call    sub_569E60
0x644D07: mov     ecx, [eax+8]
0x644D0A: shr     ecx, 5
0x644D0D: test    cl, 1
0x644D10: jnz     short loc_644D24
0x644D12: cmp     eax, [esi+2Ch]
0x644D15: jz      short loc_644D24
0x644D17: mov     edx, [esi]
0x644D19: push    eax
0x644D1A: mov     eax, [edx+0D0h]
0x644D20: mov     ecx, esi
0x644D22: call    eax
0x644D24: pop     esi
0x644D25: retn
