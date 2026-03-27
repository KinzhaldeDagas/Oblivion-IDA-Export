0x52EAB0: mov     edx, [esp+arg_0]
0x52EAB4: test    edx, edx
0x52EAB6: jnz     short loc_52EAC0
0x52EAB8: mov     eax, ds:0B36500h
0x52EABD: retn    4
0x52EAC0: lea     eax, [edx-1]
0x52EAC3: cmp     eax, 4
0x52EAC6: jge     short loc_52EAE3
0x52EAC8: lea     eax, [ecx+edx*8+38h]
0x52EACC: mov     edx, ds:0B10D7Ch[edx*4]
0x52EAD3: push    esi
0x52EAD4: mov     esi, [eax]
0x52EAD6: push    edx
0x52EAD7: push    ecx
0x52EAD8: mov     ecx, eax
0x52EADA: mov     eax, [esi+10h]
0x52EADD: call    eax
0x52EADF: pop     esi
0x52EAE0: retn    4
0x52EAE3: mov     eax, offset EmptyString
0x52EAE8: retn    4
