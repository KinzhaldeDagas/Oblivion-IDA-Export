0x4D9B10: push    esi
0x4D9B11: mov     esi, ecx
0x4D9B13: mov     eax, [esi]
0x4D9B15: mov     edx, [eax+170h]
0x4D9B1B: call    edx
0x4D9B1D: test    eax, eax
0x4D9B1F: jz      short loc_4D9B37
0x4D9B21: mov     eax, [esi]
0x4D9B23: mov     edx, [eax+170h]
0x4D9B29: mov     ecx, esi
0x4D9B2B: call    edx
0x4D9B2D: mov     edx, [eax]
0x4D9B2F: mov     ecx, eax
0x4D9B31: mov     eax, [edx+78h]
0x4D9B34: pop     esi
0x4D9B35: jmp     eax
0x4D9B37: xor     al, al
0x4D9B39: pop     esi
0x4D9B3A: retn
