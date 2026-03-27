0x4B6D20: call    sub_578D70
0x4B6D25: cmp     al, 1
0x4B6D27: jnz     short locret_4B6D4A
0x4B6D29: mov     eax, ds:0B333C4h
0x4B6D2E: mov     ecx, ds:0B35B20h
0x4B6D34: push    1
0x4B6D36: push    0
0x4B6D38: push    0
0x4B6D3A: push    eax
0x4B6D3B: call    ActivateRef
0x4B6D40: mov     dword ptr ds:0B35B20h, 0
0x4B6D4A: retn
