0x588B50: mov     ecx, [ecx+18h]
0x588B53: test    ecx, ecx
0x588B55: push    esi
0x588B56: jz      short loc_588B75
0x588B58: mov     esi, [esp+4+arg_0]
0x588B5C: lea     esp, [esp+0]
0x588B60: lea     eax, [ecx+8]
0x588B63: mov     eax, [eax]
0x588B65: movzx   edx, word ptr [eax+18h]
0x588B69: cmp     edx, esi
0x588B6B: mov     ecx, [ecx]
0x588B6D: jz      short loc_588B77
0x588B6F: jg      short loc_588B75
0x588B71: test    ecx, ecx
0x588B73: jnz     short loc_588B60
0x588B75: xor     eax, eax
0x588B77: pop     esi
0x588B78: retn    4
