0x6F7440: mov     eax, [esp+File]
0x6F7444: movsx   ecx, [esp+arg_0]
0x6F7449: push    eax; File
0x6F744A: push    ecx; Ch
0x6F744B: call    _putc
0x6F7450: xor     edx, edx
0x6F7452: add     esp, 8
0x6F7455: cmp     eax, 0FFFFFFFFh
0x6F7458: setnz   dl
0x6F745B: mov     al, dl
0x6F745D: retn
