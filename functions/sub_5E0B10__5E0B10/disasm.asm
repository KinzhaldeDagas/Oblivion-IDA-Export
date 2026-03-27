0x5E0B10: push    esi
0x5E0B11: mov     esi, ecx
0x5E0B13: mov     eax, [esi]
0x5E0B15: mov     edx, [eax+330h]
0x5E0B1B: call    edx
0x5E0B1D: test    eax, eax
0x5E0B1F: jz      short loc_5E0B2C
0x5E0B21: push    esi
0x5E0B22: call    sub_618590
0x5E0B27: add     esp, 4
0x5E0B2A: pop     esi
0x5E0B2B: retn
0x5E0B2C: mov     ecx, [esi+58h]
0x5E0B2F: mov     eax, [ecx]
0x5E0B31: mov     edx, [eax+8]
0x5E0B34: call    edx
0x5E0B36: cmp     eax, 1
0x5E0B39: jnz     short loc_5E0B49
0x5E0B3B: mov     ecx, [esi+58h]
0x5E0B3E: mov     edx, [ecx]
0x5E0B40: push    eax
0x5E0B41: mov     eax, [edx+58h]
0x5E0B44: push    esi
0x5E0B45: call    eax
0x5E0B47: pop     esi
0x5E0B48: retn
0x5E0B49: mov     ecx, [esi+58h]
0x5E0B4C: mov     eax, [ecx]
0x5E0B4E: mov     edx, [eax+8]
0x5E0B51: call    edx
0x5E0B53: xor     ecx, ecx
0x5E0B55: cmp     eax, 2
0x5E0B58: setnz   cl
0x5E0B5B: lea     ecx, [ecx+ecx+2]
0x5E0B5F: mov     eax, ecx
0x5E0B61: mov     ecx, [esi+58h]
0x5E0B64: mov     edx, [ecx]
0x5E0B66: push    eax
0x5E0B67: mov     eax, [edx+58h]
0x5E0B6A: push    esi
0x5E0B6B: call    eax
0x5E0B6D: pop     esi
0x5E0B6E: retn
