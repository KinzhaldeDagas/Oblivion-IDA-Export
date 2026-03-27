0x90F9D0: push    esi
0x90F9D1: mov     esi, ecx
0x90F9D3: call    sub_90F5C0
0x90F9D8: test    [esp+4+arg_0], 1
0x90F9DD: jz      short loc_90F9F2
0x90F9DF: movzx   edx, word ptr [esi+4]
0x90F9E3: mov     ecx, ds:0BA7D98h
0x90F9E9: mov     eax, [ecx]
0x90F9EB: push    2Eh ; '.'
0x90F9ED: push    edx
0x90F9EE: push    esi
0x90F9EF: call    dword ptr [eax+14h]
0x90F9F2: mov     eax, esi
0x90F9F4: pop     esi
0x90F9F5: retn    4
