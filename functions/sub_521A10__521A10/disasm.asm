0x521A10: push    esi
0x521A11: mov     esi, ecx
0x521A13: mov     eax, [esi]
0x521A15: mov     edx, [eax+128h]
0x521A1B: push    45h ; 'E'
0x521A1D: call    edx
0x521A1F: test    eax, eax
0x521A21: lea     eax, [esi+168h]
0x521A27: jnz     short loc_521A2F
0x521A29: lea     eax, [esi+108h]
0x521A2F: pop     esi
0x521A30: retn
