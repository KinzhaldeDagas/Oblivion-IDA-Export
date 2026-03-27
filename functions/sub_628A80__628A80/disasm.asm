0x628A80: mov     eax, [esp+arg_4]
0x628A84: cmp     eax, 0Bh
0x628A87: mov     edx, [esp+arg_8]
0x628A8B: jnz     short loc_628AA4
0x628A8D: fild    [esp+arg_8]
0x628A91: mov     [esp+arg_8], edx
0x628A95: mov     [esp+arg_4], eax
0x628A99: fstp    dword ptr [ecx+294h]
0x628A9F: jmp     sub_643480
0x628AA4: cmp     eax, 30h ; '0'
0x628AA7: jnz     short loc_628AAF
0x628AA9: mov     [ecx+298h], edx
0x628AAF: mov     [esp+arg_8], edx
0x628AB3: mov     [esp+arg_4], eax
0x628AB7: jmp     sub_643480
