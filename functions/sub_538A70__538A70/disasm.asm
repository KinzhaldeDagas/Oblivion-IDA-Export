0x538A70: fld1
0x538A72: fcomp   dword ptr [ecx+14h]
0x538A75: fnstsw  ax
0x538A77: test    ah, 41h
0x538A7A: mov     eax, [esp+arg_0]
0x538A7E: jnz     short loc_538A87
0x538A80: mov     cl, 1
0x538A82: mov     [eax], cl
0x538A84: retn    4
0x538A87: xor     cl, cl
0x538A89: mov     [eax], cl
0x538A8B: retn    4
