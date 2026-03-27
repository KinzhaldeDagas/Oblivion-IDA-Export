0x504F50: mov     eax, [esp+arg_8]
0x504F54: test    eax, eax
0x504F56: jz      short loc_504F6B
0x504F58: mov     ecx, [esp+arg_18]
0x504F5C: push    ecx
0x504F5D: push    0
0x504F5F: push    0
0x504F61: push    eax
0x504F62: call    sub_4F54A0
0x504F67: add     esp, 10h
0x504F6A: retn
0x504F6B: mov     al, 1
0x504F6D: retn
