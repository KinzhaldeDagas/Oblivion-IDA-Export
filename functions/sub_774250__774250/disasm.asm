0x774250: push    esi
0x774251: mov     esi, ds:0B3F700h
0x774257: test    esi, esi
0x774259: jz      short loc_77427D
0x77425B: jmp     short loc_774260
0x77425D: align 10h
0x774260: mov     ecx, [esi+24h]
0x774263: test    ecx, ecx
0x774265: jz      short loc_774276
0x774267: mov     dword ptr [esi+24h], 0
0x77426E: mov     eax, [ecx]
0x774270: mov     edx, [eax]
0x774272: push    1
0x774274: call    edx
0x774276: mov     esi, [esi+2Ch]
0x774279: test    esi, esi
0x77427B: jnz     short loc_774260
0x77427D: pop     esi
0x77427E: retn
