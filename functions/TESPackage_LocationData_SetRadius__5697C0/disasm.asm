0x5697C0: mov     al, [ecx]
0x5697C2: cmp     al, 0FFh
0x5697C4: jz      short locret_5697D1
0x5697C6: cmp     al, 1
0x5697C8: jz      short locret_5697D1
0x5697CA: mov     eax, [esp+arg_0]
0x5697CE: mov     [ecx+4], eax
0x5697D1: retn    4
