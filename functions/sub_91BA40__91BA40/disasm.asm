0x91BA40: push    esi
0x91BA41: mov     esi, ecx
0x91BA43: call    sub_91B970
0x91BA48: test    [esp+4+arg_0], 1
0x91BA4D: jz      short loc_91BA62
0x91BA4F: movzx   edx, word ptr [esi+4]
0x91BA53: mov     ecx, ds:0BA7D98h
0x91BA59: mov     eax, [ecx]
0x91BA5B: push    32h ; '2'
0x91BA5D: push    edx
0x91BA5E: push    esi
0x91BA5F: call    dword ptr [eax+14h]
0x91BA62: mov     eax, esi
0x91BA64: pop     esi
0x91BA65: retn    4
