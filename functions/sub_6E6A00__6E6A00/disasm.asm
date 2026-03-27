0x6E6A00: push    esi
0x6E6A01: push    edi
0x6E6A02: mov     edi, [esp+8+arg_0]
0x6E6A06: push    edi
0x6E6A07: mov     esi, ecx
0x6E6A09: call    sub_6ED370
0x6E6A0E: test    al, al
0x6E6A10: jnz     short loc_6E6A19
0x6E6A12: pop     edi
0x6E6A13: xor     al, al
0x6E6A15: pop     esi
0x6E6A16: retn    4
0x6E6A19: lea     eax, [edi+1Ch]
0x6E6A1C: push    eax
0x6E6A1D: lea     ecx, [esi+1Ch]
0x6E6A20: call    sub_632310
0x6E6A25: test    al, al
0x6E6A27: jnz     short loc_6E6A12
0x6E6A29: mov     ecx, [edi+2Ch]
0x6E6A2C: cmp     ecx, [esi+2Ch]
0x6E6A2F: pop     edi
0x6E6A30: setz    al
0x6E6A33: pop     esi
0x6E6A34: retn    4
