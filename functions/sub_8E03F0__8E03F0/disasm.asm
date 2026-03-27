0x8E03F0: push    esi
0x8E03F1: mov     esi, ecx
0x8E03F3: call    sub_8E0240
0x8E03F8: test    [esp+4+arg_0], 1
0x8E03FD: jz      short loc_8E0412
0x8E03FF: movzx   edx, word ptr [esi+4]
0x8E0403: mov     ecx, ds:0BA7D98h
0x8E0409: mov     eax, [ecx]
0x8E040B: push    12h
0x8E040D: push    edx
0x8E040E: push    esi
0x8E040F: call    dword ptr [eax+14h]
0x8E0412: mov     eax, esi
0x8E0414: pop     esi
0x8E0415: retn    4
