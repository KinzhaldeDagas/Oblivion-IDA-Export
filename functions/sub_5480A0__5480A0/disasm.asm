0x5480A0: sub     esp, 28h
0x5480A3: mov     ecx, [esp+28h+arg_0]
0x5480A7: cmp     ecx, 0Ah
0x5480AA: mov     eax, 1
0x5480AF: mov     [esp+28h+var_28], offset iLevelUp01Mult
0x5480B6: mov     [esp+28h+var_24], offset iLevelUp02Mult
0x5480BE: mov     [esp+28h+var_20], offset unk_B37630
0x5480C6: mov     [esp+28h+var_1C], offset unk_B37638
0x5480CE: mov     [esp+28h+var_18], offset unk_B37640
0x5480D6: mov     [esp+28h+var_14], offset unk_B37648
0x5480DE: mov     [esp+28h+var_10], offset unk_B37650
0x5480E6: mov     [esp+28h+var_C], offset iLevelUp08Mult
0x5480EE: mov     [esp+28h+var_8], offset unk_B37660
0x5480F6: mov     [esp+28h+var_4], offset iLevelUp10Mult
0x5480FE: jl      short loc_548107
0x548100: mov     ecx, 0Ah
0x548105: jmp     short loc_54810B
0x548107: test    ecx, ecx
0x548109: jle     short loc_548120
0x54810B: mov     ecx, [esp+ecx*4+28h+var_2C]
0x54810F: test    ecx, ecx
0x548111: jnz     short loc_54811E
0x548113: mov     ds:0B35464h, ecx
0x548119: mov     ecx, offset dword_B35464
0x54811E: mov     eax, [ecx]
0x548120: add     esp, 28h
0x548123: retn
