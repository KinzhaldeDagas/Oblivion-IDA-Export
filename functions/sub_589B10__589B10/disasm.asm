0x589B10: push    esi
0x589B11: mov     esi, [esp+4+arg_0]
0x589B15: test    esi, esi
0x589B17: jnz     short loc_589B1D
0x589B19: xor     eax, eax
0x589B1B: pop     esi
0x589B1C: retn
0x589B1D: mov     eax, [esi+8]
0x589B20: test    eax, eax
0x589B22: push    edi
0x589B23: mov     edi, [esp+8+arg_4]
0x589B27: jz      short loc_589B3C
0x589B29: push    edi; unsigned __int8 *
0x589B2A: push    eax; unsigned __int8 *
0x589B2B: call    __mbsicmp
0x589B30: add     esp, 8
0x589B33: test    eax, eax
0x589B35: jnz     short loc_589B3C
0x589B37: pop     edi
0x589B38: mov     eax, esi
0x589B3A: pop     esi
0x589B3B: retn
0x589B3C: mov     esi, [esi+34h]
0x589B3F: test    esi, esi
0x589B41: jz      short loc_589B5C
0x589B43: lea     eax, [esi+8]
0x589B46: mov     eax, [eax]
0x589B48: mov     esi, [esi]
0x589B4A: push    edi; unsigned __int8 *
0x589B4B: push    eax; int
0x589B4C: call    sub_589B10
0x589B51: add     esp, 8
0x589B54: test    eax, eax
0x589B56: jnz     short loc_589B5E
0x589B58: test    esi, esi
0x589B5A: jnz     short loc_589B43
0x589B5C: xor     eax, eax
0x589B5E: pop     edi
0x589B5F: pop     esi
0x589B60: retn
