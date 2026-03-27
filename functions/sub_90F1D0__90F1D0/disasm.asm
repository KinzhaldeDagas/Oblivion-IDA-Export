0x90F1D0: push    esi
0x90F1D1: mov     esi, ecx
0x90F1D3: call    sub_90F130
0x90F1D8: test    [esp+4+arg_0], 1
0x90F1DD: jz      short loc_90F1F2
0x90F1DF: movzx   edx, word ptr [esi+4]
0x90F1E3: mov     ecx, ds:0BA7D98h
0x90F1E9: mov     eax, [ecx]
0x90F1EB: push    0Ch
0x90F1ED: push    edx
0x90F1EE: push    esi
0x90F1EF: call    dword ptr [eax+14h]
0x90F1F2: mov     eax, esi
0x90F1F4: pop     esi
0x90F1F5: retn    4
