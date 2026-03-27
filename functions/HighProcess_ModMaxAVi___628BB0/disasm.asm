0x628BB0: mov     eax, [esp+arg_8]
0x628BB4: push    esi
0x628BB5: push    edi
0x628BB6: mov     edi, [esp+8+arg_4]
0x628BBA: push    eax
0x628BBB: mov     esi, ecx
0x628BBD: mov     ecx, [esp+0Ch+arg_0]
0x628BC1: push    edi
0x628BC2: push    ecx
0x628BC3: mov     ecx, esi
0x628BC5: call    MiddleProcess_ModAViMax
0x628BCA: cmp     edi, 0Bh
0x628BCD: jz      short loc_628BE3
0x628BCF: cmp     edi, 30h ; '0'
0x628BD2: jnz     short loc_628BEF
0x628BD4: pop     edi
0x628BD5: mov     dword ptr [esi+298h], 0FFFFFFFFh
0x628BDF: pop     esi
0x628BE0: retn    0Ch
0x628BE3: fld     dword ptr ds:0A30634h
0x628BE9: fstp    dword ptr [esi+294h]
0x628BEF: pop     edi
0x628BF0: pop     esi
0x628BF1: retn    0Ch
