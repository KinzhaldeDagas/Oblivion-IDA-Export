0x918B90: push    esi
0x918B91: mov     esi, ecx
0x918B93: call    sub_9189A0
0x918B98: test    [esp+4+arg_0], 1
0x918B9D: jz      short loc_918BB2
0x918B9F: movzx   edx, word ptr [esi+4]
0x918BA3: mov     ecx, ds:0BA7D98h
0x918BA9: mov     eax, [ecx]
0x918BAB: push    32h ; '2'
0x918BAD: push    edx
0x918BAE: push    esi
0x918BAF: call    dword ptr [eax+14h]
0x918BB2: mov     eax, esi
0x918BB4: pop     esi
0x918BB5: retn    4
