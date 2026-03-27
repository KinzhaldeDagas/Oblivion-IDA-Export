0x64B270: cmp     [esp+arg_0], 0
0x64B275: push    esi
0x64B276: mov     esi, ecx
0x64B278: jnz     short loc_64B284
0x64B27A: mov     eax, [esi+0E8h]
0x64B280: pop     esi
0x64B281: retn    4
0x64B284: mov     ecx, [esi+0E8h]
0x64B28A: test    ecx, ecx
0x64B28C: jz      short loc_64B299
0x64B28E: push    0
0x64B290: call    ContainerEntryExtraData_HasWorn
0x64B295: test    al, al
0x64B297: jnz     short loc_64B27A
0x64B299: xor     eax, eax
0x64B29B: pop     esi
0x64B29C: retn    4
