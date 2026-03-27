0x929840: push    esi
0x929841: mov     esi, ecx
0x929843: call    sub_929870
0x929848: test    [esp+4+arg_0], 1
0x92984D: jz      short loc_929862
0x92984F: movzx   edx, word ptr [esi+4]
0x929853: mov     ecx, ds:0BA7D98h
0x929859: mov     eax, [ecx]
0x92985B: push    24h ; '$'
0x92985D: push    edx
0x92985E: push    esi
0x92985F: call    dword ptr [eax+14h]
0x929862: mov     eax, esi
0x929864: pop     esi
0x929865: retn    4
