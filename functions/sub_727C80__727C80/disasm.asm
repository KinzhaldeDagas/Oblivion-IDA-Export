0x727C80: mov     eax, [esp+arg_0]
0x727C84: test    eax, eax
0x727C86: jnz     short loc_727C95
0x727C88: cmp     [ecx+0Ch], al
0x727C8B: jz      short loc_727C95
0x727C8D: mov     eax, [ecx+8]
0x727C90: mov     edx, [ecx+4]
0x727C93: jmp     short loc_727C99
0x727C95: mov     edx, [esp+arg_4]
0x727C99: cmp     byte ptr [ecx+0Dh], 0
0x727C9D: jnz     short locret_727CB3
0x727C9F: mov     ecx, ds:0B3F928h
0x727CA5: push    esi
0x727CA6: mov     esi, [ecx]
0x727CA8: push    edx
0x727CA9: push    eax
0x727CAA: mov     eax, [esi+0F8h]
0x727CB0: call    eax
0x727CB2: pop     esi
0x727CB3: retn    8
