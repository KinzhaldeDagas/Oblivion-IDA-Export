0x504E70: mov     eax, [esp+arg_8]
0x504E74: test    eax, eax
0x504E76: jnz     short loc_504E7B
0x504E78: xor     al, al
0x504E7A: retn
0x504E7B: mov     ecx, [esp+arg_18]
0x504E7F: push    ecx
0x504E80: push    0
0x504E82: push    0
0x504E84: push    eax
0x504E85: call    sub_4F4690
0x504E8A: add     esp, 10h
0x504E8D: retn
