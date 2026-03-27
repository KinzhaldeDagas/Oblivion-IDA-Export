0x8BA180: push    esi
0x8BA181: mov     esi, ecx
0x8BA183: call    sub_8BA0D0
0x8BA188: test    [esp+4+arg_0], 1
0x8BA18D: jz      short loc_8BA1A2
0x8BA18F: movzx   edx, word ptr [esi+4]
0x8BA193: mov     ecx, ds:0BA7D98h
0x8BA199: mov     eax, [ecx]
0x8BA19B: push    31h ; '1'
0x8BA19D: push    edx
0x8BA19E: push    esi
0x8BA19F: call    dword ptr [eax+14h]
0x8BA1A2: mov     eax, esi
0x8BA1A4: pop     esi
0x8BA1A5: retn    4
