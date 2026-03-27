0x980787: push    offset dword_B30A08; lpAddend
0x98078C: call    dword ptr ds:0A2807Ch
0x980792: test    eax, eax
0x980794: jge     short locret_9807AF
0x980796: push    esi
0x980797: mov     esi, offset stru_BA9AF0
0x98079C: push    esi; lpCriticalSection
0x98079D: call    sub_980D64
0x9807A2: add     esi, 18h
0x9807A5: cmp     esi, offset unk_BA9B50
0x9807AB: pop     ecx
0x9807AC: jl      short loc_98079C
0x9807AE: pop     esi
0x9807AF: retn
