0x64B240: cmp     [esp+arg_0], 0
0x64B245: push    esi
0x64B246: mov     esi, ecx
0x64B248: jnz     short loc_64B254
0x64B24A: mov     eax, [esi+0E4h]
0x64B250: pop     esi
0x64B251: retn    4
0x64B254: mov     ecx, [esi+0E4h]
0x64B25A: test    ecx, ecx
0x64B25C: jz      short loc_64B269
0x64B25E: push    0
0x64B260: call    ContainerEntryExtraData_HasWorn
0x64B265: test    al, al
0x64B267: jnz     short loc_64B24A
0x64B269: xor     eax, eax
0x64B26B: pop     esi
0x64B26C: retn    4
