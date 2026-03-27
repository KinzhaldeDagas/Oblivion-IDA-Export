0x8A7F20: mov     edx, [esp+arg_4]
0x8A7F24: mov     eax, [esp+arg_0]
0x8A7F28: push    esi
0x8A7F29: mov     ecx, edx
0x8A7F2B: mov     esi, 1
0x8A7F30: shl     esi, cl
0x8A7F32: cmp     [esp+4+arg_8], 0
0x8A7F37: mov     ecx, eax
0x8A7F39: jz      short loc_8A7F52
0x8A7F3B: or      ds:0BA7DB0h[eax*4], esi
0x8A7F42: mov     esi, 1
0x8A7F47: shl     esi, cl
0x8A7F49: or      ds:0BA7DB0h[edx*4], esi
0x8A7F50: pop     esi
0x8A7F51: retn
0x8A7F52: not     esi
0x8A7F54: and     ds:0BA7DB0h[eax*4], esi
0x8A7F5B: mov     esi, 1
0x8A7F60: shl     esi, cl
0x8A7F62: not     esi
0x8A7F64: and     ds:0BA7DB0h[edx*4], esi
0x8A7F6B: pop     esi
0x8A7F6C: retn
