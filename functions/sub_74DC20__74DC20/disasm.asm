0x74DC20: push    ecx
0x74DC21: push    ebx
0x74DC22: push    ebp
0x74DC23: push    esi
0x74DC24: push    edi
0x74DC25: mov     edi, [esp+14h+arg_0]
0x74DC29: push    edi
0x74DC2A: mov     esi, ecx
0x74DC2C: call    sub_752CB0
0x74DC31: mov     ecx, edi
0x74DC33: call    sub_7124D0
0x74DC38: mov     ebx, eax
0x74DC3A: lea     ebp, [esi+18h]
0x74DC3D: push    ebx
0x74DC3E: mov     ecx, ebp
0x74DC40: call    sub_523B10
0x74DC45: xor     edi, edi
0x74DC47: test    ebx, ebx
0x74DC49: jbe     short loc_74DC9D
0x74DC4B: jmp     short loc_74DC50
0x74DC4D: align 10h
0x74DC50: mov     ecx, [esp+14h+arg_0]
0x74DC54: call    sub_7124A0
0x74DC59: mov     esi, eax
0x74DC5B: test    esi, esi
0x74DC5D: mov     [esp+14h+var_4], esi
0x74DC61: jz      short loc_74DC6D
0x74DC63: lea     eax, [esi+4]
0x74DC66: push    eax; lpAddend
0x74DC67: call    dword ptr ds:0A28078h
0x74DC6D: lea     ecx, [esp+14h+var_4]
0x74DC71: push    ecx
0x74DC72: push    edi
0x74DC73: mov     ecx, ebp
0x74DC75: call    sub_4B34E0
0x74DC7A: test    esi, esi
0x74DC7C: jz      short loc_74DC96
0x74DC7E: lea     edx, [esi+4]
0x74DC81: push    edx; lpAddend
0x74DC82: call    dword ptr ds:0A2807Ch
0x74DC88: test    eax, eax
0x74DC8A: jnz     short loc_74DC96
0x74DC8C: mov     eax, [esi]
0x74DC8E: mov     edx, [eax]
0x74DC90: push    1
0x74DC92: mov     ecx, esi
0x74DC94: call    edx
0x74DC96: add     edi, 1
0x74DC99: cmp     edi, ebx
0x74DC9B: jb      short loc_74DC50
0x74DC9D: pop     edi
0x74DC9E: pop     esi
0x74DC9F: pop     ebp
0x74DCA0: pop     ebx
0x74DCA1: pop     ecx
0x74DCA2: retn    4
