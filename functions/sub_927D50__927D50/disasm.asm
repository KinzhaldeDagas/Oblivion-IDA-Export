0x927D50: push    esi
0x927D51: mov     esi, ecx
0x927D53: call    sub_927C70
0x927D58: test    [esp+4+arg_0], 1
0x927D5D: jz      short loc_927D72
0x927D5F: movzx   edx, word ptr [esi+4]
0x927D63: mov     ecx, ds:0BA7D98h
0x927D69: mov     eax, [ecx]
0x927D6B: push    24h ; '$'
0x927D6D: push    edx
0x927D6E: push    esi
0x927D6F: call    dword ptr [eax+14h]
0x927D72: mov     eax, esi
0x927D74: pop     esi
0x927D75: retn    4
