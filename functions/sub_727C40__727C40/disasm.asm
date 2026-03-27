0x727C40: mov     eax, [esp+arg_0]
0x727C44: test    eax, eax
0x727C46: jnz     short loc_727C55
0x727C48: cmp     [ecx+0Ch], al
0x727C4B: jz      short loc_727C55
0x727C4D: mov     eax, [ecx+8]
0x727C50: mov     edx, [ecx+4]
0x727C53: jmp     short loc_727C59
0x727C55: mov     edx, [esp+arg_4]
0x727C59: cmp     byte ptr [ecx+0Dh], 0
0x727C5D: jnz     short locret_727C73
0x727C5F: mov     ecx, ds:0B3F928h
0x727C65: push    esi
0x727C66: mov     esi, [ecx]
0x727C68: push    edx
0x727C69: push    eax
0x727C6A: mov     eax, [esi+0F4h]
0x727C70: call    eax
0x727C72: pop     esi
0x727C73: retn    8
