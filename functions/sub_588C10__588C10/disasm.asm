0x588C10: mov     eax, [ecx+18h]
0x588C13: test    eax, eax
0x588C15: push    esi
0x588C16: jz      short loc_588C36
0x588C18: mov     esi, [esp+4+arg_0]
0x588C1C: lea     esp, [esp+0]
0x588C20: mov     edx, [eax+8]
0x588C23: lea     ecx, [eax+8]
0x588C26: movzx   ecx, word ptr [edx+18h]
0x588C2A: cmp     ecx, esi
0x588C2C: mov     eax, [eax]
0x588C2E: jz      short loc_588C3F
0x588C30: jg      short loc_588C36
0x588C32: test    eax, eax
0x588C34: jnz     short loc_588C20
0x588C36: mov     eax, offset EmptyString
0x588C3B: pop     esi
0x588C3C: retn    4
0x588C3F: mov     eax, [edx+8]
0x588C42: pop     esi
0x588C43: retn    4
