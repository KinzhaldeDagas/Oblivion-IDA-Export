0x91F6F0: push    esi
0x91F6F1: mov     esi, ecx
0x91F6F3: call    sub_91F720
0x91F6F8: test    [esp+4+arg_0], 1
0x91F6FD: jz      short loc_91F712
0x91F6FF: movzx   edx, word ptr [esi+4]
0x91F703: mov     ecx, ds:0BA7D98h
0x91F709: mov     eax, [ecx]
0x91F70B: push    15h
0x91F70D: push    edx
0x91F70E: push    esi
0x91F70F: call    dword ptr [eax+14h]
0x91F712: mov     eax, esi
0x91F714: pop     esi
0x91F715: retn    4
