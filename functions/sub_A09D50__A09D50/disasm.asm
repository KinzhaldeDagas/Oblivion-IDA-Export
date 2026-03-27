0xA09D50: push    0; lpName
0xA09D52: push    1; lMaximumCount
0xA09D54: push    0; lInitialCount
0xA09D56: push    0; lpSemaphoreAttributes
0xA09D58: mov     dword_B3FB8C, 0
0xA09D62: mov     dword_B3FB90, 1
0xA09D6C: call    ds:CreateSemaphoreA
0xA09D72: push    offset sub_A26A90; void (__cdecl *)()
0xA09D77: mov     dword_B3FB94, eax
0xA09D7C: call    _atexit
0xA09D81: pop     ecx
0xA09D82: retn
