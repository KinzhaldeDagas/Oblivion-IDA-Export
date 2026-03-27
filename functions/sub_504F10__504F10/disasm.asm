0x504F10: mov     eax, [esp+arg_8]
0x504F14: test    eax, eax
0x504F16: jz      short loc_504F2B
0x504F18: mov     ecx, [esp+arg_18]
0x504F1C: push    ecx
0x504F1D: push    0
0x504F1F: push    0
0x504F21: push    eax
0x504F22: call    sub_4F5440
0x504F27: add     esp, 10h
0x504F2A: retn
0x504F2B: mov     al, 1
0x504F2D: retn
