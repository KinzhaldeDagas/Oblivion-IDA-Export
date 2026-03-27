0x9279F0: push    esi
0x9279F1: mov     esi, ecx
0x9279F3: call    sub_8895C0
0x9279F8: test    [esp+4+arg_0], 1
0x9279FD: jz      short loc_927A12
0x9279FF: movzx   edx, word ptr [esi+4]
0x927A03: mov     ecx, ds:0BA7D98h
0x927A09: mov     eax, [ecx]
0x927A0B: push    24h ; '$'
0x927A0D: push    edx
0x927A0E: push    esi
0x927A0F: call    dword ptr [eax+14h]
0x927A12: mov     eax, esi
0x927A14: pop     esi
0x927A15: retn    4
