0x8A9940: test    [esp+arg_0], 1
0x8A9945: push    esi
0x8A9946: mov     esi, ecx
0x8A9948: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8A994E: jz      short loc_8A9963
0x8A9950: movzx   edx, word ptr [esi+4]
0x8A9954: mov     ecx, ds:0BA7D98h
0x8A995A: mov     eax, [ecx]
0x8A995C: push    2Bh ; '+'
0x8A995E: push    edx
0x8A995F: push    esi
0x8A9960: call    dword ptr [eax+14h]
0x8A9963: mov     eax, esi
0x8A9965: pop     esi
0x8A9966: retn    4
