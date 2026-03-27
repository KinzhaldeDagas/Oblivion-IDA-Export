0x6B7CF0: push    ecx
0x6B7CF1: test    ecx, ecx
0x6B7CF3: mov     eax, 1
0x6B7CF8: push    esi
0x6B7CF9: mov     [esp+8+var_4], eax
0x6B7CFD: mov     esi, ecx
0x6B7CFF: jz      short loc_6B7D23
0x6B7D01: cmp     dword ptr [esi+4], 0
0x6B7D05: jnz     short loc_6B7D0C
0x6B7D07: cmp     dword ptr [esi], 0
0x6B7D0A: jz      short loc_6B7D1F
0x6B7D0C: mov     ecx, [esi]
0x6B7D0E: call    sub_6B8460
0x6B7D13: mov     esi, [esi+4]
0x6B7D16: add     word ptr [esp+8+var_4], ax
0x6B7D1B: test    esi, esi
0x6B7D1D: jnz     short loc_6B7D01
0x6B7D1F: mov     eax, [esp+8+var_4]
0x6B7D23: add     eax, 11h
0x6B7D26: pop     esi
0x6B7D27: pop     ecx
0x6B7D28: retn
