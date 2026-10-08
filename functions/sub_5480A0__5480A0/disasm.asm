0x5480A0: sub     esp, 28h; Oblivion native attribute-bonus lookup. skillIncreaseCount <= 0 returns 1; values >= 10 use iLevelUp10Mult. Constructor defaults: counts 1-4 => x2, 5-7 => x3, 8-9 => x4, 10+ => x5.
0x5480A3: mov     ecx, [esp+28h+skillIncreaseCount]
0x5480A7: cmp     ecx, 0Ah
0x5480AA: mov     eax, 1
0x5480AF: mov     [esp+28h+var_28], offset g_iLevelUp01Mult
0x5480B6: mov     [esp+28h+var_24], offset g_iLevelUp02Mult
0x5480BE: mov     [esp+28h+var_20], offset g_iLevelUp03Mult
0x5480C6: mov     [esp+28h+var_1C], offset g_iLevelUp04Mult
0x5480CE: mov     [esp+28h+var_18], offset g_iLevelUp05Mult
0x5480D6: mov     [esp+28h+var_14], offset g_iLevelUp06Mult
0x5480DE: mov     [esp+28h+var_10], offset g_iLevelUp07Mult
0x5480E6: mov     [esp+28h+var_C], offset g_iLevelUp08Mult
0x5480EE: mov     [esp+28h+var_8], offset g_iLevelUp09Mult
0x5480F6: mov     [esp+28h+var_4], offset g_iLevelUp10Mult
0x5480FE: jl      short loc_548107
0x548100: mov     ecx, 0Ah
0x548105: jmp     short loc_54810B
0x548107: test    ecx, ecx
0x548109: jle     short loc_548120
0x54810B: mov     ecx, [esp+ecx*4+28h+var_2C]
0x54810F: test    ecx, ecx
0x548111: jnz     short loc_54811E
0x548113: mov     ds:0B35464h, ecx
0x548119: mov     ecx, offset flt_B35464
0x54811E: mov     eax, [ecx]
0x548120: add     esp, 28h
0x548123: retn
