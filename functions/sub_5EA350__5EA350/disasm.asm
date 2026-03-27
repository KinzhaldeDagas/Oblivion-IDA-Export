0x5EA350: push    esi
0x5EA351: mov     esi, ecx
0x5EA353: mov     ecx, [esi+364h]
0x5EA359: test    ecx, ecx
0x5EA35B: push    edi
0x5EA35C: mov     edi, [esp+8+arg_0]
0x5EA360: jz      short loc_5EA368
0x5EA362: push    edi
0x5EA363: call    sub_89F4D0
0x5EA368: mov     ecx, [esi+368h]
0x5EA36E: test    ecx, ecx
0x5EA370: jz      short loc_5EA378
0x5EA372: push    edi
0x5EA373: call    sub_89F4D0
0x5EA378: pop     edi
0x5EA379: pop     esi
0x5EA37A: retn    4
