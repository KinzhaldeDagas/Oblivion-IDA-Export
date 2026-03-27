0x4702B0: mov     eax, [ecx+4]
0x4702B3: test    eax, eax
0x4702B5: jnz     short loc_4702BC
0x4702B7: mov     eax, offset EmptyString
0x4702BC: push    eax
0x4702BD: mov     eax, [esp+4+arg_0]
0x4702C1: push    eax
0x4702C2: call    sub_46FF20
0x4702C7: add     esp, 8
0x4702CA: retn    4
