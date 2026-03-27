0x8CB420: push    esi
0x8CB421: mov     esi, ecx
0x8CB423: call    sub_8CB330
0x8CB428: test    [esp+4+arg_0], 1
0x8CB42D: jz      short loc_8CB442
0x8CB42F: movzx   edx, word ptr [esi+4]
0x8CB433: mov     ecx, ds:0BA7D98h
0x8CB439: mov     eax, [ecx]
0x8CB43B: push    32h ; '2'
0x8CB43D: push    edx
0x8CB43E: push    esi
0x8CB43F: call    dword ptr [eax+14h]
0x8CB442: mov     eax, esi
0x8CB444: pop     esi
0x8CB445: retn    4
