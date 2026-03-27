0x982D85: push    dword ptr ds:0BAA5ECh
0x982D8B: call    __decode_pointer
0x982D90: test    eax, eax
0x982D92: pop     ecx
0x982D93: jz      short loc_982D97
0x982D95: call    eax
0x982D97: push    19h
0x982D99: call    __NMSG_WRITE
0x982D9E: push    1; Mask
0x982DA0: push    0; Flags
0x982DA2: call    __set_abort_behavior
0x982DA7: add     esp, 0Ch
0x982DAA: jmp     _abort
