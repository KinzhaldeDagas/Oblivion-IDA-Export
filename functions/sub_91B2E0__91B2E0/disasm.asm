0x91B2E0: push    esi
0x91B2E1: mov     esi, ecx
0x91B2E3: call    sub_91B210
0x91B2E8: test    [esp+4+arg_0], 1
0x91B2ED: jz      short loc_91B302
0x91B2EF: movzx   edx, word ptr [esi+4]
0x91B2F3: mov     ecx, ds:0BA7D98h
0x91B2F9: mov     eax, [ecx]
0x91B2FB: push    32h ; '2'
0x91B2FD: push    edx
0x91B2FE: push    esi
0x91B2FF: call    dword ptr [eax+14h]
0x91B302: mov     eax, esi
0x91B304: pop     esi
0x91B305: retn    4
