0x452400: mov     eax, [esp+arg_0]
0x452404: test    eax, eax
0x452406: mov     ecx, 1
0x45240B: jz      short loc_452424
0x45240D: lea     edx, [eax+1]
0x452410: mov     cl, [eax]
0x452412: add     eax, 1
0x452415: test    cl, cl
0x452417: jnz     short loc_452410
0x452419: sub     eax, edx
0x45241B: add     eax, 1
0x45241E: movzx   eax, ax
0x452421: retn    4
0x452424: mov     ax, cx
0x452427: retn    4
