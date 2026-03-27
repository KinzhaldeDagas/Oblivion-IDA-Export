0x91C5F0: push    esi
0x91C5F1: mov     esi, ecx
0x91C5F3: call    sub_91C520
0x91C5F8: test    [esp+4+arg_0], 1
0x91C5FD: jz      short loc_91C612
0x91C5FF: movzx   edx, word ptr [esi+4]
0x91C603: mov     ecx, ds:0BA7D98h
0x91C609: mov     eax, [ecx]
0x91C60B: push    32h ; '2'
0x91C60D: push    edx
0x91C60E: push    esi
0x91C60F: call    dword ptr [eax+14h]
0x91C612: mov     eax, esi
0x91C614: pop     esi
0x91C615: retn    4
