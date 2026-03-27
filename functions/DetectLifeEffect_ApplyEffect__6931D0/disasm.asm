0x6931D0: push    esi
0x6931D1: mov     esi, ecx
0x6931D3: call    ValueModifierEffect_Apply
0x6931D8: mov     ecx, [esi+20h]
0x6931DB: mov     eax, [ecx]
0x6931DD: mov     edx, [eax+4]
0x6931E0: call    edx
0x6931E2: mov     ecx, ds:0B333C4h
0x6931E8: cmp     eax, ecx
0x6931EA: pop     esi
0x6931EB: jnz     short locret_693203
0x6931ED: mov     eax, [ecx]
0x6931EF: mov     edx, [eax+284h]
0x6931F5: push    3Ah ; ':'
0x6931F7: call    edx
0x6931F9: test    eax, eax
0x6931FB: setnle  al
0x6931FE: mov     ds:0B3C0ABh, al
0x693203: retn
