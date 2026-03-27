0x94BBC0: push    esi
0x94BBC1: mov     esi, ecx
0x94BBC3: call    sub_94BBF0
0x94BBC8: test    [esp+4+arg_0], 1
0x94BBCD: jz      short loc_94BBE2
0x94BBCF: movzx   edx, word ptr [esi+4]
0x94BBD3: mov     ecx, ds:0BA7D98h
0x94BBD9: mov     eax, [ecx]
0x94BBDB: push    15h
0x94BBDD: push    edx
0x94BBDE: push    esi
0x94BBDF: call    dword ptr [eax+14h]
0x94BBE2: mov     eax, esi
0x94BBE4: pop     esi
0x94BBE5: retn    4
