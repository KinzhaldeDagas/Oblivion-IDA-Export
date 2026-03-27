0x800FB0: mov     eax, [esp+arg_0]
0x800FB4: mov     edx, offset CacheOrNullString
0x800FB9: sub     edx, eax
0x800FBB: jmp     short loc_800FC0
0x800FBD: align 10h
0x800FC0: mov     cl, [eax]
0x800FC2: mov     [edx+eax], cl
0x800FC5: add     eax, 1
0x800FC8: test    cl, cl
0x800FCA: jnz     short loc_800FC0
0x800FCC: retn
