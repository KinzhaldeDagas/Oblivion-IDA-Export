0x587C20: mov     eax, [esp+arg_0]
0x587C24: lea     ecx, [eax-1]
0x587C27: cmp     ecx, 2Fh ; '/'
0x587C2A: ja      short loc_587C32
0x587C2C: add     eax, 0FFFFFFFFh
0x587C2F: retn    4
0x587C32: mov     eax, 30h ; '0'
0x587C37: retn    4
