0x504E50: mov     eax, [esp+arg_8]
0x504E54: test    eax, eax
0x504E56: jnz     short loc_504E5B
0x504E58: xor     al, al
0x504E5A: retn
0x504E5B: mov     ecx, [esp+arg_18]
0x504E5F: push    ecx
0x504E60: push    0
0x504E62: push    0
0x504E64: push    eax
0x504E65: call    sub_4F5310
0x504E6A: add     esp, 10h
0x504E6D: retn
