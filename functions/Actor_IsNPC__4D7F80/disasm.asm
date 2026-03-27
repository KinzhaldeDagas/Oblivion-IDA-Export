0x4D7F80: push    esi
0x4D7F81: mov     esi, ecx
0x4D7F83: mov     eax, [esi]
0x4D7F85: mov     edx, [eax+190h]
0x4D7F8B: call    edx
0x4D7F8D: test    al, al
0x4D7F8F: jz      short loc_4D7FB7
0x4D7F91: mov     eax, [esi]
0x4D7F93: mov     edx, [eax+170h]
0x4D7F99: mov     ecx, esi
0x4D7F9B: call    edx
0x4D7F9D: test    eax, eax
0x4D7F9F: jz      short loc_4D7FB7
0x4D7FA1: mov     eax, [esi]
0x4D7FA3: mov     edx, [eax+170h]
0x4D7FA9: mov     ecx, esi
0x4D7FAB: call    edx
0x4D7FAD: cmp     byte ptr [eax+4], 23h ; '#'
0x4D7FB1: jnz     short loc_4D7FB7
0x4D7FB3: mov     al, 1
0x4D7FB5: pop     esi
0x4D7FB6: retn
0x4D7FB7: xor     al, al
0x4D7FB9: pop     esi
0x4D7FBA: retn
