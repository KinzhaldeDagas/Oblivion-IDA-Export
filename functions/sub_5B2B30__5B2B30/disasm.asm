0x5B2B30: push    esi
0x5B2B31: push    edi
0x5B2B32: lea     edi, [ecx+40h]
0x5B2B35: mov     ecx, edi
0x5B2B37: call    sub_5B1D70
0x5B2B3C: mov     ecx, ds:0B333C4h
0x5B2B42: mov     eax, [ecx+68h]
0x5B2B45: mov     edx, [eax+8]
0x5B2B48: add     ecx, 68h ; 'h'
0x5B2B4B: call    edx
0x5B2B4D: mov     esi, eax
0x5B2B4F: test    esi, esi
0x5B2B51: jz      short loc_5B2B64
0x5B2B53: mov     eax, [esi]
0x5B2B55: push    eax
0x5B2B56: mov     ecx, edi
0x5B2B58: call    sub_5B22E0
0x5B2B5D: mov     esi, [esi+4]
0x5B2B60: test    esi, esi
0x5B2B62: jnz     short loc_5B2B53
0x5B2B64: pop     edi
0x5B2B65: pop     esi
0x5B2B66: retn
