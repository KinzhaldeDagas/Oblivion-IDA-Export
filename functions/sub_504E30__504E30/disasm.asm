0x504E30: mov     eax, [esp+arg_8]
0x504E34: test    eax, eax
0x504E36: jnz     short loc_504E3B
0x504E38: xor     al, al
0x504E3A: retn
0x504E3B: mov     ecx, [esp+arg_18]
0x504E3F: push    ecx
0x504E40: push    0
0x504E42: push    0
0x504E44: push    eax
0x504E45: call    sub_4F5290
0x504E4A: add     esp, 10h
0x504E4D: retn
