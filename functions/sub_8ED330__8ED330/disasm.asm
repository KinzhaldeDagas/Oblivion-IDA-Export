0x8ED330: push    esi
0x8ED331: mov     esi, ecx
0x8ED333: call    sub_8ED000
0x8ED338: test    [esp+4+arg_0], 1
0x8ED33D: jz      short loc_8ED352
0x8ED33F: movzx   edx, word ptr [esi+4]
0x8ED343: mov     ecx, ds:0BA7D98h
0x8ED349: mov     eax, [ecx]
0x8ED34B: push    2Eh ; '.'
0x8ED34D: push    edx
0x8ED34E: push    esi
0x8ED34F: call    dword ptr [eax+14h]
0x8ED352: mov     eax, esi
0x8ED354: pop     esi
0x8ED355: retn    4
