0x994567: movlpd  xmm1, [esp+arg_8]
0x99456D: pextrw  eax, xmm1, 3
0x994572: and     eax, 8000h
0x994577: cmp     eax, 0
0x99457A: jz      __pow_pentium4___RET_INF
0x994580: fldz
0x994582: retn
