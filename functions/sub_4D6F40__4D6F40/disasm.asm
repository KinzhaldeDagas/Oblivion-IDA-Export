0x4D6F40: push    esi
0x4D6F41: mov     esi, ecx
0x4D6F43: mov     eax, [esi]
0x4D6F45: mov     edx, [eax+190h]
0x4D6F4B: call    edx
0x4D6F4D: test    al, al
0x4D6F4F: jnz     short loc_4D6F6F
0x4D6F51: cmp     [esp+4+arg_0], 0
0x4D6F56: mov     eax, [esi+8]
0x4D6F59: jz      short loc_4D6F67
0x4D6F5B: or      eax, 100000h
0x4D6F60: mov     [esi+8], eax
0x4D6F63: pop     esi
0x4D6F64: retn    4
0x4D6F67: and     eax, 0FFEFFFFFh
0x4D6F6C: mov     [esi+8], eax
0x4D6F6F: pop     esi
0x4D6F70: retn    4
