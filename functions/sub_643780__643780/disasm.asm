0x643780: push    esi
0x643781: mov     esi, ecx
0x643783: cmp     dword ptr [esi+34h], 0
0x643787: jz      short loc_64379D
0x643789: mov     ecx, [esi+34h]
0x64378C: mov     eax, [ecx]
0x64378E: mov     edx, [eax+4]
0x643791: call    edx
0x643793: cmp     eax, 2
0x643796: jnz     short loc_64379D
0x643798: mov     eax, [esi+34h]
0x64379B: pop     esi
0x64379C: retn
0x64379D: xor     eax, eax
0x64379F: pop     esi
0x6437A0: retn
