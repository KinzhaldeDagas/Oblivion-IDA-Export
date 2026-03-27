0x504E10: mov     eax, [esp+arg_8]
0x504E14: test    eax, eax
0x504E16: jnz     short loc_504E1B
0x504E18: xor     al, al
0x504E1A: retn
0x504E1B: mov     ecx, [esp+arg_18]
0x504E1F: push    ecx
0x504E20: push    0
0x504E22: push    0
0x504E24: push    eax
0x504E25: call    sub_4F7B90
0x504E2A: add     esp, 10h
0x504E2D: retn
