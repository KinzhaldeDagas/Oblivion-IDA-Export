0x606140: push    ecx
0x606141: fldz
0x606143: mov     eax, [ecx+4]
0x606146: cmp     eax, 5; switch 6 cases
0x606149: fstp    [esp+4+var_4]
0x60614C: ja      short def_60614E
0x60614E: jmp     ds:jpt_60614E[eax*4]; switch jump
0x606155: mov     eax, [ecx+14h]; jumptable 0060614E case 0
0x606158: test    eax, eax
0x60615A: jnz     short loc_606161
0x60615C: mov     eax, [ecx+18h]
0x60615F: jmp     short loc_60616A
0x606161: push    eax
0x606162: call    sub_470520
0x606167: add     esp, 4
0x60616A: test    eax, eax
0x60616C: mov     [esp+4+var_4], eax
0x60616F: jnz     short loc_606178
0x606171: mov     [esp+4+var_4], 1
0x606178: fild    [esp+4+var_4]
0x60617B: fmul    dword ptr ds:0B37698h
0x606181: fstp    [esp+4+var_4]
0x606184: fld     [esp+4+var_4]
0x606187: pop     ecx
0x606188: retn
0x606189: fild    dword ptr ds:0B37688h; jumptable 0060614E case 3
0x60618F: fstp    [esp+4+var_4]
0x606192: fld     [esp+4+var_4]
0x606195: pop     ecx
0x606196: retn
0x606197: fild    dword ptr ds:0B376B0h; jumptable 0060614E case 5
0x60619D: fstp    [esp+4+var_4]
0x6061A0: fld     [esp+4+var_4]
0x6061A3: pop     ecx
0x6061A4: retn
0x6061A5: fild    dword ptr ds:0B37690h; jumptable 0060614E case 4
0x6061AB: fstp    [esp+4+var_4]
0x6061AE: fld     [esp+4+var_4]
0x6061B1: pop     ecx
0x6061B2: retn
0x6061B3: fild    dword ptr ds:0B376A0h; jumptable 0060614E case 1
0x6061B9: fstp    [esp+4+var_4]
0x6061BC: fld     [esp+4+var_4]
0x6061BF: pop     ecx
0x6061C0: retn
0x6061C1: fild    dword ptr ds:0B376A8h; jumptable 0060614E case 2
0x6061C7: fstp    [esp+4+var_4]
