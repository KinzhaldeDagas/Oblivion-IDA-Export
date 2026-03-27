0x99CB1A: pop     ebx
0x99CB1B: test    dword ptr [ebp-4], 4000000h
0x99CB22: jz      short loc_99CB32
0x99CB24: call    _has_osfxsr_set
0x99CB29: test    eax, eax
0x99CB2B: jz      short loc_99CB32
0x99CB2D: xor     eax, eax
0x99CB2F: inc     eax
0x99CB30: jmp     short loc_99CB34
0x99CB32: xor     eax, eax
0x99CB34: pop     ebx
0x99CB35: leave
0x99CB36: retn
