0x9294B0: push    esi
0x9294B1: mov     esi, ecx
0x9294B3: call    sub_9294E0
0x9294B8: test    [esp+4+arg_0], 1
0x9294BD: jz      short loc_9294D2
0x9294BF: movzx   edx, word ptr [esi+4]
0x9294C3: mov     ecx, ds:0BA7D98h
0x9294C9: mov     eax, [ecx]
0x9294CB: push    29h ; ')'
0x9294CD: push    edx
0x9294CE: push    esi
0x9294CF: call    dword ptr [eax+14h]
0x9294D2: mov     eax, esi
0x9294D4: pop     esi
0x9294D5: retn    4
