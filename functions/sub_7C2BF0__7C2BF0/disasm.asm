0x7C2BF0: push    ecx
0x7C2BF1: cmp     dword ptr [ecx+238h], 0
0x7C2BF8: mov     [esp+4+var_4], 0
0x7C2BFF: jz      short loc_7C2C0B
0x7C2C01: mov     eax, [ecx+230h]
0x7C2C07: mov     eax, [eax]
0x7C2C09: jmp     short loc_7C2C0D
0x7C2C0B: xor     eax, eax
0x7C2C0D: test    eax, eax
0x7C2C0F: push    esi
0x7C2C10: mov     esi, [esp+8+arg_0]
0x7C2C14: mov     [esi], eax
0x7C2C16: jz      short loc_7C2C22
0x7C2C18: add     eax, 4
0x7C2C1B: push    eax; lpAddend
0x7C2C1C: call    dword ptr ds:0A28078h
0x7C2C22: mov     eax, esi
0x7C2C24: pop     esi
0x7C2C25: pop     ecx
0x7C2C26: retn    4
