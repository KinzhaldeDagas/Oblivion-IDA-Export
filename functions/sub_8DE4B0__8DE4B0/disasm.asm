0x8DE4B0: push    esi
0x8DE4B1: mov     esi, ecx
0x8DE4B3: call    sub_8DE350
0x8DE4B8: test    [esp+4+arg_0], 1
0x8DE4BD: jz      short loc_8DE4D2
0x8DE4BF: movzx   edx, word ptr [esi+4]
0x8DE4C3: mov     ecx, ds:0BA7D98h
0x8DE4C9: mov     eax, [ecx]
0x8DE4CB: push    2Fh ; '/'
0x8DE4CD: push    edx
0x8DE4CE: push    esi
0x8DE4CF: call    dword ptr [eax+14h]
0x8DE4D2: mov     eax, esi
0x8DE4D4: pop     esi
0x8DE4D5: retn    4
