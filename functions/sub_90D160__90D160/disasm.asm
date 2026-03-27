0x90D160: push    esi
0x90D161: mov     esi, ecx
0x90D163: call    sub_90D020
0x90D168: test    [esp+4+arg_0], 1
0x90D16D: jz      short loc_90D182
0x90D16F: movzx   edx, word ptr [esi+4]
0x90D173: mov     ecx, ds:0BA7D98h
0x90D179: mov     eax, [ecx]
0x90D17B: push    24h ; '$'
0x90D17D: push    edx
0x90D17E: push    esi
0x90D17F: call    dword ptr [eax+14h]
0x90D182: mov     eax, esi
0x90D184: pop     esi
0x90D185: retn    4
