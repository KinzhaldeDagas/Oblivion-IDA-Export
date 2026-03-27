0x913250: push    esi
0x913251: mov     esi, ecx
0x913253: call    sub_9131D0
0x913258: test    [esp+4+arg_0], 1
0x91325D: jz      short loc_913272
0x91325F: movzx   edx, word ptr [esi+4]
0x913263: mov     ecx, ds:0BA7D98h
0x913269: mov     eax, [ecx]
0x91326B: push    29h ; ')'
0x91326D: push    edx
0x91326E: push    esi
0x91326F: call    dword ptr [eax+14h]
0x913272: mov     eax, esi
0x913274: pop     esi
0x913275: retn    4
