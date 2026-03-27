0x92B3F0: push    esi
0x92B3F1: mov     esi, ecx
0x92B3F3: call    sub_92B420
0x92B3F8: test    [esp+4+arg_0], 1
0x92B3FD: jz      short loc_92B412
0x92B3FF: movzx   edx, word ptr [esi+4]
0x92B403: mov     ecx, ds:0BA7D98h
0x92B409: mov     eax, [ecx]
0x92B40B: push    24h ; '$'
0x92B40D: push    edx
0x92B40E: push    esi
0x92B40F: call    dword ptr [eax+14h]
0x92B412: mov     eax, esi
0x92B414: pop     esi
0x92B415: retn    4
