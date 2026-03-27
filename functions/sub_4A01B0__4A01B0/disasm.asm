0x4A01B0: mov     al, [ecx+0ECh]
0x4A01B6: cmp     al, 1
0x4A01B8: jz      short locret_4A01CB
0x4A01BA: movzx   edx, al
0x4A01BD: mov     eax, [esp+arg_0]
0x4A01C1: cmp     eax, edx
0x4A01C3: jz      short locret_4A01CB
0x4A01C5: mov     [ecx+0ECh], al
0x4A01CB: retn    4
