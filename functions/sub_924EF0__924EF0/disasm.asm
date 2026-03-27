0x924EF0: push    esi
0x924EF1: mov     esi, ecx
0x924EF3: call    sub_924E40
0x924EF8: test    [esp+4+arg_0], 1
0x924EFD: jz      short loc_924F12
0x924EFF: movzx   edx, word ptr [esi+4]
0x924F03: mov     ecx, ds:0BA7D98h
0x924F09: mov     eax, [ecx]
0x924F0B: push    29h ; ')'
0x924F0D: push    edx
0x924F0E: push    esi
0x924F0F: call    dword ptr [eax+14h]
0x924F12: mov     eax, esi
0x924F14: pop     esi
0x924F15: retn    4
