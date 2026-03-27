0x8D4230: push    esi
0x8D4231: mov     esi, ecx
0x8D4233: call    sub_8D3390
0x8D4238: test    [esp+4+arg_0], 1
0x8D423D: jz      short loc_8D4252
0x8D423F: movzx   edx, word ptr [esi+4]
0x8D4243: mov     ecx, ds:0BA7D98h
0x8D4249: mov     eax, [ecx]
0x8D424B: push    12h
0x8D424D: push    edx
0x8D424E: push    esi
0x8D424F: call    dword ptr [eax+14h]
0x8D4252: mov     eax, esi
0x8D4254: pop     esi
0x8D4255: retn    4
