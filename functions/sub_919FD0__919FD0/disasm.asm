0x919FD0: push    esi
0x919FD1: mov     esi, ecx
0x919FD3: call    sub_919E30
0x919FD8: test    [esp+4+arg_0], 1
0x919FDD: jz      short loc_919FF2
0x919FDF: movzx   edx, word ptr [esi+4]
0x919FE3: mov     ecx, ds:0BA7D98h
0x919FE9: mov     eax, [ecx]
0x919FEB: push    32h ; '2'
0x919FED: push    edx
0x919FEE: push    esi
0x919FEF: call    dword ptr [eax+14h]
0x919FF2: mov     eax, esi
0x919FF4: pop     esi
0x919FF5: retn    4
