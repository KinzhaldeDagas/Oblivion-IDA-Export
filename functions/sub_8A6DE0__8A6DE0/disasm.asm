0x8A6DE0: push    esi
0x8A6DE1: mov     esi, ecx
0x8A6DE3: call    sub_8A66A0
0x8A6DE8: test    [esp+4+arg_0], 1
0x8A6DED: jz      short loc_8A6E02
0x8A6DEF: movzx   edx, word ptr [esi+4]
0x8A6DF3: mov     ecx, ds:0BA7D98h
0x8A6DF9: mov     eax, [ecx]
0x8A6DFB: push    12h
0x8A6DFD: push    edx
0x8A6DFE: push    esi
0x8A6DFF: call    dword ptr [eax+14h]
0x8A6E02: mov     eax, esi
0x8A6E04: pop     esi
0x8A6E05: retn    4
