0x99288D: cmp     byte_BAA644, 0
0x992894: jz      short locret_9928B0
0x992896: push    dword_BAA640
0x99289C: call    __decode_pointer
0x9928A1: pop     ecx
0x9928A2: push    eax; lpTopLevelExceptionFilter
0x9928A3: call    ds:SetUnhandledExceptionFilter
0x9928A9: mov     byte_BAA644, 0
0x9928B0: retn
