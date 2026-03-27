0x980758: push    edi
0x980759: push    offset dword_B30A08; lpAddend
0x98075E: mov     edi, ecx
0x980760: call    dword ptr ds:0A28078h
0x980766: test    eax, eax
0x980768: jnz     short loc_980783
0x98076A: push    esi
0x98076B: mov     esi, offset stru_BA9AF0
0x980770: push    esi; lpCriticalSection
0x980771: call    unknown_libname_7
0x980776: add     esi, 18h
0x980779: cmp     esi, offset unk_BA9B50
0x98077F: pop     ecx
0x980780: jl      short loc_980770
0x980782: pop     esi
0x980783: mov     eax, edi
0x980785: pop     edi
0x980786: retn
