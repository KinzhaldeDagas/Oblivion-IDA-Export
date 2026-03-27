0x5E1A80: push    esi
0x5E1A81: mov     esi, ecx
0x5E1A83: cmp     dword ptr [esi+58h], 0
0x5E1A87: jz      short loc_5E1AA8
0x5E1A89: mov     ecx, [esi+58h]
0x5E1A8C: mov     eax, [ecx]
0x5E1A8E: mov     edx, [eax+8]
0x5E1A91: call    edx
0x5E1A93: test    eax, eax
0x5E1A95: jnz     short loc_5E1AA8
0x5E1A97: mov     esi, [esi+58h]
0x5E1A9A: test    esi, esi
0x5E1A9C: jz      short loc_5E1AA8
0x5E1A9E: mov     al, [esp+4+arg_0]
0x5E1AA2: mov     [esi+2A8h], al
0x5E1AA8: pop     esi
0x5E1AA9: retn    4
