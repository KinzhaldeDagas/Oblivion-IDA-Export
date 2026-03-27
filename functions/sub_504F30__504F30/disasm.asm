0x504F30: mov     eax, [esp+arg_8]
0x504F34: test    eax, eax
0x504F36: jz      short loc_504F4B
0x504F38: mov     ecx, [esp+arg_18]
0x504F3C: push    ecx
0x504F3D: push    0
0x504F3F: push    0
0x504F41: push    eax
0x504F42: call    sub_4F8A50
0x504F47: add     esp, 10h
0x504F4A: retn
0x504F4B: mov     al, 1
0x504F4D: retn
