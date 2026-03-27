0x8ABCB0: push    esi
0x8ABCB1: mov     esi, ecx
0x8ABCB3: call    sub_8DE8B0
0x8ABCB8: test    [esp+4+arg_0], 1
0x8ABCBD: jz      short loc_8ABCD2
0x8ABCBF: movzx   edx, word ptr [esi+4]
0x8ABCC3: mov     ecx, ds:0BA7D98h
0x8ABCC9: mov     eax, [ecx]
0x8ABCCB: push    2Eh ; '.'
0x8ABCCD: push    edx
0x8ABCCE: push    esi
0x8ABCCF: call    dword ptr [eax+14h]
0x8ABCD2: mov     eax, esi
0x8ABCD4: pop     esi
0x8ABCD5: retn    4
