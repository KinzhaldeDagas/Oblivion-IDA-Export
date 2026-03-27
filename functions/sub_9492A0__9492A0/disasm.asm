0x9492A0: push    esi
0x9492A1: mov     esi, ecx
0x9492A3: call    sub_949180
0x9492A8: test    [esp+4+arg_0], 1
0x9492AD: jz      short loc_9492C2
0x9492AF: movzx   edx, word ptr [esi+4]
0x9492B3: mov     ecx, ds:0BA7D98h
0x9492B9: mov     eax, [ecx]
0x9492BB: push    32h ; '2'
0x9492BD: push    edx
0x9492BE: push    esi
0x9492BF: call    dword ptr [eax+14h]
0x9492C2: mov     eax, esi
0x9492C4: pop     esi
0x9492C5: retn    4
