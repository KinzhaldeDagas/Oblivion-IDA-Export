0x99288D: cmp     byte ptr dword_BA9E10+834h, 0
0x992894: jz      short locret_9928B0
0x992896: push    dword_BA9E10+830h
0x99289C: call    __decode_pointer
0x9928A1: pop     ecx
0x9928A2: push    eax; lpTopLevelExceptionFilter
0x9928A3: call    ds:SetUnhandledExceptionFilter
0x9928A9: mov     byte ptr dword_BA9E10+834h, 0
0x9928B0: retn
