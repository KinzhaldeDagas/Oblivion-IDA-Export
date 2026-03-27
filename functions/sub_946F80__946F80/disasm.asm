0x946F80: push    esi
0x946F81: mov     esi, ecx
0x946F83: call    sub_946CB0
0x946F88: test    [esp+4+arg_0], 1
0x946F8D: jz      short loc_946FA2
0x946F8F: movzx   edx, word ptr [esi+4]
0x946F93: mov     ecx, ds:0BA7D98h
0x946F99: mov     eax, [ecx]
0x946F9B: push    32h ; '2'
0x946F9D: push    edx
0x946F9E: push    esi
0x946F9F: call    dword ptr [eax+14h]
0x946FA2: mov     eax, esi
0x946FA4: pop     esi
0x946FA5: retn    4
